#include "common.h"
#include <stdio.h>
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* The window that shows a percentage. */
struct PercentWindow {
    /* 0x00 */ u8 unk00[0x94];
    /* 0x94 */ u8 style; /* 'd': draw the text in the highlight color */
    /* 0x95 */ u8 unk95[0x33];
    /* 0xc8 */ u8 layout[1];
};

extern "C" {
void drawTextAtRelativePosition(void *layout, u32 drawContext, s32 x, s32 y, u32 option0, u32 option1,
                  u32 color, u32 alpha, const char *text);
void uiDrawTableTextureAtRectCorner(void *layout, u32 partId, u32 option0, u32 option1, u32 alpha);

/* Draws the window's frame and the value as a three-digit percentage. */
void FUN_004a7950(PercentWindow *window, s32 value, u32 alpha)
{
    char text[32];
    u32 color = 0xffffffff;
    TextureTableEntryIV *part;

    uiDrawTableTextureAtRectCorner(window->layout, 0x407, 0, 0, alpha);
    sprintf(text, "%3d", value);
    if (window->style == 'd') {
        color = 0x72e027ff;
    }
    part = layoutFindTableEntry(window->layout, 0x40b);
    s32 x = part->x;
    s32 y = part->y;
    drawTextAtRelativePosition(window->layout, 0, x, y, 0, 7, color, alpha, text);
    part = layoutFindTableEntry(window->layout, 0x408);
    x = part->x;
    y = part->y;
    drawTextAtRelativePosition(window->layout, 0, x, y, 0, 0, color, alpha, "%");
}
}
