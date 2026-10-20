#include "common.h"

extern "C" {

typedef struct Range {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s16 min;
    /* 0x12 */ s16 value;
} Range;

/* 1 when the range is set (min != -1) and value has reached min. */
u32 rangeIsValid(Range *range)
{
    u32 result;

    if ((range->min == -1) || (range->value < range->min)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
