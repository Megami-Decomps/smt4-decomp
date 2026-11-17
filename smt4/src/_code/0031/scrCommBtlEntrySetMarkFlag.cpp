#include "common.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntry.h"
#include "battle/BtlGlobals.h"

extern "C" {

extern s32 scrGetArg(s32 index);

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
