/* Forwards its argument to the function pointer stored in a global (tail call). */
#include "common.h"

extern "C" {

extern void (*g_mobiclipAllocator)(u32 arg);

void callGlobalHook(u32 arg)
{
    g_mobiclipAllocator(arg);
}

} /* extern "C" */
