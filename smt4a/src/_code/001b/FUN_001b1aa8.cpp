#include "common.h"

struct RangeState {
    /* 0x00 */ s32 first;
    /* 0x04 */ s32 second;
};

/* Resets the range to its unset state. */
extern "C" void FUN_001b1aa8(RangeState *range)
{
    range->first = -1;
    range->second = 0;
}
