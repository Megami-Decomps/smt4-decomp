/* NON_MATCHING: amount/x occupy R6/R7 rather than retail R7/R6, with one icon-call argument move scheduled differently; candidate -O2. */
#include "shard/S1ListPanel.h"

extern "C" {
u32 requestKindToId(u32 kind);
s32 textFormatBuffer(char *output, const char *format, ...);
void FUN_001835b4(u32 screen, u32 table, s32 index, s32 x, s32 y, s32 layer);
void FUN_0017ffa8(u32 screen, u32 table, s32 index, u32 x, u32 y, u32 layer);
void drawSetColorFromRGBA8(u32 color);
const SpriteInfo *FUN_001834a4(u32 table, s32 index);
void FUN_00180310(u32 screen, s32 x, s32 y, s32 mode, s32 font, s32 layer,
                  const char *format, ...);
void FUN_00183bb0();

void drawParameterChangeBadge(u32 kind, s32 amount, s32 x, s32 y, s32 layer)
{
    char sign[64];
    u32 icon = requestKindToId(kind);
    u32 color;
    if (amount < 0) {
        textFormatBuffer(sign, "-");
        color = 0xdc0f14ff;
    } else {
        textFormatBuffer(sign, "+");
        color = 0x72e027ff;
    }
    if (kind == 14) {
        drawSetColorFromRGBA8(color);
        FUN_001835b4(2, 11, 0x3f5, x, y, layer);
        FUN_0017ffa8(2, 11, 0x41e, x, y, layer);
        FUN_00183bb0();
        return;
    }
    FUN_001835b4(2, 11, 0x3f5, x, y, layer);
    FUN_0017ffa8(2, 11, icon, x, y, layer);
    drawSetColorFromRGBA8(color);
    const SpriteInfo *info = FUN_001834a4(11, 0x402);
    FUN_00180310(2, info->x + x, info->y + y, 0, 1, layer + 1, sign);
    info = FUN_001834a4(11, 0x401);
    if (amount < 0) {
        amount = -(u32)amount;
    }
    FUN_00180310(2, info->x + x, info->y + y, 0, 1, layer + 1, "%d", amount);
    FUN_00183bb0();
}
}
