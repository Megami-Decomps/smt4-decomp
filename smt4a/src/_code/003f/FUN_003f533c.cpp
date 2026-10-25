/* NON_MATCHING: digit/coordinate saved registers and formatted-text stack argument scheduling differ. */
#include "shard/S1ListPanel.h"

extern "C" {
extern RenderCtxA* g_renderCtx;
f32 renderCtxCalculateStereoParallax(RenderCtxA* context, f32 depth);
void efctSetSpeed(f32 speed);
void drawSetColorFromRGBA8(u32 color);
SpriteInfo* FUN_001834a4(u32 table, u32 id);
void FUN_001835b4(u32 kind, u32 table, u32 sprite, s32 x, s32 y, u32 parameter);
void FUN_00180310(u32 font, s32 x, s32 y, u32 flags, u32 kind, u32 parameter,
    const char* format, ...);

void FUN_003f533c(u32 unused, s32 x, s32 y, u32 parameter, s32 number,
    u32 iconLayout, u32 onesLayout, u32 tensLayout, u32 color, s32 alternate, f32 speed)
{
    s32 parallax = static_cast<s32>(renderCtxCalculateStereoParallax(g_renderCtx, 0.26f));
    efctSetSpeed(speed);
    drawSetColorFromRGBA8(color);
    SpriteInfo* sprite = FUN_001834a4(0x31, iconLayout);
    s32 iconX = sprite->x + (x + parallax);
    s32 iconY = sprite->y + y;
    if (alternate) {
        FUN_001835b4(2, 0x31, 2, iconX, iconY, parameter);
    } else {
        FUN_001835b4(2, 0x31, 0xA0, iconX, iconY, parameter);
    }
    parallax = static_cast<s32>(renderCtxCalculateStereoParallax(g_renderCtx, 0.26f));
    s32 tens = number / 10;
    s32 ones = number % 10;
    sprite = FUN_001834a4(0x31, onesLayout);
    x += parallax;
    FUN_00180310(6, sprite->x + x, sprite->y + y, 0, 4, parameter, "%d", ones);
    sprite = FUN_001834a4(0x31, tensLayout);
    FUN_00180310(6, sprite->x + x, sprite->y + y, 0, 4, parameter, "%d", tens);
    drawSetColorFromRGBA8(0xFFFFFFFF);
    efctSetSpeed(1.0f);
}
}
