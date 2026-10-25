/* NON_MATCHING: group/item spill choice and cache-reset instruction scheduling differ. */
#include "gamedata/ItemFlagState.h"
#include "gamedata/GameFlags.h"
#include "gamedata/DataTable.h"

extern "C" {
s32 gameFlagIsSet(u32);

ItemFlagCacheState *gameDataGetTableEntry(u8, u8);
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
        const ItemFlagDefinitionA *entry = &entries[i];
        if (entry->firstFlag == flag || entry->secondFlag == flag) {
            u8 itemId = entry->itemId;
            u8 groupId = entry->groupId;
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
