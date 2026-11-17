#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {

/* Sets the submission wait timeout and the callback run when it expires. */
void FUN_001131f8(s64 timeout, void (*onTimeout)(void))
{
    g_asdGfxContext.onTimeout = onTimeout;
    g_asdGfxContext.timeout = timeout;
}

} /* extern "C" */
