#include "common.h"

extern "C" {

void strAssign(u32 dest, s32 address, u32 size, u32 flags);

typedef struct DataRange {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 base;
    /* 0x10 */ u32 size;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 offset;
} DataRange;

/* Assigns the string at the range's start address (base + offset) and size to `dest`; returns `dest`. */
u32 FUN_0012125e(u32 dest, DataRange *range)
{
    strAssign(dest, range->base + range->offset, range->size, 0xFFFFFFFF);
    return dest;
}

} /* extern "C" */
