/* NON_MATCHING: fallback-size block is placed inline rather than out of line; coordinate arithmetic scheduling differs. */
#include "shard/S1ListPanel.h"

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
extern RenderCtxA *g_renderCtx;
void efctSetSpeed(f32 speed);
SpriteInfo *FUN_001834a4(u32 group, s32 image);
void FUN_001835b4(s32 layer, u32 group, s32 image, s32 x, s32 y, s32 priority);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);

/* Center the selected sprite inside a reference sprite and apply stereo parallax. */
void FUN_00404dd0(CenteredSpriteWork *work, s32 x, s32 y, f32 speed)
{
    efctSetSpeed(speed);
    SpriteInfo *reference = FUN_001834a4(0x32, 0x35);
    SpriteInfo *sprite = FUN_001834a4(work->group, work->index * 1000);
    s32 dx, dy;
    if (sprite->size) {
        dx = (reference->size[0] - sprite->size[0]) / 2;
        dy = (reference->size[1] - sprite->size[1]) / 2;
    } else {
        dx = (reference->size[0] - (sprite->bounds.width & 0x7fff)) / 2;
        dy = (reference->size[1] - (sprite->bounds.height & 0x7fff)) / 2;
    }
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    FUN_001835b4(2, work->group, work->index * 1000,
                  reference->x + x + parallax + dx + work->offsets->x,
                  reference->y + work->offsets->y + y + dy, 0x65);
    efctSetSpeed(1.0f);
}
}
