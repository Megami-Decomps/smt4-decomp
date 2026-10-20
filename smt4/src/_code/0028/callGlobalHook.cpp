/* Forwards its argument to the function pointer stored in a global (tail call). */
#include "common.h"

extern "C" {

extern void (*DAT_0044e978)(u32 arg);

void callGlobalHook(u32 arg)
{
    DAT_0044e978(arg);
}

} /* extern "C" */
