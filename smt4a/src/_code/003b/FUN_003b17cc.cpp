#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void *dataTable00FindById(u16 id);
void scrSetResult(s32 result);
}

extern "C" s32 FUN_003b17cc(void)
{
    dataTable00FindById(scrGetArg(0));
    scrSetResult(0);
    return 1;
}
