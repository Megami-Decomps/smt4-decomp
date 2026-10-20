#include "common.h"

extern "C" {

typedef struct Range {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 begin;
    /* 0x08 */ s32 end;
} Range;

/* Returns 1 when the range is empty. */
u32 rangeIsEmpty3(Range *range)
{
    if (range->begin == range->end) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
