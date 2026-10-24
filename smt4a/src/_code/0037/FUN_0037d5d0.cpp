#include "common.h"

struct GameFlagsBlock {
    /* 0x00 */ u8 unk00[0x15cc];
    /* 0x15cc */ s32 value;
};

extern "C" {

GameFlagsBlock *gameFlagsGetBlock(void);

/* Script command: sets the game flags block's word at 0x15cc to 47. */
u32 FUN_0037d5d0(void)
{
    gameFlagsGetBlock()->value = 47;
    return 1;
}

} /* extern "C" */
