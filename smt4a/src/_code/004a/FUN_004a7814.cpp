/* NON_MATCHING: alternate/normal number branches are laid out differently; coordinate load order differs. */
#include "shard/W9_W9Match8_WorkRecords.h"

struct NumericPanelView {
    u8 unk00[0xc8];
    u8 layout[1];
};
typedef char NumericPanelLayoutOffset[offsetof(NumericPanelView, layout) == 0xc8 ? 1 : -1];

extern "C" {
void textFormatBuffer(char *, const char *, ...);
const PanelTextLayoutEntryPrefixA *FUN_0018349c(void *, s32);
void drawTextAtRelativePosition(void *, u32, s32, s32, u32, u32, u32, u32, const char *);

// Draw a value at its row anchor using the wider-number offset for three-digit values.
void FUN_004a7814(NumericPanelView *panel, s32 value, s32 row, s32 alternate, u32 opacity, u32 color)
{
    const PanelTextLayoutEntryPrefixA *base;
    const PanelTextLayoutEntryPrefixA *offset;
    char text[32];
    if (alternate) {
        if (value > 99) {
            base = FUN_0018349c(panel->layout, row + 0x42f);
            offset = FUN_0018349c(panel->layout, 0x5c8);
        } else {
            base = FUN_0018349c(panel->layout, row + 0x42f);
            offset = FUN_0018349c(panel->layout, 0x497);
        }
    } else if (value > 99) {
        base = FUN_0018349c(panel->layout, row + 0x40e);
        offset = FUN_0018349c(panel->layout, 0x5c5);
    } else {
        base = FUN_0018349c(panel->layout, row + 0x40e);
        offset = FUN_0018349c(panel->layout, 0x489);
    }
    s16 offsetX = offset->x;
    s16 baseX = base->x;
    s16 baseY = base->y;
    s16 offsetY = offset->y;
    s32 x = baseX + offsetX;
    s32 y = baseY + offsetY;
    textFormatBuffer(text, "%2d", value);
    drawTextAtRelativePosition(panel->layout, 0, x, y,
                               0, 7, color, opacity, text);
}
}
