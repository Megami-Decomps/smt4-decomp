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
u32 scrCommGameFlagValueSet(void)
{
    FlagBlock *block = gameFlagsGetBlock();
    block->section.values[scrGetArg(0)] = scrGetArg(1);
    return 1;
}

} /* extern "C" */
