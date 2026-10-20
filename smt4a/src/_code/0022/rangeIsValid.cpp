#include "common.h"

extern "C" {

typedef struct Range {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s16 first;
    /* 0x12 */ s16 last;
} Range;

/* Returns 1 when the range is set (first is not -1) and last is not before first. */
u32 rangeIsValid(Range *range)
{
    u32 valid;

    if ((range->first == -1) || (range->last < range->first)) {
        valid = 0;
    } else {
        valid = 1;
    }
    return valid;
}

} /* extern "C" */
