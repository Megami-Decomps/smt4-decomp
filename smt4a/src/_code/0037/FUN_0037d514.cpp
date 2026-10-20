#include "shard/Shard0037.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern void FUN_003851f8(u32 id, s32 flag);

/* Script command: FUN_003851f8(arg0, arg1 != 0). */
u32 FUN_0037d514(s32 argIndex)
{
    u32 id = scrGetArg(argIndex);
    s32 flag = scrGetArg(1);

    FUN_003851f8(id, flag != 0);
    return 1;
}

} /* extern "C" */
