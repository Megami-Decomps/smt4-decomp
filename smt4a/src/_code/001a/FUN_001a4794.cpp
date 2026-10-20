#include "common.h"

extern "C" {

typedef struct Region {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 base;
    /* 0x14 */ s32 size;
    /* 0x18 */ s32 start;
    /* 0x1C */ s32 length;
} Region;                       /* 0x20 */

typedef struct Heap {
    /* 0x00 */ Region regions[2];
    /* 0x40 */ u8 unk40[8];
    /* 0x48 */ s32 current;
    /* 0x4C */ u8 unk4C[8];
    /* 0x54 */ s32 low;
    /* 0x58 */ s32 high;
    /* 0x5C */ s32 lowSaved;
    /* 0x60 */ s32 highSaved;
} Heap;

/* Points the heap's low and high marks (and their saved copies) just past the data of the current region, 4-byte aligned. */
void FUN_001a4794(Heap *heap)
{
    Region *region;
    s32 low;
    s32 high;

    region = &heap->regions[heap->current];
    low = ((region->start + region->length) & 0xFFFFFFFCU) + region->base;
    heap->low = low;
    high = region->size + ((region->start + region->length) & 0xFFFFFFFCU);
    heap->high = high;
    heap->lowSaved = low;
    heap->highSaved = high;
}

} /* extern "C" */
