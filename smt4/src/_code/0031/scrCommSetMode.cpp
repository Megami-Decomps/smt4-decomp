#include "common.h"

extern "C" {

s32 scrGetArg(s32 index);
void FUN_002c8658(u32 mode);

/* Script command: maps script argument 0 (0..3) to mode 1..4 and hands it to FUN_002c8658. Always returns 1. */
u32 scrCommSetMode(s32 firstArg)
{
    s32 selected = scrGetArg(firstArg);

    if (selected == 0) {
        FUN_002c8658(1);
    } else if (selected == 1) {
        FUN_002c8658(2);
    } else if (selected == 2) {
        FUN_002c8658(3);
    } else if (selected == 3) {
        FUN_002c8658(4);
    }
    return 1;
}

} /* extern "C" */
