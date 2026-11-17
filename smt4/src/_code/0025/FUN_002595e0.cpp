/* NON_MATCHING: active-slot search is unrolled; save-selection, unit-base and stock addresses fold differently. */
#include "gamedata/UnitSelectionInput.h"
#include "shard/GameDataBlocks.h"
#include "gamedata/FlagBitTests.h"

extern "C" {
void objectFlagsClear(StatBlock *unit, u32 flags);
u32 objectFlagSetBit(StatBlock *unit, u32 bit);

// Save a reserved-unit selection, remove it from active slots, and update stock selection flags.
void FUN_002595e0(const UnitSelectionInput *input)
{
    GameSaveData *save = g_gameDataBlocks.saveBlock;
    s8 *stock = save->body.slots.stock;
    s32 previous = save->body.config.selection.selectedUnitId;
    save->body.config.selection.selectedUnitId = input->unitId;
    save->body.config.selection.mode = input->mode;
    save->body.config.selection.value = input->value;
    save->body.config.selection.money = input->parameter;
    if (save->body.config.selection.selectedUnitId == 0) {
        for (s32 i = 0; i < 24; ++i) {
            s32 slot = stock[i];
            if (slot >= 0 && flagWordTestBit(&g_gameDataBlocks.saveBlock->body.slots.units[slot], 2)) {
                objectFlagsClear(&g_gameDataBlocks.saveBlock->body.slots.units[stock[i]], 4);
            }
        }
        return;
    }
    for (s32 i = 0; i < 3; ++i) {
        s32 slot = save->body.slots.active[i];
        if (slot >= 0 && save->body.slots.units[slot].id == save->body.config.selection.selectedUnitId) {
            save->body.slots.active[i] = -1;
            break;
        }
    }
    for (s32 i = 0; i < 24; ++i) {
        s32 slot = stock[i];
        if (slot >= 0) {
            StatBlock *unit = &g_gameDataBlocks.saveBlock->body.slots.units[slot];
            if (unit->id == save->body.config.selection.selectedUnitId) {
                objectFlagSetBit(unit, 2);
            }
            if (previous != 0 && save->body.config.selection.selectedUnitId != previous) {
                unit = &g_gameDataBlocks.saveBlock->body.slots.units[stock[i]];
                if (unit->id == previous) {
                    objectFlagsClear(unit, 4);
                }
            }
        }
    }
}
}
