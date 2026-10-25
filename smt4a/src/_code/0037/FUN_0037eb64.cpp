#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"
extern "C" {
extern RenderCtxA *g_renderCtx;
s32 FUN_003e4978(void);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);
void efctSetSpeed(f32 speed);
const SpriteInfo *FUN_001834a4(u32 group, u32 sprite);
s32 FUN_003e53ec(void);
s32 FUN_003e48bc(void);
void FUN_00183bb0(void);

void FUN_0037eb64(u32 mode, s32 x, s32 y, f32 speed)
{
    if (!FUN_003e4978())
        return;
    s32 parallax = static_cast<s32>(renderCtxCalculateStereoParallax(g_renderCtx, 0.26f));
    x += parallax;
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
            sprite = 0xBCB;
            placement = 0xC23;
        }
        const SpriteInfo *origin = FUN_001834a4(0x14, placement + i);
        s32 spriteX = origin->x + x;
        s32 spriteY = origin->y + y;
        FUN_001835b4(2, 0x14, sprite, spriteX, spriteY, 0xC9);
    }
    if (FUN_003e48bc()) {
        for (s32 i = 0; i < 8; ++i) {
            const SpriteInfo *origin = FUN_001834a4(0x14, 0xC2B + i);
            s32 spriteX = origin->x + x;
        s32 spriteY = origin->y + y;
        FUN_001835b4(2, 0x14, 0xC0D, spriteX, spriteY, 0xDD);
        }
        efctSetSpeed(speed);
        const SpriteInfo *origin = FUN_001834a4(0x14, 0xC14);
        s32 spriteX = origin->x + x;
        s32 spriteY = origin->y + y;
        FUN_001835b4(2, 0x14, 0xC0E, spriteX, spriteY, 0xDD);
        efctSetSpeed(speed);
        FUN_00183bb0();
    }
}
}
