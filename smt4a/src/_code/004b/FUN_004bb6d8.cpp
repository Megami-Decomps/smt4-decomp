/* NON_MATCHING: instructions and schedule match retail; only the saved-register numbering differs (flag r5/value r7/entries r6 in retail). */
#include "gamedata/ItemFlagState.h"
#include "gamedata/GameFlags.h"
#include "gamedata/DataTable.h"
#include "gamedata/GameDataEntries.h"

extern "C" {
s32 gameFlagIsSet(u32);

const ItemFlagVariant *FUN_0015fa74(u8, u8);
void FUN_00148d68(u8, u8, s32);

/* Invalidate item caches whose selected variant would change with this flag. */
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
    ItemFlagDefinitionA *entries = (ItemFlagDefinitionA *)dataTableGetEntries(table);
    s32 count = dataTableGetCount(table);
    for (s32 i = 0; i < count; ++i) {
        if (entries[i].firstFlag == flag || entries[i].secondFlag == flag) {
            u8 groupId = entries[i].groupId;
            u8 itemId = entries[i].itemId;
            ItemFlagCacheState *state = gameDataGetTableEntry(groupId, itemId);
            const ItemFlagVariant *previous = FUN_0015fa74(groupId, itemId);
            gameFlagSetValue(flag, value, 0);
            const ItemFlagVariant *current = FUN_0015fa74(groupId, itemId);
            if (previous != current) {
                state->count = 0;
                state->flags &= ~0x1F;
                FUN_00148d68(groupId, itemId, 0);
            }
            gameFlagSetValue(flag, value ^ 1, 0);
        }
    }
}
}
