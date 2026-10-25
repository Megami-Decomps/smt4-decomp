/* NON_MATCHING: compiler swaps the entry pointer and searched ID between R1/R2 and reverses comparison operands; loop structure, two-way unrolling, and calls otherwise match. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

struct ListedMember {
    u8 unk00[0x62]; // 0x00
    s16 id;          // 0x62
};

extern "C" {
BtlEntry* btlMainFindEntryByListedId(BtlMainState* state, s32 id);

// Returns a listed member's position within its combatant entry, or -1 when absent.
s32 FUN_0027dab0(BtlMainState* state, const ListedMember* member)
{
    BtlEntry* entry = btlMainFindEntryByListedId(state, member->id);
    if (entry == NULL) {
        return -1;
    }
    s16 id = member->id;
    for (s32 index = 0; index < 50; ++index) {
        if (id == entry->members.ids[index]) {
            return index;
        }
    }
    return -1;
}
}
