#include "common.h"

extern "C" {

extern u32 DAT_00570d58;

/* Returns the word at 0x570D58. */
u32 eventCommandGetPendingCleanup(void)
{
    return DAT_00570d58;
}

} /* extern "C" */
