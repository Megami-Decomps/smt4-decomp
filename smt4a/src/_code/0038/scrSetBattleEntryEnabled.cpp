/* Sets the flag at +0x3F4 of the entry found for id scrGetArg(0) to whether scrGetArg(1) is nonzero; always returns 1. */
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "common.h"

extern "C" {

extern s32 scrGetArg(s32 index);

u32 scrSetBattleEntryEnabled(void)
{
    u32 id = scrGetArg(0);
    s32 enabled = scrGetArg(1);
    BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), id);

    if (entry != NULL) {
        entry->data.state = enabled != 0;
    }
    return 1;
}

}
