#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "common.h"
#include "battle/BtlEntryLookup.h"

extern "C" {

u32 scrGetArg(u32 index);
s32 scrSetResult(s32 value);

/* Script command: tests bit `arg1` of the flags of battle unit `arg0`. */
u32 FUN_0030b694(void)
{
    u32 unit = scrGetArg(0);
    u32 bit = scrGetArg(1);
    BtlUnitData *target = btlFindEntryBlockByMemberId(btlGetMainState(), unit);

    u32 mask = 1 << (bit & 0xFF);

    scrSetResult((target->statusFlags & mask) != 0);
    return 1;
}

} /* extern "C" */
