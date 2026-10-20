/* NON_MATCHING: retail keeps the constant 1 (the shift base) in r6 and returns it from there; here it is rematerialised (mov r0, #1). */
#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"

extern "C" {

extern BtlMainState *btlGetMainState(void);
extern u32 scrGetArg(u32 index);
extern int scrSetResult(s32 value);

/* Script command: 0 if some present, active, unblocked entry is not in script group `arg` (its bit in groupMask clear), else 1. */
u32 scrBtlAllEntriesInGroup(void)
{
    u32 group = scrGetArg(0);
    s32 i;

    for (i = 0; i < BTL_ENTRY_COUNT; i++) {
        BtlEntry *entry = &btlGetMainState()->entries[i];

        if ((entry->flags & BTL_ENTRY_FLAG_PRESENT) != 0 && (entry->flags & BTL_ENTRY_FLAG_ACTIVE) != 0 &&
            (entry->flags & BTL_ENTRY_FLAG_BLOCKED) == 0 && (entry->groupMask & (1 << (group & 0xFF))) == 0) {
            scrSetResult(0);
            return 1;
        }
    }
    scrSetResult(1);
    return 1;
}

}
