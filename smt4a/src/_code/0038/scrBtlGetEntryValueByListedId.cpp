#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "common.h"
#include "battle/BtlEntryLookup.h"

extern "C" {

extern u32 scrGetArg(u32 index);
extern int scrSetResult(u32 value);

/* Script command: returns the value of the battle entry with the given listed id (0 if there is none). */
u32 scrBtlGetEntryValueByListedId(void)
{
    u32 id = scrGetArg(0);
    u32 result = 0;
    BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), id);

    if (entry != NULL) {
        result = entry->data.maxHp;
    }
    scrSetResult(result);
    return 1;
}

}
