#include "common.h"

extern "C" {

typedef struct Range {
    /* 0x00 */ s32 begin;
    /* 0x04 */ s32 end;
} Range;

/* Returns 1 when the range is empty. */
u32 FUN_0030c6a2(Range *range)
{
    if (range->begin == range->end) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
