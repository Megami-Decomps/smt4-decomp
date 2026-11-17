/* NON_MATCHING: Retail ldr r1, [pc, #132] differs from recovered ldr r0, [pc, #132]. */
#include "gamedata/GameSaveBlocks.h"

// Find the first stock unit whose devil is the selected unit.
extern "C" StatBlock *FUN_00262f94(void)
{
    StatBlock *result = 0;
    GameSaveData *save = g_gameDataBlocks.saveBlock;
    SaveSlotTableIV *slots = &save->body.slots;
    s32 selectedId = save->body.config.selection.selectedUnitId;

    if (selectedId != 0) {
        for (s32 slotIndex = 0; slotIndex < 24; ++slotIndex) {
            s32 recordIndex = slots->stock[slotIndex];
            if (recordIndex >= 0 &&
                slots->units[recordIndex].id == selectedId) {
                result = &slots->units[slots->stock[slotIndex]];
                break;
            }
        }
    }

    return result;
}
