#include "battle/BtlMainAccess.h"
#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {

#define BTL_ENTRY_COUNT 0x6d


u32 scrGetArg(u32 index);
void scrSetResult(s32 value);

/* Script command: true when some active, used, non-excluded battle entry has slot kind 3 in the slot given by arg0. */
s32 scrCommBattleAnyEntrySlotKind3(void)
{
    u32 slot = scrGetArg(0);
    s32 i;

    for (i = 0; i < BTL_ENTRY_COUNT; i++) {
        BtlEntry *entry = &btlGetMainState()->entries[i];

        if ((entry->flags & 0x10) != 0 && (entry->flags & 1) != 0 && (entry->flags & 0x40) == 0 &&
            entry->values[slot] >> 10 == 3) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
