#include "common.h"

extern "C" {

typedef struct GameFlagBlock {
    /* 0x0000 */ u8 unk0000[0x15D0];
    /* 0x15D0 */ u32 scriptFlag;
} GameFlagBlock;

extern GameFlagBlock *gameFlagsGetBlock(void);
extern int scrGetArg(u32 index);

/* Script command: sets the block's script flag from argument 0 (nonzero or zero). */
u32 FUN_003b0454(void)
{
    GameFlagBlock *block = gameFlagsGetBlock();

    if (scrGetArg(0) == 0) {
        block->scriptFlag = 0;
    } else {
        block->scriptFlag = 1;
    }
    return 1;
}

} /* extern "C" */
