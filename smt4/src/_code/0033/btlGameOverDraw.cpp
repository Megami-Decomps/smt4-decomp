/* NON_MATCHING: 50 lines. Retail reads layer 0's scale into a VFP register before it stores the pivot vectors
 * (`vldr s0, [r5, #44]` at 0x1bc) and layer 1's as a word at its matrix (`ldr r1, [r5, #52]`), and puts the front
 * sprite's truncated parallax through s1 (`vcvt.s32.f32 s1, s0`), where this build uses s0. Both scale vectors are
 * written alike, as temporaries (4 lines with layer 0's a named local declared ahead of the pivots and layer 1's a
 * temporary: two spellings of one operation, chosen by score; 83 with both named). */
#include "battle/btlGameOver.h"
#include "camp/RenderCtxTitle.h"
#include "gfx/StereoParallax.h"
#include "shard/TextureDrawCall.h"
#include "nw/math/MTX44Transform.h"
#include "ui/AnimatedMessage.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

using nw::math::MTX34;
using nw::math::MTX44;
using nw::math::VEC3;
using nw::math::VEC3Value;

extern "C" {

void nn_math_ARMv6_MTX34MultTranslateAsm_2A3504(MTX34 *out, const MTX34 *matrix, const VEC3 *translation);
void nn_math_ARMv6_MTX34AddTranslateAsm(MTX34 *out, const VEC3 *translation, const MTX34 *matrix);
void renderCtxCallB(const MTX44 *matrix);

enum {
    GAME_OVER_SPRITES = 0x2d,
    GAME_OVER_STATE_SHOWN = 8,
    GAME_OVER_SPRITE_FRONT = 1000,
    GAME_OVER_SPRITE_LAYER_0 = 2000,
    GAME_OVER_SPRITE_LAYER_1 = 2001,
    GAME_OVER_SPRITE_PIVOT = 2002,
    GAME_OVER_SPRITE_BACKGROUND = 3000
};

/* The game-over screen's upper-screen draw task (one per eye): the background, the two blended layers
 * scaled about the pivot sprite's position, and the front sprite, each at its stereo depth. */
u32 btlGameOverDraw(BtlGameOver *gameOver, u32 work)
{
    if (gameOver->state != GAME_OVER_STATE_SHOWN || gameOver->drawEnabled == 0) {
        return 0;
    }

    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(1.0f);
    gxResetColorQuadToWhite();
    asdTMTexTableEntryAt(GAME_OVER_SPRITES, GAME_OVER_SPRITE_BACKGROUND);
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.35f);
    texDrawTableEntryAtStoredOrigin(2, GAME_OVER_SPRITES, GAME_OVER_SPRITE_BACKGROUND, (s32)(f32)parallax, 0, 2);
    renderCtxPopCounted(g_titleScene, RENDER_STACK_A);
    efctSetSpeed(1.0f);

    renderCtxPushB(g_titleScene, packNibblesAndByte(6, 1, 0));
    efctSetSpeed(gameOver->layers[0].alpha);
    gxResetColorQuadToWhite();
    TextureTableEntryIV *pivotEntry = asdTMTexTableEntryAt(GAME_OVER_SPRITES, GAME_OVER_SPRITE_PIVOT);
    VEC3Value inversePivot((f32)-pivotEntry->x, (f32)-pivotEntry->y, 0.0f);
    VEC3Value pivot((f32)pivotEntry->x, (f32)pivotEntry->y, 0.0f);

    MTX44 matrix;
    MTX44Scale(&matrix, &VEC3Value(gameOver->layers[0].scale, gameOver->layers[0].scale, 1.0f));
    nn_math_ARMv6_MTX34MultTranslateAsm_2A3504((MTX34 *)&matrix, (MTX34 *)&matrix, &inversePivot);
    nn_math_ARMv6_MTX34AddTranslateAsm((MTX34 *)&matrix, &pivot, (MTX34 *)&matrix);
    renderCtxCallB(&matrix);
    TextureTableEntryIV *entry = asdTMTexTableEntryAt(GAME_OVER_SPRITES, GAME_OVER_SPRITE_LAYER_0);
    parallax = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
    texDrawTableEntryAtStoredOrigin(2, GAME_OVER_SPRITES, GAME_OVER_SPRITE_LAYER_0,
                                    (s32)((f32)parallax + (f32)-entry->x * 0.5f), -entry->y, 6);
    renderCtxApplyTransforms(g_titleScene);
    efctSetSpeed(1.0f);

    efctSetSpeed(gameOver->layers[1].alpha);
    MTX44Scale(&matrix, &VEC3Value(gameOver->layers[1].scale, gameOver->layers[1].scale, 1.0f));
    nn_math_ARMv6_MTX34MultTranslateAsm_2A3504((MTX34 *)&matrix, (MTX34 *)&matrix, &inversePivot);
    nn_math_ARMv6_MTX34AddTranslateAsm((MTX34 *)&matrix, &pivot, (MTX34 *)&matrix);
    renderCtxCallB(&matrix);
    entry = asdTMTexTableEntryAt(GAME_OVER_SPRITES, GAME_OVER_SPRITE_LAYER_1);
    parallax = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.3f);
    texDrawTableEntryAtStoredOrigin(2, GAME_OVER_SPRITES, GAME_OVER_SPRITE_LAYER_1,
                                    (s32)((f32)parallax + (f32)-entry->x * 0.5f), -entry->y, 6);
    renderCtxApplyTransforms(g_titleScene);
    efctSetSpeed(1.0f);
    renderCtxPopCounted(g_titleScene, RENDER_STACK_B);
    efctSetSpeed(1.0f);

    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(gameOver->frontAlpha);
    gxResetColorQuadToWhite();
    asdTMTexTableEntryAt(GAME_OVER_SPRITES, GAME_OVER_SPRITE_FRONT);
    parallax = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.28f);
    texDrawTableEntryAtStoredOrigin(2, GAME_OVER_SPRITES, GAME_OVER_SPRITE_FRONT, (s32)(f32)parallax, 0, 6);
    renderCtxPopCounted(g_titleScene, RENDER_STACK_A);
    efctSetSpeed(1.0f);
    return 0;
}

} /* extern "C" */
