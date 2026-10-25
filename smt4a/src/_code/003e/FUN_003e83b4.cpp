/* NON_MATCHING: the index range check now matches (two signed compares); retail still loads the u64 mask with different ldr/ldm forms per branch */
#include "shard/BattleFlagMasks.h"

struct BattleEntryState {
    u8 unk0000[0x1FFC];   // 0x0000
    u8 *entries;          // 0x1FFC
};

struct BattleEntry {
    u64 flags;            // 0x00
    u8 unk08[0x400];      // 0x08
};

extern "C" {

/* Returns entry `index` when its flags intersect the entry mask (matches != 0) or do not (matches == 0); NULL otherwise or out of range. */
BattleEntry *FUN_003e83b4(BattleEntryState *state, s32 index, s32 matches)
{
    if (index < 0) {
        return NULL;
    }
    if (index >= 109) {
        return NULL;
    }
    BattleEntry *entry = (BattleEntry *)state->entries + index;

    if (matches != 0) {
        if ((g_btlMain.entryMask & entry->flags) != 0) {
            return entry;
        }
    } else if ((entry->flags & g_btlMain.entryMask) == 0) {
        return entry;
    }
    return NULL;
}

} /* extern "C" */
