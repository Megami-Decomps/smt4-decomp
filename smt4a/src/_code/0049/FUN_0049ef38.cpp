/* NON_MATCHING: choice-field load scheduling and zero-group branch conditions differ. */
#include "gfx/StereoSpriteSelection.h"
#include "shard/S1ListPanel.h"

extern "C" {
extern RenderCtx* g_renderCtx;
s32 asdTMTexTableNodeIsLoaded(u32 id);
SpriteInfo* FUN_001834a4(s32 group, s32 id);
f32 renderCtxCalculateStereoParallax(RenderCtx* context, f32 depth);
void efctSetSpeed(f32 speed);
void FUN_001835b4(s32 layer, s32 group, s32 id, s32 x, s32 y, s32 mode);

// Center the selected sprite on the reference frame with stereo parallax and a temporary speed.
void FUN_0049ef38(const StereoSpriteOwner* owner, const StereoSpriteSelection* selection,
                  s32 x, s32 y, s32 mode, f32 speed)
{
    u32 group = owner->resource->choices[selection->index].group;
    u16 id = owner->resource->choices[selection->index].id;
    if (((s32)owner->resource->choices[0].group <= 0 || asdTMTexTableNodeIsLoaded(0x33)) &&
        ((s32)owner->resource->choices[1].group <= 0 || asdTMTexTableNodeIsLoaded(0x33)) && (s32)group > 0) {
        s32 spriteId = id + group * 1000;
        s16 width = FUN_001834a4(0x33, spriteId)->size[0];
        s32 parallax = renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
        SpriteInfo* reference = FUN_001834a4(0x33, 29);
        s32 drawX = reference->x + x + parallax + (reference->size[0] - width) / 2;
        s32 drawY = reference->y + y;
        efctSetSpeed(speed);
        FUN_001835b4(2, 0x33, spriteId, drawX, drawY, mode + 5);
        efctSetSpeed(1.0f);
    }
}
}
