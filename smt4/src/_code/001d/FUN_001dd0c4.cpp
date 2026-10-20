#include "common.h"

extern "C" {

int scrGetArg(int index);
int soundChannelRequestIfEnabled(u32 value, int a, int b);

/* Script command: arguments 1 and 2 are clamped to be non-negative. */
u32 FUN_001dd0c4(void)
{
    u32 value = scrGetArg(0);
    int a = scrGetArg(1);
    int b = scrGetArg(2);

    if (a < 0) {
        a = 0;
    }
    if (b < 0) {
        b = 0;
    }
    soundChannelRequestIfEnabled(value, a, b);
    return 1;
}

} /* extern "C" */
