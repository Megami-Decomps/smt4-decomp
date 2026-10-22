/* NON_MATCHING: stat-index and found-flag saved registers are exchanged. */
#include "shard/W4_Match6_BtlEntry.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
BtlMainState *btlGetMainState();

u32 FUN_00324d70()
{
    u32 id = scrGetArg(0);
    s32 kind = scrGetArg(1);
    s32 stat = 0;
    if (kind == 0) {
        stat = 7;
    } else if (kind == 1) {
        stat = 10;
    } else if (kind == 2) {
        stat = 11;
    }
    u8 found = 0;
    for (s32 index = 0; index < BTL_ENTRY_COUNT; ++index) {
        BtlEntry *entry = &btlGetMainState()->entries[index];
        u32 flags = entry->flags;
        if ((flags & BTL_ENTRY_FLAG_PRESENT) != 0 && (flags & BTL_ENTRY_FLAG_ACTIVE) != 0 &&
            (flags & BTL_ENTRY_FLAG_BLOCKED) == 0 && entry->id == id) {
            found = 1;
            if (entry->stat[stat] < 1) {
                scrSetResult(0);
                return 1;
            }
        }
    }
    scrSetResult(found != 0);
    return 1;
}
}
