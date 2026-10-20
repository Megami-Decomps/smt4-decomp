#include "common.h"

extern "C" {

/* Try-acquire: sets *flag and returns 1 if it was clear, else returns 0. */
u32 __cxa_guard_acquire(s32 *flag)
{
    if (*flag != 0) {
        return 0;
    }
    return *flag = 1;
}

} /* extern "C" */
