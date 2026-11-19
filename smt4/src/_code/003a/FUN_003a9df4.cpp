/* NON_MATCHING: register allocation and the cursor-row base address (retail adds 0x55c then ldrsb #17; here a literal-pool offset) differ; structure and call order match. */
#include "common.h"
#include <stdio.h>
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

/* A layout slot: the position of an element relative to the panel. */
typedef struct LayoutSlot {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
} LayoutSlot;

typedef struct CursorState {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ s8 row;
    /* 0x12 */ u8 unk12[0x26];
} CursorState;

/* Local view of the panel: the layout object is embedded at 0xC8. */
typedef struct RowPanel {
    /* 0x000 */ u8 unk000[0xC8];
    /* 0x0C8 */ u8 layout[0x494];
    /* 0x55C */ CursorState cursor;
    /* 0x594 */ s32 alpha;
} RowPanel;

extern s8 uiSubStateGetSelected(const CursorState *cursor);
extern LayoutSlot *layoutFindTableEntry(u8 *layout, u32 id);
extern void uiDrawScrollingSelectionEntry(RowPanel *panel, s32 index, s32 alpha, s32 row);
extern void FUN_0022d9c8(RowPanel *panel, s32 kind, s32 index, s32 selected, s32 alpha, s32 color);
extern void FUN_0022daac(RowPanel *panel, u32 id, s32 index, s32 selected, s32 alpha);
extern void FUN_0022db94(RowPanel *panel, u32 id, s32 index, s32 selected, s32 alpha);
extern void demonIconPanelDrawRow(RowPanel *panel, s32 a, u32 id, s32 index, s32 selected, s32 alpha);
extern void drawTextAtRelativePosition(u8 *layout, s32 a, s32 x, s32 y, s32 b, s32 c, u32 color, s32 alpha, u8 *text);

/* Draws one row of the panel: its icon layers and the two counters of the record. */
void FUN_003a9df4(RowPanel *panel, s32 index, s32 selected, u32 id)
{
    LayoutSlot *slot;
    NkmEnemyRecord *record;
    u8 text[44];
    s32 alpha = panel->alpha;
    s16 baseX;
    s16 baseY;
    s32 kind;
    s32 x;
    s32 y;
    u32 count;
    u32 color;

    if (selected != 0) {
        alpha = alpha + 1;
        slot = layoutFindTableEntry(panel->layout, index + 0x42F);
    } else {
        slot = layoutFindTableEntry(panel->layout, index + 0x40E);
    }
    baseX = slot->x;
    baseY = slot->y;
    if (selected != 0) {
        uiDrawScrollingSelectionEntry(panel, index, alpha, uiSubStateGetSelected(&panel->cursor));
    }
    demonIconPanelDrawRow(panel, 1, id, index, selected, alpha);
    FUN_0022db94(panel, id, index, selected, alpha);
    FUN_0022daac(panel, id, index, selected, alpha);
    record = nkmEnemyFindById((u16)id);
    kind = 0;
    if (record != NULL) {
        kind = record->level;
    }
    FUN_0022d9c8(panel, kind, index, selected, alpha, -1);
    record = nkmEnemyFindById((u16)id);
    count = 0;
    if (record != NULL) {
        count = record->maxHp;
    }
    if (selected != 0) {
        slot = layoutFindTableEntry(panel->layout, 0x49D);
        color = 0xFBEB39FF;
    } else {
        slot = layoutFindTableEntry(panel->layout, 0x48F);
        color = 0xFFFFFFFF;
    }
    x = slot->x + baseX;
    y = slot->y + baseY;
    sprintf((char *)text, "%d", count);
    drawTextAtRelativePosition(panel->layout, 0, x, y, 0, 7, color, alpha, text);
    record = nkmEnemyFindById((u16)id);
    count = 0;
    if (record != NULL) {
        count = record->maxMp;
    }
    if (selected != 0) {
        slot = layoutFindTableEntry(panel->layout, 0x4A1);
        color = 0x6BBB2CFF;
    } else {
        slot = layoutFindTableEntry(panel->layout, 0x493);
        color = 0xFFFFFFFF;
    }
    x = baseX + slot->x;
    y = slot->y + baseY;
    sprintf((char *)text, "%d", count);
    drawTextAtRelativePosition(panel->layout, 0, x, y, 0, 7, color, alpha, text);
}

} /* extern "C" */
