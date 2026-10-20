/* Percentage of `value` in `total`: at most 100, and at least 1 for any positive value. */
#include "common.h"

extern "C" {

u32 calcPercentClamped(s32 value, s32 total)
{
    u8 percent = value * 100 / total;

    if (percent != 0) {
        if (percent > 100) {
            percent = 100;
        }
        return percent;
    }
    if (value > 0) {
        percent = 1;
    }
    return percent;
}

}
