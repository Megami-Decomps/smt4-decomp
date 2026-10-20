/* NON_MATCHING: the return value is copied with `mov r0, r1` where retail has `movs r0, r1`. */
#include "common.h"

extern "C" {

/* Try-acquire: sets *flag and returns 1 if it was clear, else returns 0. */
u32 FUN_002bfefc(s32 *flag)
{
    if (*flag != 0) {
        return 0;
    }
    return *flag = 1;
}

} /* extern "C" */
