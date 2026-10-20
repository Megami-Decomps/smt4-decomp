#include "shard/Shard0032.h"

extern "C" {

extern StateAtF4 *DAT_0057f118;

/* True when the global state is in mode 1 and phase 1 or -1. */
u32 stateAtF4IsActive(void)
{
    if (DAT_0057f118 == NULL) {
        return 0;
    }
    if (DAT_0057f118->mode == 1 && (DAT_0057f118->phase == 1 || DAT_0057f118->phase == -1)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
