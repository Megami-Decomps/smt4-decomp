#include "shard/Shard0037.h"

extern "C" {

extern void lmapClearExtraFlag(void);

/* Script command: runs lmapClearExtraFlag. */
u32 scrCommLmapClearExtraFlag(void)
{
    lmapClearExtraFlag();
    return 1;
}

} /* extern "C" */
