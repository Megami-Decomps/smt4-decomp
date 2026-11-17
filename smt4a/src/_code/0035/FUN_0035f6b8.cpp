#include "common.h"
#include "gamedata/Table00Lookup.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
}

extern "C" s32 FUN_0035f6b8(void)
{
    scrSetResult(dataTable00FindById(scrGetArg(0))->level & 0x7FFF);
    return 1;
}
