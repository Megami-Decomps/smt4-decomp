#include "common.h"

extern "C" {

int scrGetArg(...);
extern int scrGetCommandFrame(void);
extern int FUN_002c1d5c(void);

u32 FUN_001d3bb8(void)
{
    int a;
    int b;

    a = scrGetArg(0);
    if (0 < a) {
        a = scrGetCommandFrame();
        b = scrGetArg(0);
        if ((a < b) && ((a = FUN_002c1d5c(), a == 0 || (a = scrGetCommandFrame(), a < 1)))) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
