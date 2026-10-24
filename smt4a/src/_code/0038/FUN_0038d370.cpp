#include "common.h"

extern "C" {

void FUN_003e5354(s32 value);
s32 scrGetArg(s32 index);

/* Script command: passes the first argument to FUN_003e5354. */
u32 FUN_0038d370(void)
{
    FUN_003e5354(scrGetArg(0));
    return 1;
}

} /* extern "C" */
