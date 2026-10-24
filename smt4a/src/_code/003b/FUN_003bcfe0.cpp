#include "common.h"

struct OwnedBlock {
    /* 0x00 */ u8 unk00[0xf0];
    /* 0xF0 */ u8 unkF0[1];
};

struct BlockOwner {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ OwnedBlock *block;
};

extern "C" {

/* Virtual getter: returns the address of the owned block's field at 0xF0. */
u8 *FUN_003bcfe0(BlockOwner *self)
{
    return self->block->unkF0;
}

} /* extern "C" */
