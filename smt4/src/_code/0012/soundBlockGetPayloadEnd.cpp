#include "common.h"

extern "C" {

typedef struct Block {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 size;
} Block;

/* Address just past the block's 8-byte header and `size` payload bytes. */
u8 *soundBlockGetPayloadEnd(Block *block)
{
    return (u8 *)block + 8 + block->size;
}

} /* extern "C" */
