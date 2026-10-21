#include "shard/Shard003C.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern void gameFlagSlotSetEnabled(s32 id, s32 flag);

/* Script command: gameFlagSlotSetEnabled(argN, arg1 == 1). */
u32 FUN_003c110c(s32 argIndex)
{
    u16 id = scrGetArg(argIndex);
    s32 mode = scrGetArg(1);

    gameFlagSlotSetEnabled(id, mode == 1);
    return 1;
}

} /* extern "C" */
