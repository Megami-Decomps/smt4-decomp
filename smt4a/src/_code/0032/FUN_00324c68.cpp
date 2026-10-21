#include "common.h"

extern "C" {
u8 *gameFlagsGetBlock(void);

/* Resolves the game flag storage and reports completion. */
s32 FUN_00324c68(void)
{
    gameFlagsGetBlock();
    return 1;
}
}
