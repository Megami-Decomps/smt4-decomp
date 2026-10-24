#include "common.h"

struct GameFlagsBlock {
    /* 0x0000 */ u8 unk0000[0x1400 + 0x1c4];
    /* 0x15C4 */ f32 value;
};

extern "C" {

GameFlagsBlock *gameFlagsGetBlock(void);
void scrSetResult(s32 result);

/* Script command: returns the game flags block's float at 0x15C4 as an integer. */
u32 FUN_0038ad44(void)
{
    scrSetResult((s32)gameFlagsGetBlock()->value);
    return 1;
}

} /* extern "C" */
