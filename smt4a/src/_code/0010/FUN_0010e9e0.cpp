#include "common.h"

extern "C" {

typedef struct MaxTracker {
    /* 0x000 */ u8 unk000[0x2E4];
    /* 0x2E4 */ u32 max;
} MaxTracker;

/* Raises the tracked maximum to `value` if it is larger. */
void FUN_0010e9e0(MaxTracker *tracker, u32 value)
{
    if (tracker->max < value) {
        tracker->max = value;
        return;
    }
}

} /* extern "C" */
