#include "common.h"

extern "C" void FUN_00256194(void);

/* Script command: runs FUN_00256194 and reports success. */
extern "C" s32 FUN_00311240(void)
{
    FUN_00256194();
    return 1;
}
