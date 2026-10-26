/* NON_MATCHING: retail keeps the zero in r2 where armcc picks r1 (same register-choice family as FUN_003494f0 / frameHeapInitializeRange). */
#include "common.h"

struct ClearBlock {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
};

/* Clears the three words. */
extern "C" void FUN_0043dd40(ClearBlock *block)
{
    block->a = 0;
    block->b = 0;
    block->c = 0;
}
