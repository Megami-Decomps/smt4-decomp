/* NON_MATCHING: 152 lines (shape 184); the same calls, branches, constants and matrix stores as retail. What differs:
 * - the frame is 228 bytes (retail 204): the in-scene branch's three vectors (centre, scale, position) leave 24
 *   bytes of slots this build does not overlap with the four QuadVector temporaries, so those land at other offsets;
 * - scale.x and scale.y are in s18/s17 (retail s17/s18), and the in-scene position loads depth before y in retail. */
#include "ui/UiSpriteState.h"
#include "nw/math/MTX44Transform.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match7_QuadVectors.h"
#include "gfx/SpritePartDraw.h"
#include "camp/RenderCtxTitle.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

using nw::math::MTX44;
using nw::math::VEC3Value;

enum {
    SPRITE_DRAW_FLAGS = 2,
    SPRITE_DRAW_IN_SCENE = 0x2000
};

/* 128/pi: the binary angle steps (256 a turn) of a radian. */
#define RADIANS_TO_ANGLE 40.743663787841796875f

extern "C" {
void mathMatrixBuildRotationXyz(MTX44 *out, f32 x, f32 y, f32 z);
void cameraSetViewMatrix(RenderCtx *context, const MTX44 *matrix);
void renderCtxResetColorScale(RenderCtx *context);

/* Draws the sprite's image through a view matrix built from its position, centre, scale and rotation: on the
 * screen, or (inScene) at its depth in the scene, scaled by sceneScale. */
void effectRenderTransformedInstance(UiSpriteState *sprite, f32 parallax)
{
    if (sprite == NULL)
        return;
    if (sprite->updated == 0)
        return;
    if (sprite->image < 0 && sprite->secondaryImage < 0)
        return;

    sprite->parallax = parallax;

    bool scaled = false;
    bool rotated = false;
    MTX44 view;
    MTX44 transform;
    mtx44Copy(&view, &MTX44::Identity());
    mtx44Copy(&transform, &MTX44::Identity());

    VEC3Value scale(1.0f, 1.0f, 1.0f);

    efctSetSpeed(sprite->alpha);

    if (sprite->rotation != 0.0f)
        rotated = true;
    if (sprite->scale[1] != 1.0f || sprite->scale[2] != 1.0f) {
        if (sprite->scaleMode == 1) {
            scale.x = sprite->scale[1];
            scale.y = 1.0f;
        } else {
            scale.x = sprite->scaleMode == 2 ? 1.0f : sprite->scale[1];
            scale.y = sprite->scale[2];
        }
        scaled = true;
    }

    u32 flags;
    if (sprite->inScene != 0) {
        flags = SPRITE_DRAW_IN_SCENE | SPRITE_DRAW_FLAGS;
        if (sprite->active != 0) {
            VEC3Value centre((f32)-sprite->centerX, (f32)-sprite->centerY, 0.0f);
            nw::math::MTX44Translate(&transform, &centre);
            nw::math::MTX44Mult(&view, &view, &transform);
        }
        scale.x *= sprite->sceneScale;
        scale.y *= sprite->sceneScale;
        scale.z *= sprite->sceneScale;
        nw::math::MTX44Scale(&transform, &scale);
        nw::math::MTX44Mult(&view, &view, &transform);
        if (rotated) {
            mathMatrixBuildRotationXyz(&transform, 0.0f, 0.0f, sprite->rotation * RADIANS_TO_ANGLE);
            nw::math::MTX44Mult(&view, &view, &transform);
        }
        s32 x = sprite->centerX + (sprite->x >> 12);
        s32 y = sprite->centerY + (sprite->y >> 12);
        VEC3Value position((f32)x + sprite->parallax, (f32)-y, (f32)sprite->depth);
        nw::math::MTX44Translate(&transform, &position);
        nw::math::MTX44Mult(&view, &view, &transform);
    } else {
        flags = SPRITE_DRAW_FLAGS;
        s32 x = sprite->centerX + (sprite->x >> 12);
        s32 y = sprite->centerY + (sprite->y >> 12);
        VEC3Value position((f32)x + sprite->parallax, (f32)y, 0.0f);
        nw::math::MTX44Translate(&transform, &position);
        nw::math::MTX44Mult(&view, &view, &transform);
        if (rotated) {
            mathMatrixBuildRotationXyz(&transform, 0.0f, 0.0f, sprite->rotation * RADIANS_TO_ANGLE);
            nw::math::MTX44Mult(&view, &view, &transform);
        }
        if (scaled) {
            nw::math::MTX44Scale(&transform, &scale);
            nw::math::MTX44Mult(&view, &view, &transform);
        }
        if (sprite->active != 0) {
            VEC3Value centre((f32)-sprite->centerX, (f32)-sprite->centerY, 0.0f);
            nw::math::MTX44Translate(&transform, &centre);
            nw::math::MTX44Mult(&view, &view, &transform);
        }
    }

    cameraSetViewMatrix(g_titleScene, &view);
    if (sprite->secondaryImage >= 0) {
        texDrawCompositeSprite(flags, sprite->textureTable, sprite->secondaryImage, 0, 0, sprite->id);
    } else {
        texDrawTableEntryAtStoredOrigin(flags, sprite->textureTable, sprite->image, 0, 0, sprite->id);
    }
    efctSetSpeed(1.0f);
    quadSetOrderedVectors(QuadVector(), QuadVector(), QuadVector(), QuadVector(), 0, 1);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
}
}
