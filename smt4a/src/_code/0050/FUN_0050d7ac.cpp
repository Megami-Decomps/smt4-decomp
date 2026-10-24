/* NON_MATCHING: retail keeps the 0.0f of the domain-error path live in s18 (vdiv s18,s18, vpush d8-d10, bls/pred layout); armcc folds 0.0f/0.0f to a NaN literal. */
#include "romwright_types.h"
#include <math.h>

extern "C" {

__softfp int ARM_fpclassifyf(float x);
void FUN_001c4360(void);
int __set_errno(int);
__softfp float FUN_001c459c(float);

union FloatBits {
    float f;
    unsigned int u;
};

/* Hard-float asinf: polynomial on [-0.5, 0.5], square-root identity outside it. */
float FUN_0050d7ac(float x)
{
    FloatBits in;
    float y, t;
    float hi = 0.0f;
    float lo;

    in.f = x;

    if ((in.u << 1) + 0x8e000000u > 0x0d000000u) {
        if ((in.u << 1) < 0x72000000u) {
            if (ARM_fpclassifyf(x) == 4) {
                FUN_001c4360();
            }
            return x;
        }
        if ((in.u << 1) > 0xff000000u) {
            return x + x;
        }
        __set_errno(1);
        return 0.0f / 0.0f;
    }

    lo = hi;
    if ((in.u << 1) > 0x7e000000u) {
        t = (1.0f - fabsf(x)) * 0.5f;
        y = FUN_001c459c(t);
        if (in.u & 0x80000000u) {
            y = -y;
            hi = -1.5703125f;
            lo = -0.0004838268f;
        } else {
            hi = 1.5703125f;
            lo = 0.0004838268f;
        }
        y = y * -2.0f;
    } else {
        t = x * x;
        y = x;
    }
    return (lo + y) + (y * t) * (0.16666673f + t * (0.07498761f + t * (0.045020215f + t * (0.026433362f + t * 0.038328305f)))) + hi;
}

} /* extern "C" */
