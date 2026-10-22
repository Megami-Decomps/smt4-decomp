#include "common.h"

struct DrawPositionView {
    f32 x;       // 0x00
    f32 y;       // 0x04
    f32 offsetX; // 0x08
    f32 offsetY; // 0x0C
};

extern "C" {
void drawSetColorFromRGBA8(u32 color);
void FUN_002bdf94(u32 drawContext, s32 x, s32 y, u32 option0,
                  u32 option1, u32 option2, const char* format, u32 value);
void FUN_002bed3c(void);

// Draw at the combined position plus integer offsets, then finalize the draw.
void drawTextAtRelativePosition(const DrawPositionView* position, u32 drawContext,
                  s32 xOffset, s32 yOffset, u32 option0, u32 option1,
                  u32 color, u32 option2, u32 value)
{
    drawSetColorFromRGBA8(color);

    const s32 drawX = (s32)((position->x + position->offsetX) + (f32)xOffset);
    const s32 drawY = (s32)((position->y + position->offsetY) + (f32)yOffset);

    FUN_002bdf94(drawContext, drawX, drawY, option0, option1, option2,
                  "%s", value);
    FUN_002bed3c();
}
}
