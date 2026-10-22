/* NON_MATCHING: retail addresses the HP pair from entry+0xCC (a sub-record holding id, value and maxHp), so the add/multiply schedule differs. */
#include "shard/W4_Match6_BtlEntry.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BtlMainState *btlGetMainState(void);

// Script result: 1 when an active, unblocked entry with the given id is at or below the HP percentage.
u32 FUN_002f041c(void)
{
    u32 id = scrGetArg(0);
    s32 percent = scrGetArg(1);

    for (s32 i = 0; i < BTL_ENTRY_COUNT; ++i) {
        BtlEntry *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & BTL_ENTRY_FLAG_PRESENT) && (entry->flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(entry->flags & BTL_ENTRY_FLAG_BLOCKED) && entry->id == id &&
            entry->value * 100 / entry->maxHp <= percent) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
