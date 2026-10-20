#include "common.h"

extern "C" {

int scrGetArg(...);
int FUN_00349080(int a, int b);

u32 FUN_00322b50(void)
{
    u16 a = scrGetArg();
    int b = scrGetArg(1);

    FUN_00349080(a, b == 1);
    return 1;
}

} /* extern "C" */
