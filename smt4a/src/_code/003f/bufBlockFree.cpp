#include "shard/Shard003F.h"

extern "C" {

typedef struct BufBlock {
    /* 0x00 */ u32 first;
    /* 0x04 */ u8 unk04[0x38];
    /* 0x3C */ u32 buf3C;
    /* 0x40 */ u32 buf40;
    /* 0x44 */ u32 buf44;
} BufBlock;

extern void asdMemFree(u32 ptr);
extern void asdOperatorDelete(BufBlock *block);

/* Stores `value` in the first word, frees the three buffers at +0x3C/+0x40/+0x44 and the block. */
void bufBlockFree(BufBlock *block, u32 value)
{
    block->first = value;
    asdMemFree(block->buf3C);
    asdMemFree(block->buf40);
    asdMemFree(block->buf44);
    asdOperatorDelete(block);
}

} /* extern "C" */
