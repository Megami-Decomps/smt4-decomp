#include "common.h"

extern "C" {

u32 scrGetArg(void);
u32 FUN_002fdff4(void);
int eventTexSetJobParam(void);
int FUN_00289234(u32 value);
int scrSetResult(u32 value);

/* Script command: runs the event texture job setup and returns FUN_002fdff4's value as the result. */
u32 FUN_001a1030(void)
{
    u32 value;

    scrGetArg();
    value = FUN_002fdff4();
    eventTexSetJobParam();
    FUN_00289234(value);
    scrSetResult(value);
    return 1;
}

} /* extern "C" */
