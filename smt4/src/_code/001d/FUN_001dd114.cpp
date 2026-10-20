#include "common.h"

extern "C" {

int FUN_002629a0(u32 value, int a);
int scrGetArg(...);

/* Script command: argument 1 is clamped to be non-negative. */
u32 FUN_001dd114(void)
{
    u32 value = scrGetArg();
    int a = scrGetArg(1);

    if (a < 0) {
        a = 0;
    }
    FUN_002629a0(value, a);
    return 1;
}

} /* extern "C" */
