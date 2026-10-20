#include "common.h"

extern "C" {

int scrGetArg(...);
extern int FUN_002893d8(void);
extern int FUN_002c1d5c(void);

u32 FUN_001d3bbc(void)
{
    int a;
    int b;

    a = scrGetArg();
    if (0 < a) {
        a = FUN_002893d8();
        b = scrGetArg(0);
        if ((a < b) && ((a = FUN_002c1d5c(), a == 0 || (a = FUN_002893d8(), a < 1)))) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
