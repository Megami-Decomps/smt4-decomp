#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void FUN_00297980(s32 value);

/* Script command: passes argument zero to FUN_00297980. */
s32 FUN_00349094(void)
{
    FUN_00297980(scrGetArg(0));
    return 1;
}

} /* extern "C" */
