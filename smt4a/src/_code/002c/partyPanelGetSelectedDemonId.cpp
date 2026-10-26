/* NON_MATCHING: grid selection is predicated, row-offset subtraction folds into the load, and result tails reorder; -O2 candidate. */
#include "common.h"
#include "util/FUN_002a4878.h"

struct PartySelectionGrid { u8 data[0x64]; };
struct PartySelectionObject { u8 unk00[0x34]; s32 slot; };
struct PartySelectionChoice { s32 slot; u32 unk04; };
struct PartySelectionScene {
    u8 unk000[0x1c];
    s32 previousMode, mode;
    u8 unk024[8];
    s32 page;
    u8 unk030[8];
    s16 selectedSlot;
    u8 unk03a[8];
    u8 alternate;
    u8 unk043[0x971];
    u8 listKind; // 0x9b4
    u8 unk9b5[0x5b];
    PartySelectionObject *objects[28]; // 0xa10
    union {
        u8 unka80[0x1a4];
        PartySelectionChoice choices[1];
    } list;
    PartySelectionGrid modeFour; // 0xc24
    PartySelectionGrid modeSix, modeSixAlternate;
    PartySelectionGrid modeEight, modeEightAlternate;
};
struct PartySelectionSlotTable { u8 unk0000[0x1c9f]; s8 indices[1]; };
struct PartySelectionDemon { u8 unk00[0x62]; s16 id; };
extern "C" {
extern PartySelectionScene *g_partyPanel;
s32 FUN_002a4894(PartySelectionGrid *);
const PartySelectionSlotTable *gameGetSlotTable();
const PartySelectionDemon *gameGetSlotRecord(s32);
const PartySelectionDemon *btlMainGetUnk14();
}

static inline s32 selectionGridIndex(PartySelectionScene *panel, PartySelectionGrid *grid)
{
    if (panel->alternate) {
        s32 column = FUN_002a4878(grid);
        return column + FUN_002a4894(grid) * 4;
    }
    s32 rowBase = FUN_002a4894(grid) * 4 + panel->page * 12;
    return FUN_002a4878(grid) + rowBase;
}

extern "C" s32 partyPanelGetSelectedDemonId()
{
    PartySelectionScene *panel = g_partyPanel;
    s32 mode = panel->mode;
    s32 slot = 0;
    if (mode == 6 || panel->previousMode == 6) {
        PartySelectionGrid *grid = panel->alternate ? &panel->modeSixAlternate : &panel->modeSix;
        slot = panel->list.choices[selectionGridIndex(panel, grid)].slot;
    } else if (mode == 4 || panel->previousMode == 4) {
        s32 column = FUN_002a4878(&panel->modeFour);
        if (!column)
            return -1;
        slot = gameGetSlotTable()->indices[column];
    } else if (mode == 8 || panel->previousMode == 8) {
        PartySelectionGrid *grid = panel->alternate ? &panel->modeEightAlternate : &panel->modeEight;
        if (FUN_002a4894(grid) <= 0) {
            s32 column = FUN_002a4878(grid);
            if (g_partyPanel && g_partyPanel->listKind == 20) {
                slot = panel->objects[column]->slot;
            } else {
                if (!column)
                    return -1;
                slot = gameGetSlotTable()->indices[column];
            }
        } else {
            slot = panel->list.choices[selectionGridIndex(panel, grid) - 4].slot;
        }
    } else if (mode == 10 || panel->previousMode == 10) {
        slot = panel->selectedSlot;
    }
    if (slot == -2) {
        const PartySelectionDemon *unit = btlMainGetUnk14();
        return unit ? unit->id : -1;
    }
    if (slot < 0)
        return -1;
    return gameGetSlotRecord(slot)->id;
}
