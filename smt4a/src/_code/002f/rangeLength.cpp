#include "common.h"

extern "C" {

typedef struct Range {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 begin;
    /* 0x10 */ s32 end;
} Range;

/* Returns end - begin. */
s32 rangeLength(Range *range)
{
    return range->end - range->begin;
}

} /* extern "C" */
