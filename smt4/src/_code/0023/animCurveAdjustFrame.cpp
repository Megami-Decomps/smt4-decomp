#include "common.h"
extern "C" {
struct ThresholdActions { f32 lower, upper; u8 below, above; };
/* Maps a value outside [lower, upper) back by the configured repeat method. */
typedef f32 (*ThresholdAction)(f32 value, f32 lower, f32 upper);
extern ThresholdAction DAT_0040b890[];
extern ThresholdAction DAT_0040b89c[];
/* Returns the value adjusted by the configured action when it lies outside the threshold interval. */
f32 animCurveAdjustFrame(const ThresholdActions *actions, f32 value)
{
    if (actions->lower > value) {
        return DAT_0040b890[actions->below](value, actions->lower, actions->upper);
    } else if (actions->upper <= value) {
        return DAT_0040b89c[actions->above](value, actions->lower, actions->upper);
    }
    return value;
}
}
