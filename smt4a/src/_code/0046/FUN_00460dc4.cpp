#include "common.h"

struct ClearBlock {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 a;
    /* 0x18 */ u32 b;
    /* 0x1c */ u32 c;
};

/* Clears the three words. */
extern "C" void FUN_00460dc4(ClearBlock *block)
{
    block->a = 0;
    block->b = 0;
    block->c = 0;
}
