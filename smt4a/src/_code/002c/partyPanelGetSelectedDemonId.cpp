/* NON_MATCHING: the stock-grid selection (mode 6) is predicated where retail threads it into the helper's alternate test, the row-offset subtraction folds into the load, and result tails reorder; -O2 candidate. */
#include "ui/PartyPanelStateA.h"
#include "code/Code002a.h"
#include "code/Code002a_VariantA.h"

/* A panel widget as this function sees it (the widget is its own object). */
struct PartySelectionObject { u8 unk00[0x34]; s32 slot; };
struct PartySelectionSlotTable { u8 unk0000[0x1c9f]; s8 indices[1]; };
struct PartySelectionDemon { u8 unk00[0x62]; s16 id; };
extern "C" {
const PartySelectionSlotTable *gameGetSlotTable();
const PartySelectionDemon *gameGetSlotRecord(s32);
const PartySelectionDemon *btlMainGetUnk14();
}

static inline s32 selectionGridIndex(PartyPanelStateA *panel, GridNavigation *grid)
{
    if (panel->alternate) {
        s32 column = listCursorGetRowOfChildIfUnblocked(grid);
        return column + listCursorGetRowIfUnblocked(grid) * 4;
    }
    s32 rowBase = listCursorGetRowIfUnblocked(grid) * 4 + panel->page * 12;
    return listCursorGetRowOfChildIfUnblocked(grid) + rowBase;
}

extern "C" s32 partyPanelGetSelectedDemonId()
{
    PartyPanelStateA *panel = g_partyPanel;
    s32 mode = panel->pendingState;
    s32 slot = 0;
    if (mode == 6 || panel->sceneState == 6) {
        s32 index;
        if (panel->alternate)
            index = selectionGridIndex(panel, &panel->stockGridAlternate);
        else
            index = selectionGridIndex(panel, &panel->stockGrid);
        slot = static_cast<s32>(panel->entries[index].packedIndex);
    } else if (mode == 4 || panel->sceneState == 4) {
        s32 column = listCursorGetRowOfChildIfUnblocked(&panel->partyGrid);
        if (!column)
            return -1;
        slot = gameGetSlotTable()->indices[column];
    } else if (mode == 8 || panel->sceneState == 8) {
        GridNavigation *grid = panel->alternate ? &panel->fullGridAlternate : &panel->fullGrid;
        if (listCursorGetRowIfUnblocked(grid) < 1) {
            s32 column = listCursorGetRowOfChildIfUnblocked(grid);
            if (g_partyPanel && g_partyPanel->panelState == 20) {
                slot = reinterpret_cast<PartySelectionObject *>(panel->characters[column])->slot;
            } else {
                if (!column)
                    return -1;
                slot = gameGetSlotTable()->indices[column];
            }
        } else {
            slot = static_cast<s32>(panel->entries[selectionGridIndex(panel, grid) - 4].packedIndex);
        }
    } else if (mode == 10 || panel->sceneState == 10) {
        slot = panel->selection;
    }
    if (slot == -2) {
        const PartySelectionDemon *unit = btlMainGetUnk14();
        return unit ? unit->id : -1;
    }
    if (slot < 0)
        return -1;
    return gameGetSlotRecord(slot)->id;
}
