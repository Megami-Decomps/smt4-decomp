#include "common.h"

extern "C" {

int scrGetArg(...);
int flagSlotSetEnabled(int a, int b);

u32 scrCommSetFlagSlotEnabled(void)
{
    u16 a = scrGetArg(0);
    int b = scrGetArg(1);

    flagSlotSetEnabled(a, b == 1);
    return 1;
}

} /* extern "C" */
