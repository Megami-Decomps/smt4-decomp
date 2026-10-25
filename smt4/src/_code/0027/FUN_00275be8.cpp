/* NON_MATCHING: tiled frame behavior restored; tile pointer scheduling differs and retail target contains only the first word of the 24-byte tile-kind literal. */
#include "ui/FrameTex.h"
#include "ui/UiSpriteState.h"
#include "shard/W6_W6Match7_DrawParameters.h"

namespace {
struct TiledFrameView {
    u8 prefix[0x1C];
    u8 enabled;
    u8 padding1D[3];
    u32 elapsed;
    u8 closing;
    u8 active;
    u8 padding26[2];
    f32 scaleX;
    f32 scaleY;
    f32 duration;
    Params002c312c parameters;
    UiSpriteState tiles[24];
    UiSpriteState frame;
    UiSpriteState overlay;
};
}
extern "C" {
extern FrameWork *g_frameTex;
void FUN_002bd954(UiSpriteState *sprite, s32 group, s32 image, Params002c312c *parameters, s32 flags, f32 scale);
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 key, s32 mode);
void spriteStartAnimationByIndex(UiSpriteState *sprite, s32 enabled);
void FUN_002a9fdc(UiSpriteState *sprite, s32 key, s32 mode);
void FUN_00295eb0(UiSpriteState *sprite, s32 group, s32 image);
void FUN_002bf810(u32 sound);

// Reset, open or close the tiled frame-texture transition and initialize its 24 animated tiles.
void FUN_00275be8(s32 mode)
{
    FrameWork *owner = g_frameTex;
    TiledFrameView *work = reinterpret_cast<TiledFrameView *>(owner);
    switch (mode) {
    case 0:
        work->enabled = 0;
        work->elapsed = 0;
        work->closing = 0;
        work->scaleX = 0.25f;
        work->scaleY = 0.25f;
        work->duration = 20.0f;
        owner->unkF28 = 0;
        owner->unkF2B = 0;
        owner->unkF2C = 0;
        break;
    case 1: {
        work->enabled = 1;
        work->elapsed = 0;
        work->closing = 0;
        work->scaleX = 0.25f;
        work->scaleY = 0.25f;
        work->duration = 20.0f;
        work->active = 1;
        FUN_002bd954(&work->frame, 0x1D, 2000, &work->parameters, 0xB, 1.0f);
        uiSpriteSetImageKeyframe(&work->frame, 0, 0);
        FUN_002bd954(&work->overlay, 0x1D, 2000, &work->parameters, 0xB, 1.0f);
        spriteStartAnimationByIndex(&work->overlay, 0);
        s8 tileKinds[24] = {0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0,
                            0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0};
        for (s32 index = 0; index < 24; ++index) {
            FUN_002bd954((&work->tiles[index]), 0x1D, tileKinds[index] + 0x7D1, &work->parameters, 0xB, 1.0f);
            FUN_002a9fdc((&work->tiles[index]), 0, 0);
            FUN_00295eb0((&work->tiles[index]), 0x1D, index + 0x7D5);
        }
        break;
    }
    case 2:
        FUN_002bf810(0x100025B);
        work->elapsed = 0;
        work->closing = 1;
        work->duration = 7.0f;
        uiSpriteSetImageKeyframe(&work->frame, 0, 1);
        break;
    }
}
}
