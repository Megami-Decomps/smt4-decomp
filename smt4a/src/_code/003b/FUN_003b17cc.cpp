#include "common.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
}

extern "C" s32 FUN_003b17cc(void)
{
    nkmEnemyFindById((u16)scrGetArg(0));
    scrSetResult(0);
    return 1;
}
