#include "common.h"

extern "C" {

int FUN_00287728(int index);
int scrGetArg(...);
int FUN_002a03d8(int index, u32 value);
extern int FUN_002c1d5c(void);

u32 FUN_002f4a14(void)
{
    u32 value = scrGetArg();
    u32 which = scrGetArg(0);

    if (which == 0 || which == 1) {
        if (FUN_002c1d5c() != 0) {
            FUN_00287728(0);
            FUN_00287728(1);
        } else {
            FUN_002a03d8(0, value);
            FUN_002a03d8(1, value);
        }
    }
    return 1;
}

} /* extern "C" */
