#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
void FUN_003ca234(s32 enabled);
/* Script command: passes whether its first argument is non-zero to FUN_003ca234. */
s32 FUN_003cd8e0(void)
{
    FUN_003ca234(scrGetArg(0) != 0);
    return 1;
}
}
