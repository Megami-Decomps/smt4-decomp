#include "gfx/StereoParallax.h"
#include "camp/RenderCtxA.h"
#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct CenteredSpriteOffsets {
    u8 unk00[0xc];
    s16 x;
    s16 y;
};
struct CenteredSpriteWork {
    u8 unk00[0x1c];
    u32 group;
    s32 index;
    u8 unk24[0x640];
    CenteredSpriteOffsets *offsets;
};

extern "C" {
void efctSetSpeed(f32 speed);

/* Center the selected sprite inside a reference sprite and apply stereo parallax. */
void FUN_00404dd0(CenteredSpriteWork *work, s32 x, s32 y, f32 speed)
{
    efctSetSpeed(speed);
    TextureTableEntryIV *reference = asdTMTexTableEntryAt(0x32, 0x35);
    TextureTableEntryIV *sprite = asdTMTexTableEntryAt(work->group, work->index * 1000);
    s32 dx, dy;
    if (!sprite->placement) {
        dx = (reference->placement->width - (sprite->width & 0x7fff)) / 2;
        dy = (reference->placement->height - (sprite->height & 0x7fff)) / 2;
    } else {
        dx = (reference->placement->width - sprite->placement->width) / 2;
        dy = (reference->placement->height - sprite->placement->height) / 2;
    }
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    s32 drawX = reference->x + x + parallax + dx + work->offsets->x;
    s32 drawY = reference->y + work->offsets->y + y + dy;
    texDrawTableEntryAtStoredOrigin(2, work->group, work->index * 1000, drawX, drawY, 0x65);
    efctSetSpeed(1.0f);
}
}
