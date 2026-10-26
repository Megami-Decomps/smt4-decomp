#include "shard/W9_W9Match8_WorkRecords.h"

struct DemonIconPanelView {
    u8 unk00[0x95];
    u8 showUnknown;
    u8 unk96[0x32];
    u8 layout[1];
};
typedef char DemonIconPanelOffsets[offsetof(DemonIconPanelView, layout) == 0xc8 &&
    offsetof(DemonIconPanelView, showUnknown) == 0x95 ? 1 : -1];
extern "C" {
const PanelTextLayoutEntryPrefixA *layoutFindTableEntry(void *, s32);
void devilDrawIconRelative(void *, s32, s32, s32, u32);
void FUN_004934ac(void *, s32, s32, s32, u32);
u32 FUN_002a4b28(u16);
s32 gameStockContainsEntry(u16);

// Draw a known demon icon or its unknown substitute, with an optional stock marker.
void demonIconPanelDrawRow(DemonIconPanelView *panel, s32 markStock, u32 demon, s32 row, s32 alternate, u32 opacity)
{
    const PanelTextLayoutEntryPrefixA *base;
    if (!alternate)
        base = layoutFindTableEntry(panel->layout, row + 0x40e);
    else
        base = layoutFindTableEntry(panel->layout, row + 0x42f);
    s32 baseX = base->x;
    s32 baseY = base->y;
    const PanelTextLayoutEntryPrefixA *offset;
    if (!alternate)
        offset = layoutFindTableEntry(panel->layout, 0x487);
    else
        offset = layoutFindTableEntry(panel->layout, 0x495);
    s32 x = offset->x + baseX;
    s32 y = offset->y + baseY;
    if (FUN_002a4b28(demon) || panel->showUnknown)
        devilDrawIconRelative(panel->layout, (s16)demon, x, y, opacity);
    else
        devilDrawIconRelative(panel->layout, 0, x, y, opacity);
    if (markStock && gameStockContainsEntry(demon)) {
        if (!alternate) {
            FUN_004934ac(panel->layout, 0x486, baseX, baseY, opacity);
            return;
        }
        FUN_004934ac(panel->layout, 0x494, baseX, baseY, opacity);
    }
}
}
