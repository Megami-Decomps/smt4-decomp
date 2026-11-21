/* NON_MATCHING: control flow, calls, constants and data accesses follow retail, but the VFP
 * register allocation and the stack frame differ (retail's frame is 268 bytes, ours 260; its spill
 * slots and local arrays sit at other offsets), the inlined matrix transforms load the matrix in
 * other groups, and the fade-out branch is laid out before the loop increment instead of at the end
 * of the function. */
#include "gfx/LightningEffect.h"
#include "gfx/VectorScratch.h"
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"
#include "gfx/QuaternionWorkspace.h"
#include "code/Code0024_Smt4.h"
#include "shard/W6_W6Match3_RotationY.h"
#include <math.h>

extern "C" {

/* Callees without a shared declaration: FUN_00245ed0 transforms the scratch vector by the scratch
 * matrix, FUN_00245f48 is asinf, FUN_002484e0 sets the scratch matrix to an X rotation and
 * FUN_002482d4 premultiplies it by the stored one (matrixSetRotationY), matrixCopySelectedToGlobal
 * sets it to a rotation about an axis, mathAtanAngle256 is an arctangent in 1/256 turns. */
void matrixGetTranslation(Vector4 *out);
void FUN_00245ed0(void);
f32 FUN_00245f48(f32 x);
void FUN_002482d4(void);
void FUN_002484e0(f32 angle);
void matrixCopySelectedToGlobal(const Vector4 *axis, f32 angle);
f32 phaseCosInterpolate(f32 phase);
f32 mathSinFixedAngle(f32 phase);
f32 mathAtanAngle256(f32 x);

/* A four-float temporary next to the scratch block (.data). */
extern Vector4 DAT_00472550;

#define PI 3.1415927f

/* A random factor in [1 - variance, 1]. */
static __inline f32 randomScale(f32 variance)
{
    return (1.0f - variance) + shiftRandomNextFraction(NULL) * variance;
}

/* A random value in [-1, 1]. */
static __inline f32 randomSigned(void)
{
    return (shiftRandomNextFraction(NULL) - 0.5f) * 2.0f;
}

/* Sine of an angle in radians (the table takes 256 units per turn). */
static __inline f32 sinRadians(f32 angle)
{
    return mathSinFixedAngle(angle * 40.743664f);
}

/* Angle of a slope that rises `rise` over `run`. */
static __inline f32 slopeAngle(f32 rise, f32 run)
{
    return FUN_00245f48(rise / sqrtf(rise * rise + run * run));
}

/* The vector operations of the scratch block, inlined from the vector module. */
static __inline void vecNormalize(Vector4 *v)
{
    f32 length = sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
    if (length > 0.0f) {
        v->x /= length;
        v->y /= length;
        v->z /= length;
    }
}

static __inline void vecCross(Vector4 *out, const Vector4 *a, const Vector4 *b)
{
    f32 x = a->y * b->z - a->z * b->y;
    f32 y = a->z * b->x - a->x * b->z;
    f32 z = a->x * b->y - a->y * b->x;
    out->x = x;
    out->y = y;
    out->z = z;
}

static __inline void vecScale(Vector4 *v, f32 scale)
{
    v->x *= scale;
    v->y *= scale;
    v->z *= scale;
    v->w *= scale;
}

static __inline void vecNegate(Vector4 *v)
{
    v->x = -v->x;
    v->y = -v->y;
    v->z = -v->z;
}

static __inline void vecAdd(Vector4 *v, const Vector4 *add)
{
    v->x += add->x;
    v->y += add->y;
    v->z += add->z;
    v->w += add->w;
}

static __inline void vecSub(Vector4 *v, const Vector4 *sub)
{
    v->x -= sub->x;
    v->y -= sub->y;
    v->z -= sub->z;
    v->w -= sub->w;
}

static __inline void vecTransform(Vector4 *v, const Matrix44 *matrix)
{
    const f32 (*m)[4] = (const f32 (*)[4])matrix->values;
    f32 x = v->x;
    f32 y = v->y;
    f32 z = v->z;
    Vector4 result;
    result.x = x * m[0][0] + y * m[1][0] + z * m[2][0];
    result.y = x * m[0][1] + y * m[1][1] + z * m[2][1];
    result.z = x * m[0][2] + y * m[1][2] + z * m[2][2];
    result.w = x * m[0][3] + y * m[1][3] + z * m[2][3];
    *v = result;
}

/* Stores a vector's xyz as a vertex position, through the temporary. */
static __inline void storePoint(PolyVec3 *point, const Vector4 *v)
{
    DAT_00472550 = *v;
    point->x = DAT_00472550.x;
    point->y = DAT_00472550.y;
    point->z = DAT_00472550.z;
}

/* Lightning update: respawns, fades and rebuilds every bolt. A live bolt starts at a point that
 * moves along a circle on a sphere around the effect, heads away from where it started last frame,
 * and zigzags along a sine wave with random bends; each segment is five vertices across the bolt,
 * facing the camera, and twists around the bolt by a random amount. */
void FUN_003041a0(LightningEffect *effect)
{
    LightningParams *params = effect->params;
    LightningWork *work = effect->work;
    LightningBolt *bolt = work->bolts;
    if (effect->frame > params->lifetime && params->lifetime != 0)
        return;

    s32 boltCount = params->boltCount;
    s32 respawnDelay = params->respawnDelay;
    f32 amplitude = params->amplitude;
    f32 gravity = params->gravity;
    f32 segments = (f32)params->segmentCount;
    f32 segmentLength = params->length / segments;
    f32 phaseStep = (f32)params->waveCount * PI / segments;
    u8 tilted = params->tilted;
    if (segmentLength <= 0.0f)
        return;

    Vector4 camera;
    matrixGetTranslation(&camera);
    f32 bend = 0.34906584f;
    Vector4 position;
    position.w = 0.0f;
    f32 widths[5];
    widths[0] = 0.0f;
    widths[1] = params->outerWidth;
    widths[2] = widths[1] + params->innerWidth;
    widths[3] = widths[2] + params->innerWidth;
    widths[4] = widths[3] + widths[1];
    f32 twistBase = segmentLength * 0.1f * -0.08726646f;
    f32 radius = work->radius;
    work->radius = radius + work->radiusSpeed;

    for (s32 i = 0; i < boltCount; i++, bolt++) {
        if (bolt->timer == -1) {
            f32 random = shiftRandomNextFraction(NULL);
            bolt->speed = ((1.0f - params->speedVariance) + random * params->speedVariance) * params->speed;
            bolt->elevation = 0.0f;
            if (tilted == 0) {
                bolt->pitch = randomSigned() * PI;
                bolt->height = 0.0f;
            } else {
                bolt->pitch = randomSigned() * 0.7853982f;
                bolt->height = shiftRandomNextFraction(NULL) * params->heightRange;
            }
            bolt->yaw = randomSigned() * PI;
            FUN_002484e0(bolt->pitch);
            matrixSetRotationY(bolt->yaw);
            FUN_002482d4();
            f32 phase = bolt->elevation * 40.743664f;
            position.x = phaseCosInterpolate(phase) * radius;
            position.y = 0.0f;
            position.z = mathSinFixedAngle(phase) * radius;
            g_vectorScratch.first.vector = position;
            FUN_00245ed0();
            position = g_vectorScratch.first.vector;
            bolt->position.x = position.x;
            bolt->position.y = position.y;
            bolt->position.z = position.z;
            bolt->color = 0xFFFFFFFF;
        } else if ((bolt->color & 0xFF000000) > 0x40000000) {
            bolt->color -= 0x40000000;
            PolyGeom *geom = bolt->geom;
            s32 segmentCount = geom->size / 5;
            PolyVec3 *points = geom->buf->positions;
            if (randomAdvanceShiftRegister(NULL) & 1)
                amplitude = -amplitude;
            f32 phase = shiftRandomNextFraction(NULL) * PI;
            f32 waveAmplitude = randomScale(0.95f) * amplitude;
            f32 sine = sinRadians(phase) * waveAmplitude;
            phase += phaseStep;
            f32 nextSine = sinRadians(phase) * waveAmplitude;
            f32 angle = slopeAngle(nextSine - sine, segmentLength);
            sine = nextSine;
            f32 innerWidth = params->innerWidth;
            f32 width = params->outerWidth + innerWidth;
            f32 twist = randomScale(0.7f) * twistBase;
            f32 time = (f32)(bolt->timer + 1);
            f32 elevation = bolt->elevation + (bolt->speed + gravity * time * 0.5f) * time;

            FUN_002484e0(bolt->pitch);
            matrixSetRotationY(bolt->yaw);
            FUN_002482d4();
            f32 elevationPhase = elevation * 40.743664f;
            f32 x = phaseCosInterpolate(elevationPhase) * radius;
            f32 z = mathSinFixedAngle(elevationPhase) * radius;
            g_vectorScratch.first.vector.x = x;
            g_vectorScratch.first.vector.y = 0.0f;
            g_vectorScratch.first.vector.z = z;
            g_vectorScratch.first.vector.w = 0.0f;
            FUN_00245ed0();
            position = g_vectorScratch.first.vector;
            Vector4 head = position;

            vecNormalize(&g_vectorScratch.first.vector);
            Vector4 direction = g_vectorScratch.first.vector;
            Vec3f origin = bolt->position;
            Vec3f delta;
            delta.x = head.x - origin.x;
            delta.y = head.y - origin.y;
            delta.z = head.z - origin.z;
            g_vectorScratch.first.vector.w = 0.0f;
            g_vectorScratch.first.direction = delta;
            vecNormalize(&g_vectorScratch.first.vector);
            Vector4 forward = g_vectorScratch.first.vector;
            g_vectorScratch.third.vector = forward;
            g_vectorScratch.second.vector = direction;
            vecCross(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
            Vector4 side = g_vectorScratch.first.vector;
            g_vectorScratch.second.vector = camera;
            g_vectorScratch.first.vector.x = g_vectorScratch.third.vector.x;
            g_vectorScratch.first.vector.y = g_vectorScratch.third.vector.y;
            g_vectorScratch.first.vector.z = g_vectorScratch.third.vector.z;
            vecCross(&g_vectorScratch.first.vector, &g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
            vecNormalize(&g_vectorScratch.first.vector);
            g_vectorScratch.third.vector.x = g_vectorScratch.first.vector.x;
            g_vectorScratch.third.vector.y = g_vectorScratch.first.vector.y;
            g_vectorScratch.third.vector.z = g_vectorScratch.first.vector.z;
            g_vectorScratch.second.vector = g_vectorScratch.first.vector;

            vecScale(&g_vectorScratch.first.vector, width);
            storePoint(&points[0], &g_vectorScratch.first.vector);
            vecNegate(&g_vectorScratch.first.vector);
            storePoint(&points[4], &g_vectorScratch.first.vector);
            vecScale(&g_vectorScratch.second.vector, innerWidth);
            storePoint(&points[1], &g_vectorScratch.second.vector);
            vecNegate(&g_vectorScratch.second.vector);
            storePoint(&points[3], &g_vectorScratch.second.vector);
            points[2].x = 0.0f;
            points[2].y = 0.0f;
            points[2].z = 0.0f;

            g_vectorScratch.second.vector.x = head.x;
            g_vectorScratch.second.vector.y = head.y + bolt->height;
            g_vectorScratch.second.vector.z = head.z;
            g_vectorScratch.second.vector.w = position.w;
            f32 offsets[5];
            for (s32 k = 0; k < 5; k++) {
                DAT_00472550.x = points[k].x;
                DAT_00472550.y = points[k].y;
                DAT_00472550.z = points[k].z;
                g_vectorScratch.first.vector = DAT_00472550;
                vecAdd(&g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
                storePoint(&points[k], &g_vectorScratch.first.vector);
                offsets[k] = 0.0f;
            }
            bolt->position.x = head.x;
            bolt->position.y = head.y;
            bolt->position.z = head.z;

            PolyVec3 *previous = points;
            for (s32 segment = 1; segment < segmentCount; segment++) {
                PolyVec3 *current = previous + 5;
                f32 bendStep = randomScale(0.75f) * bend;
                if (randomAdvanceShiftRegister(NULL) & 1)
                    bend = -bend;
                phase += phaseStep;
                if (phase >= PI) {
                    phase -= PI;
                    amplitude = -amplitude;
                    waveAmplitude = randomScale(0.95f) * amplitude;
                    twist = randomScale(0.7f) * twistBase;
                }
                nextSine = sinRadians(phase) * waveAmplitude;
                f32 nextAngle = slopeAngle(nextSine - sine, segmentLength) + bendStep;

                matrixCopySelectedToGlobal(&direction, angle);
                g_vectorScratch.first.vector = forward;
                vecTransform(&g_vectorScratch.first.vector, &g_vectorScratch.matrix.matrix);
                Vector4 rotated = g_vectorScratch.first.vector;
                matrixCopySelectedToGlobal(&side, twist);
                g_vectorScratch.first.vector = forward;
                vecTransform(&g_vectorScratch.first.vector, &g_vectorScratch.matrix.matrix);
                forward = g_vectorScratch.first.vector;
                g_vectorScratch.first.vector = head;
                g_vectorScratch.second.vector = head;
                vecTransform(&g_vectorScratch.first.vector, &g_vectorScratch.matrix.matrix);
                head = g_vectorScratch.first.vector;
                vecSub(&g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
                f32 length = sqrtf(g_vectorScratch.first.vector.x * g_vectorScratch.first.vector.x +
                                   g_vectorScratch.first.vector.y * g_vectorScratch.first.vector.y +
                                   g_vectorScratch.first.vector.z * g_vectorScratch.first.vector.z);
                f32 spread = mathAtanAngle256((nextAngle - angle) * 0.5f) * (PI / 128.0f);
                sine = nextSine;
                angle = nextAngle;
                g_vectorScratch.third.vector = rotated;
                for (s32 k = 0; k < 5; k++) {
                    f32 offset = widths[k] * spread;
                    offsets[k] += offset;
                    f32 scale = offsets[k] + length;
                    g_vectorScratch.second.vector = g_vectorScratch.third.vector;
                    DAT_00472550.x = previous[k].x;
                    DAT_00472550.y = previous[k].y;
                    DAT_00472550.z = previous[k].z;
                    g_vectorScratch.first.vector = DAT_00472550;
                    vecScale(&g_vectorScratch.second.vector, scale);
                    vecAdd(&g_vectorScratch.first.vector, &g_vectorScratch.second.vector);
                    storePoint(&current[k], &g_vectorScratch.first.vector);
                    offsets[k] = offset;
                }
                previous = current;
            }
        } else {
            bolt->timer = -1;
            if (respawnDelay > 0)
                bolt->timer -= randomAdvanceShiftRegister(NULL) % respawnDelay;
            continue;
        }
        bolt->timer += effGetFrameCounter();
    }
}

} /* extern "C" */
