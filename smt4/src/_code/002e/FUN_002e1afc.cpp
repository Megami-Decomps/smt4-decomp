#include "common.h"

namespace { struct CecProcess { u32 job; u32 value; }; }

extern "C" {
/* Reads or updates the requested object state. */
extern CecProcess *g_cecProcess;
u32 FUN_003bbd88(u32 value);
u32 FUN_002e1afc(void)
{
    u32 result = 0;
    if (g_cecProcess != NULL)
        result = FUN_003bbd88(g_cecProcess->value);
    return result;
}
}
