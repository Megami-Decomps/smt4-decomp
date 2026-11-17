#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "common.h"
#include "battle/BtlEntryLookup.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
/* Returns the selected battle entry's value to the script. */
s32 FUN_0030b62c()
{
    s32 id = scrGetArg(0);
    BtlUnitData *entry = btlFindEntryBlockByMemberId(btlGetMainState(), id);
    scrSetResult(entry->special);
    return 1;
}
}
