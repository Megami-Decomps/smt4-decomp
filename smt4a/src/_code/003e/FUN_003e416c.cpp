/* NON_MATCHING: retail and the build use different registers for the bought-app bit operations. */
#include "gamedata/AppUnlockBits.h"
#include "gamedata/AppUnlockState.h"
#include "gamedata/DataTableAccess.h"
#include "gamedata/GauntletAppTable.h"

extern "C" {

s32 shopGetEntryAvailability(s32 entryIndex);

/* Unlocks each free app whose requirements are met and flags it as newly unlocked. */
void FUN_003e416c(void)
{
    AppUnlockState *area = (AppUnlockState *)gameDataBlockGetArea2D68();
    for (s32 entryIndex = 1; entryIndex < 0x8du; ++entryIndex) {
        const GauntletAppRecordA *entry = (const GauntletAppRecordA *)dataFindKeyedRecordWithOverrides(entryIndex);
        if (entry == NULL) {
            continue;
        }
        if (entry->cost != 0) {
            continue;
        }
        if (shopGetEntryAvailability(entryIndex) == 2) {
            continue;
        }

        const s32 byteIndex = entryIndex / 8;
        const u32 mask = 1u << (entryIndex % 8);
        area->unlocked[byteIndex] |= mask;
        area->newlyUnlocked[byteIndex] |= mask;
    }
}

} /* extern "C" */
