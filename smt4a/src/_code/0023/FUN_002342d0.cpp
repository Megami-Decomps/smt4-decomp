/* NON_MATCHING: identical except for the push helper's address computation (retail keeps index+1 in r2 and reuses r3), the load order of two float constants and the operand order of the final vmul. */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "map/mapIf.h"
#include "map/mapDepart.h"

extern "C" {
extern MapIfGlobalsA g_mapIf;
extern RenderCtxA *g_renderCtx;
extern GameStateA g_gameState;

u32 FUN_001692ac(u32 first, u32 second);
void efctSetSpeed(f32 speed);
void FUN_002bf0d4(u32 layer, u32 sprite, s32 *bounds);
void FUN_001849bc(u32 kind, u32 layer, u32 sprite, u32 argument, s32 y, u32 order, s32 *bounds);

// Draws the map interface's fade frame: the sprite pair and the sliding third sprite, under a fade level that follows
// the interface's timer (down, back up, then down again).
void FUN_002342d0(u32 argument)
{
    MapIfStateA *state = g_mapIf.state;
    if (state->fadeMode == 0 || g_gameState.mode >= 100) {
        return;
    }
    renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));

    f32 progress = state->fadeProgress;
    if (state->fadeMode == 3) {
        progress = 0.0f;
    }
    f32 one = 1.0f;
    f32 level;
    s32 timer = state->fadeTimer;
    if (timer < 10) {
        level = one + ((f32)timer * 0.1f) * -0.6f;
    } else if (timer < 25) {
        level = 0.4f + ((f32)(timer - 10) * (1.0f / 15.0f)) * 0.6f;
    } else {
        level = one + ((f32)(timer - 25) * (1.0f / 15.0f)) * -0.6f;
    }
    efctSetSpeed(level);
    FUN_001835b4(2, 0x13, 0x11f8, argument, 0, 11);
    efctSetSpeed(one);
    FUN_001835b4(2, 0x13, 0x11f9, argument, 0, 11);

    s32 bounds[4];
    FUN_002bf0d4(0x13, 0x11fa, bounds);
    s32 offset = (s32)((f32)((bounds[1] - bounds[0]) - 23) * (one - progress));
    bounds[0] += offset;
    FUN_001849bc(2, 0x13, 0x11fa, argument, offset, 11, bounds);

    renderStackPop(&g_renderCtx->stackA);
}
}
