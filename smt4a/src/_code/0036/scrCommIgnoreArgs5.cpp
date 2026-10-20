#include "shard/Shard0036.h"

extern "C" {

extern u32 FUN_002360dc(s32 index);
extern s32 scrGetArg(s32 index);

/* Script command: reads its five arguments and does nothing with them. */
u32 scrCommIgnoreArgs5(s32 argIndex)
{
    FUN_002360dc(argIndex);
    scrGetArg(1);
    scrGetArg(2);
    scrGetArg(3);
    scrGetArg(4);
    return 1;
}

} /* extern "C" */
