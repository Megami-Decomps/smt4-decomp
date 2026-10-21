#include "shard/Shard0037.h"

extern "C" {

extern void lmapClearExtraFlag(void);

/* Script command: runs lmapClearExtraFlag. */
u32 FUN_0037d6b4(void)
{
    lmapClearExtraFlag();
    return 1;
}

} /* extern "C" */
