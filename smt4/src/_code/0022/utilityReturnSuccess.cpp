#include "common.h"
extern "C" {
/* Counts through sixteen empty iterations and reports whether the counter stopped early (it never does). */
s32 utilityReturnSuccess(void)
{
    s32 i;
    for (i = 0; i < 16; i++) {
    }
    return i < 16;
}
}
