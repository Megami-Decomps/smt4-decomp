#include "gamedata/MapSaveBlockA.h"

extern "C" {

extern int scrGetArg(u32 index);

/* Script command: sets the block's script flag from argument 0 (nonzero or zero). */
u32 FUN_003b0454(void)
{
    MapSaveBlockA *block = gameFlagsGetBlock();

    if (scrGetArg(0) == 0) {
        block->scriptFlag = 0;
    } else {
        block->scriptFlag = 1;
    }
    return 1;
}

} /* extern "C" */
