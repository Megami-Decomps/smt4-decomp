/* NON_MATCHING: retail's active-slot search counts with a signed index (blt) without unrolling, where an s32 index
 * here unrolls it, and the unit records' id loads use another base register; the slot-table getter's +0x8C/+0x90
 * split and the loops follow retail. */
#include "gamedata/UnitSelectionInput.h"
#include "shard/GameDataBlocks.h"
#include "gamedata/FlagBitTests.h"

extern "C" {
void objectFlagsClear(StatBlock *unit, u32 flags);
u32 objectFlagSetBit(StatBlock *unit, u32 bit);

/* gameGetSlotTable's body: the slot table inside the save block. */
static SaveSlotTableIV *saveSlotTable(void)
{
    return &g_gameDataBlocks.saveBlock->body.slots;
}

/* Saves a reserved-unit selection, removes it from the active slots and updates the stock selection flags. */
void saveSelectReserveUnit(const UnitSelectionInput *input)
{
    GameSaveData *save = g_gameDataBlocks.saveBlock;
    SaveSlotTableIV *slots = &save->body.slots;
    GameSaveSelectionState *selection = &save->body.config.selection.state;
    s32 previous = selection->selectedUnitId;
    selection->selectedUnitId = input->unitId;
    selection->mode = input->mode;
    selection->value = input->value;
    selection->money = input->parameter;
    if (selection->selectedUnitId != 0) {
        for (u32 i = 0; i < 3; ++i) {
            s32 slot = slots->active[i];
            if (slot >= 0 && slots->units[slot].id == selection->selectedUnitId) {
                slots->active[i] = -1;
                break;
            }
        }
        for (s32 i = 0; i < 24; ++i) {
            s32 slot = slots->stock[i];
            if (slot >= 0) {
                StatBlock *unit = &saveSlotTable()->units[slot];
                if (unit->id == selection->selectedUnitId) {
                    objectFlagSetBit(unit, 2);
                }
                if (previous != 0 && selection->selectedUnitId != previous) {
                    unit = &saveSlotTable()->units[slots->stock[i]];
                    if (unit->id == previous) {
                        objectFlagsClear(unit, 4);
                    }
                }
            }
        }
    } else {
        for (s32 i = 0; i < 24; ++i) {
            s32 slot = slots->stock[i];
            if (slot >= 0 && flagWordTestBit(&saveSlotTable()->units[slot], 2)) {
                objectFlagsClear(&saveSlotTable()->units[slots->stock[i]], 4);
            }
        }
    }
}
}
