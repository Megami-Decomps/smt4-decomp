#include "common.h"

extern "C" {

typedef struct Range {
    /* 0x00 */ f32 start;
    /* 0x04 */ f32 end;
    /* 0x08 */ f32 unk08;
    /* 0x0C */ f32 unk0C;
    /* 0x10 */ s16 duration;
    /* 0x12 */ s16 delay;
} Range;

/* Sets up a range from `start` to `end` over `duration` (the delay is stored negated); the two
 * words at 8 and 0xC are cleared. Does nothing for a NULL range. */
void rangeInit(Range *range, f32 start, f32 end, s16 duration, s16 delay)
{
    if (range != NULL) {
        range->start = start;
        range->end = end;
        range->duration = duration;
        range->delay = -delay;
        range->unk08 = 0.0f;
        range->unk0C = 0.0f;
    }
}

} /* extern "C" */
