#include "common.h"

extern "C" {

int FUN_00259324(u32 color, int arg1, int arg2, float scale);
int scrGetArg(int index);

/* Script command: starts the fade (scale 1.0) with color 0xff, or 0xffffffff when script argument 0 is nonzero. */
u32 FUN_002d88d8(int firstArg)
{
    u32 color;

    if (scrGetArg(firstArg) == 0) {
        color = 0xff;
    } else {
        color = 0xffffffff;
    }
    FUN_00259324(color, 0, 1, 1.0f);
    return 1;
}

} /* extern "C" */
