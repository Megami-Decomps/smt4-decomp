#include "common.h"

extern "C" {

typedef struct RangeLimit {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 low;
    /* 0x08 */ s32 high;
} RangeLimit;

/* The smaller of the two limits. */
int FUN_00233718(RangeLimit *limit)
{
    int result = limit->high;

    if (limit->low < limit->high) {
        result = limit->low;
    }
    return result;
}

} /* extern "C" */
