#include "common.h"

extern "C" {

int bgmPlay(u32 value, int a, int b);
int scrGetArg(int index);

/* Script command: arguments 1 and 2 are clamped to be non-negative. */
u32 scrCommBgmPlay(void)
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
    bgmPlay(value, a, b);
    return 1;
}

} /* extern "C" */
