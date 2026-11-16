#include "common.h"

extern "C" {

extern u32 g_eventCommandPendingCleanup;

void eventCommandSetPendingCleanup(u32 value)
{
    g_eventCommandPendingCleanup = value;
}

} /* extern "C" */
