#include "common.h"

extern "C" {

typedef struct Range {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 offset;
} Range;

/* Adds `amount` to the offset. */
void rangeOffsetAdd(Range *range, s32 amount)
{
    range->offset = amount + range->offset;
}

} /* extern "C" */
