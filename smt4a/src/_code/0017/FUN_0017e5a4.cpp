#include "common.h"

extern "C" {

void FUN_00196114(u8 *start, s32 length);

typedef struct Block {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 size;
} Block;

typedef struct Heap {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u32 saved;
    /* 0x34 */ Block *block;
} Heap;

typedef struct Region {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 *start;
    /* 0x08 */ s32 length;
    /* 0x0C */ u32 flags;
} Region;

/* Closes the heap's open block: records its size (in 8-byte units, minus the 0x18-byte header) up to the region's end, passes the region on to FUN_00196114, flags it and restores the region's length from `saved`. */
void FUN_0017e5a4(Heap *heap, Region *region)
{
    heap->block->size = (u32)(((region->start + region->length) - (u8 *)heap->block) - 0x18) >> 3;
    FUN_00196114(region->start, region->length);
    region->flags = region->flags | 4;
    region->length = heap->saved;
    heap->block = NULL;
    heap->saved = 0;
}

} /* extern "C" */
