#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {

/* Sets the submission wait timeout and the callback run when it expires. */
void FUN_0014a82c(s64 timeout, void (*onTimeout)(void))
{
    g_asdGfxContext.onTimeout = onTimeout;
    g_asdGfxContext.timeout = timeout;
}

} /* extern "C" */
