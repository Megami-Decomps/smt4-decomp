/* NON_MATCHING: twin of smt4 FUN_00325280 (same bytes once relocations are masked), same state: same calls, branches, loop structure and vector operations as retail (the
 * effPolygonThunder.c style of working in the scratch vector slots); what differs is armcc's register
 * and copy-class choice. Retail keeps the scratch base in r5 and the staging pointer in r8 for the
 * whole function, the core/glow widths in s28-s31/s23-s26 and the strip points in s16-s19; this build
 * reloads the base per block, spills the core width and copies several 16-byte values through core
 * registers (ldm/stm) where retail uses vldmia/vstmia. Retail also places the rest-timer block
 * before the dot-test else block (here after the loop exit). */
#include "AsdSDK/Source/Gfx/Effect/effPolygonThunder.h"
#include "AsdSDK/Source/Gfx/Effect/effPolygonThunderBolt.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "gfx/VectorScratch.h"
#include <math.h>
#include <string.h>

/* The scratch vector slots the effect code computes in, used like vector registers. */
#define VEC1 (&g_vectorScratch.first.poly)
#define VEC2 (&g_vectorScratch.second.poly)
#define VEC3 (&g_vectorScratch.third.poly)

extern "C" {

extern PolyVec4 g_polyDefaultColor;
extern PolyVec4 DAT_005c1110; /* the effect's local length axis, before rotation */
extern PolyVec4 g_effectRingScratchColor; /* staging vector the strip vertices are written through */

void matrixGetTranslation(PolyVec4 *axis);                         /* the camera's view axis */
void FUN_001bc460(void);                      /* rotation matrix from VEC1 */
void FUN_0037ee54(void);                                           /* VEC1 = VEC1 * rotation matrix */
void FUN_002f8b30(void);                                           /* normalizes VEC1.xyz */
void matrixCopySelectedToGlobal(const PolyVec4 *axis, f32 angle); /* rotation matrix about an axis */
f32 shiftRandomNextFraction(ShiftRandomState *state); // declcheck: local (the shared headers change this function's code (2224 -> 2359 diff lines))
u32 randomAdvanceShiftRegister(ShiftRandomState *state); // declcheck: local (the shared headers change this function's code (2224 -> 2359 diff lines))
f32 FUN_001a1ee0(f32 angle);

/* quaternion = (0, 0, 0, 1) (as effPolyThunderCreate writes it) */
static void quaternionSetIdentity(PolyVec4 *quaternion)
{
    memset(quaternion, 0, sizeof(*quaternion));
    quaternion->w = 1.0f;
}

/* v *= scale */
static __inline void vectorScale(PolyVec4 *v, f32 scale)
{
    v->x *= scale;
    v->y *= scale;
    v->z *= scale;
    v->w *= scale;
}

/* v *= factor, component by component */
static __inline void vectorMultiply(PolyVec4 *v, const PolyVec4 *factor)
{
    v->x *= factor->x;
    v->y *= factor->y;
    v->z *= factor->z;
    v->w *= factor->w;
}

/* v += delta */
static __inline void vectorAdd(PolyVec4 *v, const PolyVec4 *delta)
{
    v->x += delta->x;
    v->y += delta->y;
    v->z += delta->z;
    v->w += delta->w;
}

/* v -= delta */
static __inline void vectorSubtract(PolyVec4 *v, const PolyVec4 *delta)
{
    v->x -= delta->x;
    v->y -= delta->y;
    v->z -= delta->z;
    v->w -= delta->w;
}

/* v.xyz = v.xyz x other.xyz */
static __inline void vectorCross(PolyVec4 *v, const PolyVec4 *other)
{
    f32 x = v->y * other->z - v->z * other->y;
    f32 y = v->z * other->x - v->x * other->z;
    f32 z = v->x * other->y - v->y * other->x;
    v->x = x;
    v->y = y;
    v->z = z;
}

/* Scales v.xyz to unit length unless it is zero. */
static __inline void vectorNormalize(PolyVec4 *v)
{
    f32 length = sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
    if (length > 0.0f) {
        v->x /= length;
        v->y /= length;
        v->z /= length;
    }
}

/* a.xyz . b.xyz, the products summed afterwards */
static __inline f32 vectorDot(const PolyVec4 *a, const PolyVec4 *b)
{
    f32 x = a->x * b->x;
    f32 y = a->y * b->y;
    f32 z = a->z * b->z;
    return x + y + z;
}

/* Writes v.xyz to a vertex through the staging vector. */
static __inline void storeVertex(PolyVec3 *vertex, const PolyVec4 *v)
{
    PolyVec4 *staging = &g_effectRingScratchColor;
    *staging = *v;
    vertex->x = staging->x;
    vertex->y = staging->y;
    vertex->z = staging->z;
}

/* Writes one row of five vertices across the bolt: outer edge, inner edge, centre, inner edge, outer edge. */
static __inline void writeRow(PolyVec3 *row, const PolyVec4 *center, const PolyVec4 *normal, const PolyVec4 *inner,
                              const PolyVec4 *outer)
{
    *VEC1 = *center;
    storeVertex(&row[2], VEC1);
    *VEC1 = *normal;
    *VEC2 = *inner;
    vectorMultiply(VEC1, VEC2);
    *VEC3 = *VEC1;
    *VEC1 = *center;
    *VEC2 = *center;
    vectorAdd(VEC1, VEC3);
    storeVertex(&row[1], VEC1);
    *VEC1 = *VEC3;
    vectorSubtract(VEC2, VEC1);
    storeVertex(&row[3], VEC2);
    *VEC1 = *normal;
    *VEC2 = *outer;
    vectorMultiply(VEC1, VEC2);
    *VEC3 = *VEC1;
    *VEC1 = *center;
    *VEC2 = *center;
    vectorAdd(VEC1, VEC3);
    storeVertex(&row[0], VEC1);
    *VEC1 = *VEC3;
    vectorSubtract(VEC2, VEC1);
    storeVertex(&row[4], VEC2);
}

/* Rebuilds the strips of a thunder effect's arcs: each striking arc gets a new random zigzag path
 * through the effect's axis, swinging sideways on a sine wave, then rests for a random time. */
void FUN_003c694c(PolyThunderObject *obj)
{
    ThunderArc *arc = ((ThunderArcBlock *)obj->state)->arcs;
    ThunderBoltParams *params = (ThunderBoltParams *)obj->work;

    if (obj->frame > params->duration && params->duration != 0)
        return;

    s32 restFrames = params->restFrames;
    s32 count = params->boltCount;
    PolyVec4 view;
    matrixGetTranslation(&view);

    *VEC1 = g_polyDefaultColor;
    *VEC3 = *VEC1;
    vectorScale(VEC1, params->coreWidth);
    PolyVec4 inner = *VEC1;
    *VEC1 = *VEC3;
    vectorScale(VEC1, params->coreWidth + params->glowWidth);
    PolyVec4 outer = *VEC1;
    VEC1->x = -VEC1->x;
    VEC1->y = -VEC1->y;
    VEC1->z = -VEC1->z;
    PolyVec4 outerNegated = *VEC1;

    *VEC1 = obj->rotation1;
    FUN_001bc460();
    *VEC1 = DAT_005c1110;
    FUN_0037ee54();
    vectorScale(VEC1, params->length);
    quaternionSetIdentity(VEC2);
    f32 length = sqrtf(VEC1->x * VEC1->x + VEC1->y * VEC1->y + VEC1->z * VEC1->z);
    FUN_002f8b30();

    f32 amplitude = params->amplitude;
    PolyVec4 axis = *VEC1;
    f32 step = length * 2.0f / (f32)params->level;
    f32 swing = amplitude;

    for (s32 i = 0; i < count; i++, arc++) {
        if (arc->delay == -1) {
            arc->flash = 0xFFFFFFFF;
        } else if ((arc->flash & 0xFF000000) > 0x40000000) {
            arc->flash -= 0x40000000;
            PolyGeom *geom = arc->geom;
            PolyVec3 *row = geom->buf->positions;
            s32 pairs = geom->size / 5 >> 1;

            *VEC1 = view;
            *VEC2 = axis;
            vectorCross(VEC1, VEC2);
            vectorNormalize(VEC1);
            PolyVec4 side = *VEC1;

            f32 phase = shiftRandomNextFraction(NULL) * 6.2831855f;
            f32 wave = phase - 6.2831855f;
            f32 offset = FUN_001a1ee0(phase * 40.743664f) * swing;
            *VEC1 = side;
            vectorScale(VEC1, offset);
            PolyVec4 point = *VEC1;

            f32 previous = offset;
            offset = FUN_001a1ee0(phase * 40.743664f) * swing;
            *VEC1 = axis;
            vectorScale(VEC1, step);
            *VEC3 = *VEC1;
            *VEC1 = side;
            vectorScale(VEC1, offset - previous);
            vectorAdd(VEC1, VEC3);
            *VEC3 = *VEC1;
            *VEC2 = point;
            vectorAdd(VEC2, VEC1);
            PolyVec4 next = *VEC2;
            vectorNormalize(VEC1);
            PolyVec4 tangent = *VEC1;

            f32 phaseStep = 3.1415927f / (f32)pairs * 4.0f;
            for (s32 j = 0; j < pairs; j++) {
                *VEC1 = tangent;
                *VEC2 = view;
                vectorCross(VEC1, VEC2);
                vectorNormalize(VEC1);
                PolyVec4 normal = *VEC1;
                *VEC2 = *VEC1;
                writeRow(&row[0], &point, &normal, &inner, &outer);
                writeRow(&row[5], &next, &normal, &inner, &outer);
                row += 10;

                wave += phaseStep;
                phase += phaseStep;
                if (wave > 3.1415927f) {
                    wave -= 3.1415927f;
                    swing = amplitude * (1.0f - shiftRandomNextFraction(NULL) * 0.95f);
                }
                previous = offset;
                offset = FUN_001a1ee0(phase * 40.743664f) * swing;
                *VEC1 = axis;
                vectorScale(VEC1, step);
                *VEC3 = *VEC1;
                *VEC1 = side;
                vectorScale(VEC1, offset - previous);
                vectorAdd(VEC1, VEC3);
                PolyVec4 segment = *VEC1;
                matrixCopySelectedToGlobal(&view, (shiftRandomNextFraction(NULL) - 0.5f) * 2.0f * 0.34906584f);
                *VEC1 = segment;
                FUN_0037ee54();
                *VEC3 = *VEC1;
                *VEC2 = next;
                vectorAdd(VEC2, VEC1);
                vectorNormalize(VEC1);
                tangent = *VEC1;
                PolyVec4 after = *VEC2;
                *VEC1 = after;
                *VEC2 = next;
                vectorSubtract(VEC1, VEC2);
                vectorNormalize(VEC1);
                *VEC2 = normal;
                const PolyVec3 *edge;
                if (vectorDot(VEC1, VEC2) < 0.0f) {
                    *VEC3 = outer;
                    edge = &row[-1];
                } else {
                    *VEC3 = outerNegated;
                    edge = &row[-5];
                }
                *VEC1 = tangent;
                *VEC2 = view;
                vectorCross(VEC1, VEC2);
                vectorNormalize(VEC1);
                *VEC2 = *VEC3;
                vectorMultiply(VEC1, VEC2);
                g_effectRingScratchColor.x = edge->x;
                g_effectRingScratchColor.y = edge->y;
                g_effectRingScratchColor.z = edge->z;
                *VEC2 = g_effectRingScratchColor;
                vectorAdd(VEC1, VEC2);
                point = *VEC1;
                next = after;
            }
        } else {
            arc->delay = -1;
            if (restFrames > 0)
                arc->delay -= randomAdvanceShiftRegister(NULL) % restFrames;
            continue;
        }
        arc->delay += effGetFrameStep();
    }
}

} /* extern "C" */
