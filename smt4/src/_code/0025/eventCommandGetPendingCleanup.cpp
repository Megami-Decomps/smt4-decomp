#include "common.h"

extern "C" {

extern u32 g_eventCommandPendingCleanup;

u32 eventCommandGetPendingCleanup(void)
{
    return g_eventCommandPendingCleanup;
}

} /* extern "C" */
