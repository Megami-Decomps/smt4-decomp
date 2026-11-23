#include "common.h"

struct ThresholdRange {
    f32 min;
    f32 max;
    u8 lowKind;
    u8 highKind;
};

/* Maps a value outside [min, max) back by the configured repeat method. */
typedef f32 (*ThresholdHandler)(f32 value, f32 min, f32 max);

extern "C" {
extern ThresholdHandler DAT_00547a70[];
extern ThresholdHandler DAT_00547a7c[];

/* Returns `value` adjusted by the low or high handler when it falls outside [min, max). */
f32 animCurveAdjustFrame(const ThresholdRange *range, f32 value)
{
    if (range->min > value) {
        return DAT_00547a70[range->lowKind](value, range->min, range->max);
    } else if (range->max <= value) {
        return DAT_00547a7c[range->highKind](value, range->min, range->max);
    }
    return value;
}
}
