#include "common.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);

/* Script command: sets the result to a data table 00 entry's word at 0x74 divided by 4. */
s32 FUN_003b1a50(void)
{
    scrSetResult(nkmEnemyFindById((u16)scrGetArg(0))->experience >> 2);
    return 1;
}
}
