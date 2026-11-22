/* NON_MATCHING: 523 lines, the port of Apocalypse's rewrite with the five attribute streams zero-initialised (retail
 * and the twin leave a stream whose attribute bit is clear unset and still step it: 497 lines without the ten stores).
 * The structure lines up, but about 200 of the differing lines are stack offsets: retail's frame is 452 bytes (428
 * here), with 24 unused bytes at its lowest offsets (sp+12..35, two more VEC3s: the rotation's axis and
 * its normalised copy are the likely owners; passing the axis by pointer reserves 12 of them but then computes the
 * squares at run time, which retail folds). Retail also copies the corners' 0.0 into three more VFP registers, keeps
 * the facing matrix's address in r5 from the top of each sprite and spills the output texcoord pointer. The earlier
 * draft scored 456 but built 295 rows: it left the vertex output out, so this complete rewrite replaced it. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "code/Code002a_Smt4.h"
#include "gfx/BillboardShape.h"
#include "nw/math/MTX44Transform.h"
#include "nw/math/Trig.h"
#include "nw/math/VEC3.h"
#include "nw/math/VEC4.h"

extern "C" {
void renderCtxResetColorScale(RenderCtx *context);
/* Updates and, when changed, uploads the render context's four colour multipliers. */
void modelApplyChangedCachedVector(RenderCtx *context, f32 red, f32 green, f32 blue, f32 alpha);
void renderGetCameraViewMatrix(nw::math::MTX44 *out);
void nn_math_ARMv6_MTX44TransposeAsm(nw::math::MTX44 *out, const nw::math::MTX44 *in);
void mtx44TransformPosition(nw::math::VEC4 *out, const nw::math::MTX44 *matrix, const nw::math::VEC3 *position);
void billboardShapeGetStream(BillboardShape *shape, u32 attribute, BillboardStream *out);
void FUN_002573d8(void);
void forwardRecoveredCallback(void); // declcheck: local (the shared declaration takes a context this caller does not set)
} /* extern "C" */

namespace nw {
namespace math {

/* nn::math::MTX44RotAxisRad_: the rotation by `radians` about `axis`. */
static __inline MTX44 *MTX44RotAxisRad(MTX44 *out, f32 ax, f32 ay, f32 az, f32 radians)
{
    f32 s, c;
    sinCosRad(&s, &c, radians);
    f32 t = 1.0f - c;
    VEC3Value axis(ax, ay, az);
    VEC3 unit;
    VEC3Normalize(&unit, &axis);
    f32 x = unit.x;
    f32 y = unit.y;
    f32 z = unit.z;
    f32 xSq = x * x;
    f32 ySq = y * y;
    f32 zSq = z * z;
    out->m[0][0] = t * xSq + c;
    out->m[0][1] = t * x * y - s * z;
    out->m[0][2] = t * x * z + s * y;
    out->m[0][3] = 0.0f;
    out->m[1][0] = t * x * y + s * z;
    out->m[1][1] = t * ySq + c;
    out->m[1][2] = t * y * z - s * x;
    out->m[1][3] = 0.0f;
    out->m[2][0] = t * x * z - s * y;
    out->m[2][1] = t * y * z + s * x;
    out->m[2][2] = t * zSq + c;
    out->m[2][3] = 0.0f;
    out->m[3][0] = 0.0f;
    out->m[3][1] = 0.0f;
    out->m[3][2] = 0.0f;
    out->m[3][3] = 1.0f;
    return out;
}

/* nn::math::VEC3TransformArray: `count` points through a 4x4 matrix. */
static __inline VEC4 *VEC3TransformArray(VEC4 *out, const MTX44 *matrix, const VEC3 *points, u32 count)
{
    VEC4 *destination = out;
    for (u32 i = 0; i < count; ++i) {
        mtx44TransformPosition(destination, matrix, points);
        ++destination;
        ++points;
    }
    return out;
}

} /* namespace math */
} /* namespace nw */

