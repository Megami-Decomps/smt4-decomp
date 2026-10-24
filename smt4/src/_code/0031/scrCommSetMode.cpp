#include "common.h"

extern "C" {

s32 scrGetArg(s32 index);
void lmapMainStateSet(u32 mode);

/* Script command: maps script argument 0 (0..3) to mode 1..4 and hands it to lmapMainStateSet. Always returns 1. */
u32 scrCommSetMode(void)
{
    s32 selected = scrGetArg(0);

    if (selected == 0) {
        lmapMainStateSet(1);
    } else if (selected == 1) {
        lmapMainStateSet(2);
    } else if (selected == 2) {
        lmapMainStateSet(3);
    } else if (selected == 3) {
        lmapMainStateSet(4);
    }
    return 1;
}

} /* extern "C" */
