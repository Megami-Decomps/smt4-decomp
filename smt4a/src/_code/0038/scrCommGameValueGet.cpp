#include "common.h"

extern "C" {

typedef struct FlagBlock {
    /* 0x0000 */ u8 unk0000[0x1668];
    /* 0x1668 */ s16 valueA;
    /* 0x166A */ s16 valueB;
} FlagBlock;

extern s32 scrGetArg(u32 index);
extern FlagBlock *gameFlagsGetBlock(void);
extern void scrSetResult(s32 value);

/* Script command: pushes game value A (argument 0) or B (argument 1); returns 1. */
s32 scrCommGameValueGet(void)
{
    s32 which = scrGetArg(0);
    FlagBlock *block = gameFlagsGetBlock();

    if (which == 0) {
        scrSetResult(block->valueA);
    } else if (which == 1) {
        scrSetResult(block->valueB);
    }
    return 1;
}

} /* extern "C" */