extern "C" {

/* Builds and submits the shape's sprites as camera-facing quads: each is sized, offset by the pivot, rolled by
 * its rotation and placed at its position. */
void billboardShapeDraw(BillboardShape *shape)
{
    /* A stream whose attribute bit is clear stays at NULL with no step (retail leaves it unset and still steps it). */
    BillboardStream positions = { 0, 0 };
    BillboardStream colors = { 0, 0 };
    BillboardStream sizes = { 0, 0 };
    BillboardStream rotations = { 0, 0 };
    BillboardStream texCoords = { 0, 0 };

    renderCtxApplyTransforms(g_titleScene);
    s32 count = shape->capacity;
    s32 active = shape->count;
    if (active < count) {
        count = active;
    }
    if ((shape->attributes & BILLBOARD_ATTRIBUTE_POSITION) != 0) {
        billboardShapeGetStream(shape, BILLBOARD_ATTRIBUTE_POSITION, &positions);
    }
    if ((shape->attributes & BILLBOARD_ATTRIBUTE_COLOR) != 0) {
        billboardShapeGetStream(shape, BILLBOARD_ATTRIBUTE_COLOR, &colors);
    }
    if ((shape->attributes & BILLBOARD_ATTRIBUTE_SIZE) != 0) {
        billboardShapeGetStream(shape, BILLBOARD_ATTRIBUTE_SIZE, &sizes);
    }
    if ((shape->attributes & BILLBOARD_ATTRIBUTE_ROTATION) != 0) {
        billboardShapeGetStream(shape, BILLBOARD_ATTRIBUTE_ROTATION, &rotations);
    }
    if ((shape->attributes & BILLBOARD_ATTRIBUTE_TEXCOORD_ALT) != 0) {
        billboardShapeGetStream(shape, BILLBOARD_ATTRIBUTE_TEXCOORD_ALT, &texCoords);
    }
    if ((shape->attributes & BILLBOARD_ATTRIBUTE_TEXCOORD) != 0) {
        billboardShapeGetStream(shape, BILLBOARD_ATTRIBUTE_TEXCOORD, &texCoords);
    } else if ((shape->attributes & BILLBOARD_ATTRIBUTE_SHARED_TEXCOORD) != 0) {
        texCoords.data = (u32)shape->sharedTexCoords;
        texCoords.stride = 0;
    }

    renderCtxSelectTexture(g_titleScene, shape->texture);
    modelApplyChangedCachedVector(g_titleScene, (f32)shape->tint[0] * (1.0f / 255.0f), (f32)shape->tint[1] * (1.0f / 255.0f),
                 (f32)shape->tint[2] * (1.0f / 255.0f), (f32)shape->tint[3] * (1.0f / 255.0f));

    const f32 *pivot = NULL;
    nw::math::VEC3 *vertexPositions = shape->buffers->positions;
    u32 *vertexColors = shape->buffers->colors;
    f32 *vertexTexCoords = shape->buffers->texCoords;
    if ((shape->flags & BILLBOARD_FLAG_PIVOT) != 0) {
        pivot = shape->pivot;
    }

    /* The camera's rotation alone, inverted: it turns the quad to face the camera. */
    nw::math::MTX44 facing;
    renderGetCameraViewMatrix(&facing);
    facing.m[0][3] = 0.0f;
    facing.m[1][3] = 0.0f;
    facing.m[2][3] = 0.0f;
    facing.m[3][0] = 0.0f;
    facing.m[3][1] = 0.0f;
    facing.m[3][2] = 0.0f;
    facing.m[3][3] = 1.0f;
    nn_math_ARMv6_MTX44TransposeAsm(&facing, &facing);

    for (s32 i = 0; i < count; ++i, positions.data += positions.stride, colors.data += colors.stride,
             sizes.data += sizes.stride, rotations.data += rotations.stride, texCoords.data += texCoords.stride) {
        nw::math::VEC3 *outPosition = &vertexPositions[i * 4];
        u32 *outColor = &vertexColors[i * 4];
        f32 *outTexCoord = &vertexTexCoords[i * 8];
        const nw::math::VEC3 *position = (const nw::math::VEC3 *)positions.data;
        const BillboardColor *color = (const BillboardColor *)colors.data;
        const f32 *size = (const f32 *)sizes.data;
        const f32 *rotation = (const f32 *)rotations.data;
        const f32 *texCoord = (const f32 *)texCoords.data;

        u32 packedColor = (color->channels.red << 24) | (color->channels.green << 16) |
                          (color->channels.blue << 8) | color->channels.alpha;
        f32 halfWidth = size[0] * 0.5f;
        f32 halfHeight = size[1] * 0.5f;
        f32 x = 0.0f;
        f32 y = 0.0f;
        if (pivot != NULL) {
            x -= pivot[0] * halfWidth;
            y -= pivot[1] * halfHeight;
        }
        nw::math::VEC3 corners[4];
        corners[0] = nw::math::VEC3Value(x - halfWidth, y + halfHeight, 0.0f);
        corners[1] = nw::math::VEC3Value(x - halfWidth, y - halfHeight, 0.0f);
        corners[2] = nw::math::VEC3Value(x + halfWidth, y - halfHeight, 0.0f);
        corners[3] = nw::math::VEC3Value(x + halfWidth, y + halfHeight, 0.0f);

        nw::math::MTX44 roll;
        nw::math::MTX44RotAxisRad(&roll, 0.0f, 0.0f, -1.0f, *rotation);
        nw::math::MTX44 transform;
        nw::math::MTX44Mult(&transform, &facing, &roll);
        nw::math::VEC4 offsets[4];
        nw::math::VEC3TransformArray(offsets, &transform, corners, 4);

        FUN_002573d8();
        outPosition[0].x = offsets[0].x + position->x;
        outPosition[0].y = offsets[0].y + position->y;
        outPosition[0].z = offsets[0].z + position->z;
        outColor[0] = packedColor;
        outTexCoord[0] = texCoord[2];
        outTexCoord[1] = texCoord[1];
        debugQuadVertex(outColor[0], outPosition[0], outTexCoord[0], outTexCoord[1]);
        outPosition[1].x = offsets[1].x + position->x;
        outPosition[1].y = offsets[1].y + position->y;
        outPosition[1].z = offsets[1].z + position->z;
        outColor[1] = packedColor;
        outTexCoord[2] = texCoord[2];
        outTexCoord[3] = texCoord[3];
        debugQuadVertex(outColor[1], outPosition[1], outTexCoord[2], outTexCoord[3]);
        outPosition[2].x = offsets[2].x + position->x;
        outPosition[2].y = offsets[2].y + position->y;
        outPosition[2].z = offsets[2].z + position->z;
        outColor[2] = packedColor;
        outTexCoord[4] = texCoord[0];
        outTexCoord[5] = texCoord[3];
        debugQuadVertex(outColor[2], outPosition[2], outTexCoord[4], outTexCoord[5]);
        outPosition[3].x = offsets[3].x + position->x;
        outPosition[3].y = offsets[3].y + position->y;
        outPosition[3].z = offsets[3].z + position->z;
        outColor[3] = packedColor;
        outTexCoord[6] = texCoord[0];
        outTexCoord[7] = texCoord[1];
        debugQuadVertex(outColor[3], outPosition[3], outTexCoord[6], outTexCoord[7]);
        forwardRecoveredCallback();
    }

    renderCtxResetColorScale(g_titleScene);
    renderCtxApplyTransforms(g_titleScene);
}

} /* extern "C" */
