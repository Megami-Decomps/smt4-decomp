/* NON_MATCHING: coordinate load order and segment placement constant hoisting differ. */
#include "shard/S1ListPanel.h"
extern "C" {
extern RenderCtx *g_renderCtx;
s32 FUN_003e4978(void);
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 depth);
void efctSetSpeed(f32 speed);
void FUN_001835b4(u32 flags, s32 group, s32 sprite, s32 x, s32 y, s32 z);
const SpriteInfo *FUN_001834a4(u32 group, u32 sprite);
s32 FUN_003e53ec(void);
s32 FUN_003e48bc(void);
void FUN_00183bb0(void);

void FUN_0037eb64(u32 mode, s32 x, s32 y, f32 speed)
{
    if (!FUN_003e4978())
        return;
    x += static_cast<s32>(renderCtxCalculateStereoParallax(g_renderCtx, 0.26f));
    efctSetSpeed(speed);
    FUN_001835b4(2, 0x14, 0xBCC, x, y, 0xC9);
    FUN_001835b4(2, 0x14, 0xBCD, x, y, 0xCA);
    s32 filled = FUN_003e53ec();
    if (filled > 8)
        filled = 8;
    else if (filled < 0)
        filled = 0;
    s32 sprite = 0xC0C;
    s32 placement = 0xC2B;
    for (s32 i = 0; i < 8; ++i) {
        if (filled <= i) {
            placement = 0xC23;
            sprite = 0xBCB;
        }
        const SpriteInfo *origin = FUN_001834a4(0x14, placement + i);
        FUN_001835b4(2, 0x14, sprite, origin->x + x, origin->y + y, 0xC9);
    }
    if (FUN_003e48bc()) {
        for (s32 i = 0; i < 8; ++i) {
            const SpriteInfo *origin = FUN_001834a4(0x14, 0xC2B + i);
            FUN_001835b4(2, 0x14, 0xC0D, origin->x + x, origin->y + y, 0xDD);
        }
        efctSetSpeed(speed);
        const SpriteInfo *origin = FUN_001834a4(0x14, 0xC14);
        FUN_001835b4(2, 0x14, 0xC0E, origin->x + x, origin->y + y, 0xDD);
        efctSetSpeed(speed);
        FUN_00183bb0();
    }
}
}
