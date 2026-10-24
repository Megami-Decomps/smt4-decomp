#include "common.h"

extern "C" {

const char *scrGetArgString(u32 index);

/* Script command that reads its string argument and does nothing with it. */
u32 FUN_0020ec14(void)
{
    scrGetArgString(0);
    return 1;
}

} /* extern "C" */
