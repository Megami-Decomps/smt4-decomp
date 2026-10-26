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
    s8 *stock = save->party.stock;
    s32 previous = save->selection.unk24;
    save->selection.unk24 = input->unitId;
    save->selection.unk26[0] = input->mode;
    save->selection.unk1C = input->value;
    save->selection.unk20 = input->parameter;
    if (save->selection.unk24 == 0) {
        for (s32 i = 0; i < 24; ++i) {
            s32 slot = stock[i];
            if (slot >= 0 && flagWordTestBit(&g_gameDataBlocks.saveBlock->party.units[slot], 2)) {
                objectFlagsClear(&g_gameDataBlocks.saveBlock->party.units[stock[i]], 4);
            }
        }
        return;
    }
    for (s32 i = 0; i < 3; ++i) {
        s32 slot = save->party.active[i];
        if (slot >= 0 && save->party.units[slot].id == save->selection.unk24) {
            save->party.active[i] = -1;
            break;
        }
    }
    for (s32 i = 0; i < 24; ++i) {
        s32 slot = stock[i];
        if (slot >= 0) {
            StatBlock *unit = &g_gameDataBlocks.saveBlock->party.units[slot];
            if (unit->id == save->selection.unk24) {
                objectFlagSetBit(unit, 2);
            }
            if (previous != 0 && save->selection.unk24 != previous) {
                unit = &g_gameDataBlocks.saveBlock->party.units[stock[i]];
                if (unit->id == previous) {
                    objectFlagsClear(unit, 4);
                }
            }
        }
    }
}
}
