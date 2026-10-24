#include "common.h"

extern "C" {

s32 scrSetResult(s32 value);

/* Script command: returns zero to the script. */
s32 FUN_00317dd4(void)
{
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
