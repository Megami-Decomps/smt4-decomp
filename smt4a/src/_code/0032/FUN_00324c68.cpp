#include "gamedata/MapSaveBlockA.h"

extern "C" {

/* Resolves the game flag storage and reports completion. */
s32 FUN_00324c68(void)
{
    gameFlagsGetBlock();
    return 1;
}
}
