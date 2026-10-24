#include "common.h"

extern "C" {

void gameDataBlocksSetWord(s32 value);
s32 scrGetArg(s32 index);

/* Script command: stores the first argument in the game data blocks. */
u32 FUN_0031a3e8(void)
{
    gameDataBlocksSetWord(scrGetArg(0));
    return 1;
}

} /* extern "C" */
