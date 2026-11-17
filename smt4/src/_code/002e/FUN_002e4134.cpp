#include "common.h"
#include "gamedata/Table00Lookup.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
}

extern "C" s32 FUN_002e4134(void)
{
    scrSetResult(dataTable00FindById((u16)scrGetArg(0))->level);
    return 1;
}
