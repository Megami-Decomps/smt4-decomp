/* Looks up the entry for the current id and reports its value (0 if there is none). */
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "common.h"
#include "battle/BtlEntryLookup.h"

extern "C" {

extern u32 scrGetArg(u32 arg);
extern void scrSetResult(u32 value);

u32 FUN_0035f654(void)
{
    u32 id = scrGetArg(0);
    u32 value = 0;
    BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), id);

    if (entry != NULL) {
        value = entry->data.hp;
    }
    scrSetResult(value);
    return 1;
}

}
