#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void FUN_0031c104(s32 value);

/* Script command: passes its first argument to FUN_0031c104. */
s32 FUN_00348be8(void)
{
    FUN_0031c104(scrGetArg(0));
    return 1;
}
}
