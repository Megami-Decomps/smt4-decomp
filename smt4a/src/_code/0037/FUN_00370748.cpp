#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void FUN_0026847c(s32 value, s32 mode);

/* Script command: runs FUN_0026847c with mode one for an argument of ten or less. */
s32 FUN_00370748(void)
{
    s32 value = scrGetArg(0);
    if (value <= 10)
        FUN_0026847c(value, 1);
    return 1;
}

} /* extern "C" */
