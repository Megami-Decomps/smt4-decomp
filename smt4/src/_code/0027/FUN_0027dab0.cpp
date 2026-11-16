/* NON_MATCHING: IDENTICAL with unit cflags `--fpu=softvfp` (default flags otherwise); under the default VFP build only the entry pointer and the reloaded member id swap r1/r2 (retail: entry r2, id r1). */
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
    for (s32 index = 0; index < 50; ++index) {
        if (member->id == entry->members.ids[index]) {
            return index;
        }
    }
    return -1;
}
}
