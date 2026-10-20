#include "common.h"

extern "C" {

int FUN_00289234(int value);
int scrGetArg(...);
int eventTexSetCurrent(void);
int FUN_0031bc80(int a, int b, u32 c);

u32 FUN_001ed370(void)
{
    int a = scrGetArg();
    u32 b = scrGetArg(1);

    a = FUN_0031bc80(a, 1, b);
    if (a != 0) {
        eventTexSetCurrent();
        FUN_00289234(a);
    }
    return 1;
}

} /* extern "C" */
