/* NON_MATCHING: allocation: retail keeps the slot table in r4 and the record offset in r5 (saving r4-r5),
 * this build uses r2/r4 and saves only r4; the load order of the save block and selected id differs too. */
#include "gamedata/GameSaveBlocks.h"

/* Finds the first stock unit whose devil is the selected unit. */
extern "C" StatBlock *stockFindSelectedUnit(void)
{
    StatBlock *result = NULL;
    SaveSlotTableIV *slots = &g_gameDataBlocks.saveBlock->body.slots;

    if (g_gameDataBlocks.saveBlock->body.config.selection.state.selectedUnitId != 0) {
        for (s32 slotIndex = 0; slotIndex < 24; ++slotIndex) {
            s32 recordIndex = slots->stock[slotIndex];
            if (recordIndex >= 0 &&
                slots->units[recordIndex].id == g_gameDataBlocks.saveBlock->body.config.selection.state.selectedUnitId) {
                result = &slots->units[slots->stock[slotIndex]];
                break;
            }
        }
    }

    return result;
}
