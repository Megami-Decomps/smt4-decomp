/* NON_MATCHING: compiler uses r0 for the owner pointer instead of retail's r1 with a separate zero result. */
#include "common.h"

namespace { struct CecProcess { u32 job; u32 value; }; }

extern "C" {
/* Reads or updates the requested object state. */
extern CecProcess *g_cecProcess;
u32 FUN_003bbd88(u32 value);
u32 FUN_002e1afc(void)
{
    if (g_cecProcess == NULL) {
        return 0;
    }
    return FUN_003bbd88(g_cecProcess->value);
}
}
