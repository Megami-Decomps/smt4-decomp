/* NON_MATCHING: register allocation only: the block pointer and the value swap r4/r5, and the store address is built in r1 instead of r0. */
#include "common.h"

extern "C" {

typedef struct FlagSection {
    /* 0x00 */ u8 unk00[0x90];
    /* 0x90 */ u16 values[1];
} FlagSection;

typedef struct FlagBlock {
    /* 0x000 */ u8 unk000[0xD00];
    /* 0xD00 */ FlagSection section;
} FlagBlock;

FlagBlock *gameFlagsGetBlock(void);
s32 scrGetArg(s32 index);

/* Script command: stores argument 1 into the flag block's 16-bit value table at the index given by argument 0. */
u32 FUN_003b6e3c(void)
{
    FlagBlock *block = gameFlagsGetBlock();
    u16 value = scrGetArg(1);

    s32 index = scrGetArg(0);

    block->section.values[index] = value;
    return 1;
}

} /* extern "C" */
