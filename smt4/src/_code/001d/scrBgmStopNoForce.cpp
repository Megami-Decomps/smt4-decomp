#include "common.h"

extern "C" {

int bgmStopNoForce(u32 value, int a);
int scrGetArg(...);

/* Script command: argument 1 is clamped to be non-negative. */
u32 scrBgmStopNoForce(void)
{
    u32 value = scrGetArg();
    int a = scrGetArg(1);

    if (a < 0) {
        a = 0;
    }
    bgmStopNoForce(value, a);
    return 1;
}

} /* extern "C" */
