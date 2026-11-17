#include "common.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
}

extern "C" s32 FUN_0031889c(void)
{
    scrSetResult(nkmEnemyFindById((u16)scrGetArg(0))->unk74);
    return 1;
}
