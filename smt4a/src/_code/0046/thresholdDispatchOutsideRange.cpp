/* NON_MATCHING: retail pairs min/max loads into vldmia r0, {s1-s2}; armcc emits separate vldr loads. */
#include "common.h"

struct ThresholdRange {
    f32 min;
    f32 max;
    u8 lowKind;
    u8 highKind;
};

typedef void (*ThresholdHandler)(void);

extern "C" {
extern ThresholdHandler DAT_00547a70[];
extern ThresholdHandler DAT_00547a7c[];

/* Dispatches to the low or high handler table when `value` falls outside [min, max). */
void thresholdDispatchOutsideRange(const ThresholdRange *range, f32 value)
{
    if (range->min > value) {
        DAT_00547a70[range->lowKind]();
    } else if (range->max <= value) {
        DAT_00547a7c[range->highKind]();
    }
}
}
