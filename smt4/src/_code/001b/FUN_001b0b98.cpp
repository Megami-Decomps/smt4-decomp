#include "common.h"

extern "C" void drawSetColorFromRGBA8(u32);

// Color a numeric comparison green, red, or neutral and return its ordering.
extern "C" s32 FUN_001b0b98(s32 reference, s32 value, s32 highlighted)
{
    if (reference > value) {
        drawSetColorFromRGBA8(0x72e027ff);
        return -1;
    }
    if (reference < value) {
        drawSetColorFromRGBA8(0xdc0f14ff);
        return 1;
    }
    drawSetColorFromRGBA8(highlighted ? 0xffffffff : 0xff);
    return 0;
}
