#include "common.h"

extern "C" {

s32 scrGetArg(s32 index);
void FUN_00324b14(u32 mode);

/* Script command: maps script argument 0 (0..3) to mode 1..4 and hands it to FUN_00324b14. Always returns 1. */
u32 scrCommSetMode(s32 firstArg)
{
    s32 selected = scrGetArg(firstArg);

    if (selected == 0) {
        FUN_00324b14(1);
    } else if (selected == 1) {
        FUN_00324b14(2);
    } else if (selected == 2) {
        FUN_00324b14(3);
    } else if (selected == 3) {
        FUN_00324b14(4);
    }
    return 1;
}

} /* extern "C" */
