#include "common.h"

extern "C" {

const char *scrGetArgString(u32 index);

/* Script command: reads its string argument and does nothing with it. */
s32 FUN_002deacc(void)
{
    scrGetArgString(0);
    return 1;
}

} /* extern "C" */
