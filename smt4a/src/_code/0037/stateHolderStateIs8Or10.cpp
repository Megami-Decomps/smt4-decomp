#include "shard/Shard0037.h"

extern "C" {

extern StateHolder518 *g_statusDown;

/* True when the global object is in state 8 or 10. */
u32 stateHolderStateIs8Or10(void)
{
    if (g_statusDown == NULL || (g_statusDown->state != 8 && g_statusDown->state != 10)) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
