#include "shard/Shard0032.h"

extern "C" {

extern StateAtF4 *g_campCecEdit;

/* True when the global state is in mode 1 and phase 1 or -1. */
u32 stateAtF4IsActive(void)
{
    if (g_campCecEdit == NULL) {
        return 0;
    }
    if (g_campCecEdit->mode == 1 && (g_campCecEdit->phase == 1 || g_campCecEdit->phase == -1)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
