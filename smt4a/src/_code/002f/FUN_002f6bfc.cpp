#include "common.h"

extern "C" {

void strAssign(u32 dest, u8 *source, s32 length, u32 flags);
void FUN_002ea668(u8 *object);
void lazyStaticInitOnce(u8 *object, s32 data, u32 size);
void lazyMemberInitOnce(u8 *object);

typedef struct DataRange {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 base;
    /* 0x10 */ u32 size;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 offset;
} DataRange;

/* Builds a temporary object over the range's data and assigns a 16-byte string to `dest`; always returns 1. */
u32 FUN_002f6bfc(u32 unused, DataRange *range, u32 dest)
{
    u8 object[88];
    u8 text[20];

    FUN_002ea668(object);
    lazyStaticInitOnce(object, range->base + range->offset, range->size);
    lazyMemberInitOnce(object);
    strAssign(dest, text, 0x10, 0xFFFFFFFF);
    return 1;
}

} /* extern "C" */
