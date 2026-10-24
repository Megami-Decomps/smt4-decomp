#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
s32 FUN_004d0cd4(void);
void dispatchIfFound(s32 object, s32 value, s32 flag);

/* Script command: applies its first argument to the object FUN_004d0cd4 returns. */
s32 FUN_00330438(void)
{
    dispatchIfFound(FUN_004d0cd4(), scrGetArg(0), 0);
    return 1;
}
}
