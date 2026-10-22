/* NON_MATCHING: retail also hoists the 0xc9 argument into fp for the loop (one more saved register, 12-byte frame); otherwise the same. */
#include "camp/RenderCtx.h"

/* A layout entry of a texture: its placement. */
struct DigitLayout {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

struct DigitRowOwner {
    /* 0x000 */ u8 unk000[0x50];
    /* 0x050 */ s32 firstFrame;
    /* 0x054 */ u8 unk054[0xd4];
    /* 0x128 */ s32 frameOffset;
    /* 0x12C */ u8 unk12c[0x4ac];
    /* 0x5D8 */ u32 sprite;
};

extern "C" {
extern RenderCtxA *g_renderCtx;
f32 FUN_001879d0(RenderCtxA *context, f32 depth);
void efctSetSpeed(f32 alpha);
const DigitLayout *FUN_001834a4(u32 texture, u32 index);
void FUN_00164168(u32 sprite, s32 x, s32 y, s32 texture, s32 layer, s32 frame, f32 alpha);
void FUN_003f7674(DigitRowOwner *owner, s32 x, s32 y, f32 alpha);

/* Draws the row of seven frames at (x, y) with `alpha` (frames before the first are skipped),
 * then the rest of the owner's display. */
void FUN_003f54c4(DigitRowOwner *owner, s32 x, s32 y, f32 alpha)
{
    s32 offset = (s32)FUN_001879d0(g_renderCtx, 0.26f);
    s32 i;

    efctSetSpeed(alpha);
    for (i = 0; i < 7; i++) {
        s32 frame = owner->firstFrame + i - owner->frameOffset;
        if (frame >= 0) {
            const DigitLayout *layout = FUN_001834a4(0x31, i + 0x51);
            FUN_00164168(owner->sprite, x + offset + layout->x, layout->y + y, 0xc9, 6, frame, alpha);
        }
    }
    FUN_003f7674(owner, x, y, alpha);
    efctSetSpeed(1.0f);
}

} /* extern "C" */
