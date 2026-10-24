#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void *btlGetMainState(void);
void FUN_003e9f38(void *battle, s32 value);

/* Script command: passes the battle and the argument to FUN_003e9f38. */
u32 FUN_003b7e98(void)
{
    s32 value = scrGetArg(0);

    FUN_003e9f38(btlGetMainState(), value);
    return 1;
}

} /* extern "C" */
