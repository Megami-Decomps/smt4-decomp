#include "common.h"

extern "C" {

typedef struct Range {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 start;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ s32 offset;
} Range;

/* Returns start + offset. */
s32 FUN_0017db04(Range *range)
{
    s32 start = range->start;
    s32 offset = range->offset;
    return offset + start;
}

} /* extern "C" */
