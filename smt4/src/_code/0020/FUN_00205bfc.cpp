#include "common.h"

extern "C" {

int scrSetResult(int result);
extern int scrGetArg(u32 index);
extern int FUN_00296d6c(int a, int b);

/* Script command: result = arg0 * (FUN_00296d6c(arg1 << 10, arg2 << 10) / 100) >> 10. */
u32 FUN_00205bfc(void)
{
    int a = scrGetArg(0);
    int b = scrGetArg(1);
    int c = scrGetArg(2);

    b = FUN_00296d6c(b << 10, c << 10);
    b = b / 100;
    scrSetResult(a * b >> 10);
    return 1;
}

} /* extern "C" */
