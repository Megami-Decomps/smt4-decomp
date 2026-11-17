/* NON_MATCHING: instructions and schedule match retail; only the saved-register numbering differs (flag r5/value r7/entries r6 in retail). */
#include "gamedata/ItemFlagState.h"
#include "gamedata/GameFlags.h"
#include "gamedata/EncountData.h"
#include "gamedata/GameDataEntries.h"

extern "C" {
s32 gameFlagIsSet(u32);

void weightedTableRollNextValue(u8, u8, s32);

/* Reset the encounter roll states whose applying record would change with this flag. */
void FUN_004bb6d8(u32 flag, u32 value)
{
    if (value != 0) {
        if (gameFlagIsSet(flag)) {
            return;
        }
    } else {
        if (!gameFlagIsSet(flag)) {
            return;
        }
    }
    void *table = dataTableGet(2, 0);
    EncountRecordA *entries = encountRecordsA(table);
    s32 count = dataTableGetCount(table);
    for (s32 i = 0; i < count; ++i) {
        if (entries[i].requiredFlag == flag || entries[i].excludedFlag == flag) {
            u8 groupId = entries[i].map;
            u8 itemId = entries[i].area;
            ItemFlagCacheState *state = gameDataGetTableEntry(groupId, itemId);
            const EncountRecordA *previous = dataTable02FindConditionalMapRecord(groupId, itemId);
            gameFlagSetValue(flag, value, 0);
            const EncountRecordA *current = dataTable02FindConditionalMapRecord(groupId, itemId);
            if (previous != current) {
                state->count = 0;
                state->flags &= ~0x1F;
                weightedTableRollNextValue(groupId, itemId, 0);
            }
            gameFlagSetValue(flag, value ^ 1, 0);
        }
    }
}
}
