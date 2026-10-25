/* Forwards its argument to the function pointer stored in a global (tail call). */
#include "mobiclip/MobiclipAllocator.h"

extern "C" {

extern void *(*g_mobiclipAllocator)(u32 bytes);

void *callGlobalHook(u32 bytes)
{
    return g_mobiclipAllocator(bytes);
}

} /* extern "C" */
