#include "common.h"

extern "C" {

typedef struct Block {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 length;
} Block;

/* Returns the address just past the block's 8-byte header and `length` bytes of data. */
u8 *FUN_0018a45c(Block *block)
{
    return (u8 *)block + 8 + block->length;
}

} /* extern "C" */
