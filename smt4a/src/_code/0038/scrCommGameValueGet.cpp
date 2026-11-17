#include "gamedata/MapSaveBlockA.h"

extern "C" {

extern s32 scrGetArg(u32 index);
extern void scrSetResult(s32 value);

/* Script command: pushes game value A (argument 0) or B (argument 1); returns 1. */
s32 scrCommGameValueGet(void)
{
    s32 which = scrGetArg(0);
    MapSaveBlockA *block = gameFlagsGetBlock();

    if (which == 0) {
        scrSetResult(block->random4);
    } else if (which == 1) {
        scrSetResult(block->random100);
    }
    return 1;
}

} /* extern "C" */
