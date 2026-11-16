#include "common.h"

extern "C" {

extern u32 g_eventCommandPendingCleanup;

/* Returns the word at 0x570D58. */
u32 eventCommandGetPendingCleanup(void)
{
    return g_eventCommandPendingCleanup;
}

} /* extern "C" */
