#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct PanelDrawPos {
    /* 0x00 */ f32 alpha;
    /* 0x04 */ s32 x;
    /* 0x08 */ s32 y;
};

extern "C" {

void gxResetColorQuadToWhite(void);
void efctSetSpeed(f32 speed);
void texDrawCompositeSprite(s32 layer, s32 sheet, s32 part, s32 x, s32 y, s32 priority);
void drawSetColorFromRGBA8(u32 color);
void uiDrawSevenDigitNumber(u32 value, s32 x, s32 y, s32 priority);

// Draw the panel frame (highlighted or not) and its number at an offset from the panel position.
void uiDrawPanelWithValue(PanelDrawPos *pos, s32 dx, s32 dy, u32 value, s32 highlighted)
{
    gxResetColorQuadToWhite();
    efctSetSpeed(pos->alpha);
    s32 x = pos->x + dx;
    s32 y = pos->y + dy;
    if (!highlighted) {
        texDrawCompositeSprite(2, 0x39, 7, x, y, 0x6f);
    } else {
        texDrawCompositeSprite(2, 0x39, 8, x, y, 0x6f);
    }
    drawSetColorFromRGBA8(0xb4ff8200);
    TextureTableEntryIV *part = asdTMTexTableEntryAt(0x39, 0x53);
    uiDrawSevenDigitNumber(value, part->x + x, part->y + y, 0x71);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
}

} /* extern "C" */
