#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void FUN_00223b0c(s32 value);

/* Script command: passes its first argument to FUN_00223b0c. */
s32 FUN_002212f8(void)
{
    FUN_00223b0c(scrGetArg(0));
    return 1;
}
}
