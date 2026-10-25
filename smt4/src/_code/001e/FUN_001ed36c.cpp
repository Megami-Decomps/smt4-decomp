#include "common.h"

extern "C" {

int eventTexRegisterAndSortTask(int value);
int scrGetArg(...);
int eventTexSetCurrent(void);
int FUN_0031bc80(int a, int b, u32 c);

u32 FUN_001ed36c(void)
{
    int a = scrGetArg(0);
    u32 b = scrGetArg(1);

    a = FUN_0031bc80(a, 1, b);
    if (a != 0) {
        eventTexSetCurrent();
        eventTexRegisterAndSortTask(a);
    }
    return 1;
}

} /* extern "C" */
