#include "gfx/StereoSpriteSelection.h"
#include "shard/TextureDrawCall.h"
#include "gfx/StereoParallax.h"
#include "gfx/StereoParallax.h"
#include "shard/S1ListPanel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern RenderCtxA* g_renderCtx;

void efctSetSpeed(f32 speed);

static __inline s32 stereoSpriteGroupIsReady(s32 group)
{
    if (group <= 0)
        return 1;
    return asdTMTexTableNodeIsLoaded(0x33, group);
}

// Center the selected sprite on the reference frame with stereo parallax and a temporary speed.
void stereoSpriteDrawSelectedChoice(const StereoSpriteOwner* owner, const StereoSpriteSelection* selection,
                  s32 x, s32 y, s32 mode, f32 speed)
{
    u32 group = owner->resource->choices[selection->index].group;
    u16 id = owner->resource->choices[selection->index].id;
    if (stereoSpriteGroupIsReady(owner->resource->choices[0].group) &&
        stereoSpriteGroupIsReady(owner->resource->choices[1].group) && (s32)group > 0) {
        s32 spriteId = id + group * 1000;
        s16 width = reinterpret_cast<SpriteInfo *>(asdTMTexTableEntryAt(0x33, spriteId))->size[0];
        s32 parallax = renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
        SpriteInfo* reference = reinterpret_cast<SpriteInfo *>(asdTMTexTableEntryAt(0x33, 29));
        s32 drawX = reference->x + x + parallax + (reference->size[0] - width) / 2;
        s32 drawY = reference->y + y;
        efctSetSpeed(speed);
        FUN_001835b4(2, 0x33, spriteId, drawX, drawY, mode + 5);
        efctSetSpeed(1.0f);
    }
}
}
