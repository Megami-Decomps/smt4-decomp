#include "common.h"

struct PanelDrawPos {
    /* 0x00 */ f32 alpha;
    /* 0x04 */ s32 x;
    /* 0x08 */ s32 y;
};

struct SpritePartInfo {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

extern "C" {

void FUN_002bed3c(void);
void efctSetSpeed(f32 speed);
void FUN_002bf380(s32 layer, s32 sheet, s32 part, s32 x, s32 y, s32 priority);
void drawSetColorFromRGBA8(u32 color);
SpritePartInfo *FUN_002bf4f8(s32 sheet, s32 part);
void FUN_00210d08(u32 value, s32 x, s32 y, s32 priority);

// Draw the panel frame (highlighted or not) and its number at an offset from the panel position.
void uiDrawPanelWithValue(PanelDrawPos *pos, s32 dx, s32 dy, u32 value, s32 highlighted)
{
    FUN_002bed3c();
    efctSetSpeed(pos->alpha);
    s32 x = pos->x + dx;
    s32 y = pos->y + dy;
    if (!highlighted) {
        FUN_002bf380(2, 0x39, 7, x, y, 0x6f);
    } else {
        FUN_002bf380(2, 0x39, 8, x, y, 0x6f);
    }
    drawSetColorFromRGBA8(0xb4ff8200);
    SpritePartInfo *part = FUN_002bf4f8(0x39, 0x53);
    FUN_00210d08(value, part->x + x, part->y + y, 0x71);
    FUN_002bed3c();
    efctSetSpeed(1.0f);
}

} /* extern "C" */
