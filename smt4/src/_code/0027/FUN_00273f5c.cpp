#include "common.h"

extern "C" {

int gameFlagSetValue(int a, int b, int c);

void FUN_00273f5c(void)
{
    int i = 0;

    do {
        gameFlagSetValue(i + 0x310, 0, 1);
        i++;
    } while (i < 0x10);
}

} /* extern "C" */
