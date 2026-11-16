#include "common.h"
#include "battle/BtlMainAccess.h"
#include "shard/W4_Match6_BtlEntry.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern BtlEntry *btlMainFindEntryByListedId(void *main, u32 id);

/* Script command: sets (arg 1 > 0) or clears flag bit 16 of the battle entry with the listed id in argument 0. */
u32 scrCommBtlEntrySetMarkFlag(void)
{
    u32 id = scrGetArg(0);
    s32 on = scrGetArg(1);
    BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), id);

    if (entry != NULL) {
        if (on > 0) {
            entry->flagMask |= 0x10000;
        } else {
            entry->flagMask &= ~0x10000ULL;
        }
    }
    return 1;
}

} /* extern "C" */
