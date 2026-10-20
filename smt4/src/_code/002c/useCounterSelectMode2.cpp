#include "common.h"

extern "C" {

typedef struct UseCounterBlock {
    /* 0x000 */ u8 unk000[0x744];
    /* 0x744 */ s32 mode;
    /* 0x748 */ u8 unk748[4];
    /* 0x74C */ u8 pending;
    /* 0x74D */ u8 toggle;
} UseCounterBlock;

typedef struct UseCounter {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ UseCounterBlock *block;
} UseCounter;

extern UseCounter g_useCounter;

/* Selects mode 2, clears the pending byte and flips the toggle. */
void useCounterSelectMode2(void)
{
    UseCounterBlock *block = g_useCounter.block;

    block->pending = 0;
    block->mode = 2;
    if (block->toggle == 0) {
        block->toggle = 1;
    } else {
        block->toggle = 0;
    }
}

} /* extern "C" */
