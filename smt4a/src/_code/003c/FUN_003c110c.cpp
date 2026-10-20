#include "shard/Shard003C.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern void FUN_004187e8(s32 id, s32 flag);

/* Script command: FUN_004187e8(argN, arg1 == 1). */
u32 FUN_003c110c(s32 argIndex)
{
    u16 id = scrGetArg(argIndex);
    s32 mode = scrGetArg(1);

    FUN_004187e8(id, mode == 1);
    return 1;
}

} /* extern "C" */
