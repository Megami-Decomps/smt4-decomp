/* NON_MATCHING: retail rebases the MP accesses at entry+0xcc (like btlScriptAnyEntryMpAtMost); the flat BtlEntry layout rebases at +0x100 and reorders the multiply */
#include "shard/W4_Match6_BtlEntry.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BtlMainState *btlGetMainState(void);

/* Script command: sets 1 when a present, active, unblocked entry with the id has at most the given MP percentage. */
u32 FUN_002f04c4(void)
{
    u32 id = scrGetArg(0);
    s32 percent = scrGetArg(1);
    s32 i;

    for (i = 0; i < BTL_ENTRY_COUNT; i++) {
        BtlEntry *entry = &btlGetMainState()->entries[i];
        if ((entry->flags & BTL_ENTRY_FLAG_PRESENT) && (entry->flags & BTL_ENTRY_FLAG_ACTIVE) &&
            !(entry->flags & BTL_ENTRY_FLAG_BLOCKED) && entry->id == id &&
            entry->mp * 100 / entry->maxMp <= percent) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
