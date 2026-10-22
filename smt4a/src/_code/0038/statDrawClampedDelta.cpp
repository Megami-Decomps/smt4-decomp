/* NON_MATCHING: ARMCC keeps the positive-color cases inline instead of retail's out-of-line tails, changing branch hints and pool layout. */
#include "font/SearchWin/RunWin.h"

extern "C" {
s32 FUN_004bd098(void *owner, u32 stat);
s32 FUN_0035e458(u32 stat);
s32 FUN_0035d89c(u32 stat);
void textFormatBuffer(char *destination, const char *format, ...);
void drawSetColorFromRGBA8(u32 color);
const MessageDrawPosition *FUN_001834a4(u32 group, u32 index);
void FUN_00180310(s32 layer, s32 x, s32 y, s32 z, s32 mode, s32 depth, const char *format, ...);
void FUN_00183bb0(void);

/* Show the clamped stat delta, coloring values at the bounds separately. */
void statDrawClampedDelta(void *owner, u32 stat, s32 x, s32 y, s32 depth, s32 delta)
{
    if (owner == NULL) {
        return;
    }
    s32 value = delta + FUN_004bd098(owner, stat);
    s32 maximum = FUN_0035e458(stat);
    s32 minimum = FUN_0035d89c(stat);
    if (value > maximum) {
        value = maximum;
    }
    if (value < minimum) {
        value = minimum;
    }
    if (value != 0) {
        char text[64];
        u32 color;
        if (minimum >= value) {
            textFormatBuffer(text, "-");
            color = 0xFF00FFFF;
        } else if (value < 0) {
            textFormatBuffer(text, "-");
            color = 0xDC0F14FF;
        } else if (value >= maximum) {
            textFormatBuffer(text, "+");
            color = 0xFBEB39FF;
        } else {
            textFormatBuffer(text, "+");
            color = 0x72E027FF;
        }
        drawSetColorFromRGBA8(color);
        const MessageDrawPosition *position = FUN_001834a4(11, 0x402);
        FUN_00180310(2, position->x + x, position->y + y, 0, 1, depth + 1, text);
        position = FUN_001834a4(11, 0x401);
        if (value < 0) {
            value = -value;
        }
        FUN_00180310(2, position->x + x, position->y + y, 0, 1, depth + 1, "%d", value);
        FUN_00183bb0();
    }
}
}
