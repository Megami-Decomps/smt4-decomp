#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 FUN_0031cfd0(u16 value);

/* Script command: returns FUN_0031cfd0 of the argument. */
u32 FUN_0039dd1c(void)
{
    scrSetResult(FUN_0031cfd0(scrGetArg(0)));
    return 1;
}

} /* extern "C" */
