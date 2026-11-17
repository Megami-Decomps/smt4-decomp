#include "common.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);

/* Script command: sets the result to the halfword at 0x84 of the data table 00 entry named by its first argument. */
s32 FUN_00318828(void)
{
    scrSetResult(nkmEnemyFindById((u16)scrGetArg(0))->unk84);
    return 1;
}
}
