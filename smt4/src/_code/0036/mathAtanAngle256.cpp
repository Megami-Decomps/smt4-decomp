#include "common.h"

extern "C" f32 FUN_002378fc(f32 ratio);

/* Returns the arctangent of `x` in 256-unit angles (64 = a quarter turn), reducing |x| > 1 through
 * the reciprocal so FUN_002378fc only sees ratios within [-1, 1]. */
extern "C" f32 mathAtanAngle256(f32 x)
{
    if (x >= 0.0f) {
        if (x > 1.0f)
            return 64.0f - FUN_002378fc(1.0f / x);
        return FUN_002378fc(x);
    }
    if (x < -1.0f)
        return FUN_002378fc(-1.0f / x) + -64.0f; /* the base angle -64 added, as mathAtan2Angle256 adds its offsets */
    return -FUN_002378fc(-x);
}
