#include "common.h"

extern "C" {

s32 uiAnimateStaggeredSlidesAndFades(u32 value, u32 mode);

/* Query the value in mode zero and normalize its result to boolean. */
s32 recordQueryModeZero(u32 value)
{
    s32 result = 0;
    if (uiAnimateStaggeredSlidesAndFades(value, 0) != 0) {
        result = 1;
    }
    return result;
}

}
