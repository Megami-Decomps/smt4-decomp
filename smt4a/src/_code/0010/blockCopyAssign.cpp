#include "common.h"

extern "C" {

typedef struct Block {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 header;
    /* 0x08 */ u8 data[0x20];
} Block;

void *rt_memcpy(void *dst, const void *src, u32 size);

/* Copy-assigns a Block (header word and 0x20 data bytes) and returns the destination. */
Block *blockCopyAssign(Block *dst, const Block *src)
{
    dst->header = src->header;
    rt_memcpy(dst->data, src->data, 0x20);
    return dst;
}

} /* extern "C" */
