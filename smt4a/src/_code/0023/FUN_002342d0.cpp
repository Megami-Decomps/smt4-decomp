/* NON_MATCHING: the fade branches share the lowering ramp; retail loads 1.0 before the ramp's -0.6 (pool order 1.0, -0.6),
 * the build the other way round, and the first ramp's 0.1 takes s0 where the build uses s3. */
#include "camp/RenderCtx.h"
#include "map/MapIfGlobals.h"
#include "camp/RenderCtxA.h"
#include "game/GameStateA.h"
#include "shard/TextureDrawCall.h"
#include "map/mapDepart.h"

extern "C" {

u32 renderCtxPackPassFlags(u32 first, u32 second);
void efctSetSpeed(f32 speed);
void textureRegionBoundsRead(u32 layer, u32 sprite, s32 *bounds);
void FUN_001849bc(u32 kind, u32 layer, u32 sprite, u32 argument, s32 y, u32 order, s32 *bounds);

/* Linear fade from full intensity down by 60 percent over `progress` 0..1. */
static __inline f32 fadeFrameRampDown(f32 progress)
{
    return 1.0f + progress * -0.6f;
}

// Draws the map interface's fade frame: the sprite pair and the sliding third sprite, under a fade level that follows
// the interface's timer (down, back up, then down again).
void FUN_002342d0(u32 argument)
{
    MapIfStateA *state = g_mapIf.state;
    if (state->fadeMode == 0 || g_gameState.mapId >= 100) {
        return;
    }
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));

    f32 progress = state->fadeProgress;
    if (state->fadeMode == 3) {
        progress = 0.0f;
    }
    f32 level;
    s32 timer = state->fadeTimer;
    if (timer < 10) {
        level = fadeFrameRampDown((f32)timer * 0.1f);
    } else if (timer < 25) {
        level = 0.4f + ((f32)(timer - 10) * (1.0f / 15.0f)) * 0.6f;
    } else {
        level = fadeFrameRampDown((f32)(timer - 25) * (1.0f / 15.0f));
    }
    efctSetSpeed(level);
    texDrawTableEntryAtStoredOrigin(2, 0x13, 0x11f8, argument, 0, 11);
    efctSetSpeed(1.0f);
    texDrawTableEntryAtStoredOrigin(2, 0x13, 0x11f9, argument, 0, 11);

    s32 bounds[4];
    textureRegionBoundsRead(0x13, 0x11fa, bounds);
    s32 frameSpan = bounds[1] - bounds[0] - 23;
    s32 offset = (s32)((1.0f - progress) * (f32)frameSpan);
    bounds[0] += offset;
    FUN_001849bc(2, 0x13, 0x11fa, argument, offset, 11, bounds);

    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
}
}
