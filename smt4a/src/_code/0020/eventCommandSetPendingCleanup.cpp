#include "common.h"

extern "C" {

extern u32 g_eventCommandPendingCleanup;

/* Stores `value` in the word at 0x570D58. */
void eventCommandSetPendingCleanup(u32 value)
{
    g_eventCommandPendingCleanup = value;
}

} /* extern "C" */
