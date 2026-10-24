#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void FUN_0032cf50(s32 value);

/* Script command: passes argument zero to FUN_0032cf50. */
s32 FUN_00283578(void)
{
    FUN_0032cf50(scrGetArg(0));
    return 1;
}

} /* extern "C" */
