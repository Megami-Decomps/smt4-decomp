#include "shard/Shard0038.h"

extern "C" {

extern void FUN_00312d6c(void);
extern void lmapMainCallIfActive(void);

/* Script command: runs FUN_00312d6c and lmapMainCallIfActive. */
u32 scrCommLmapRefresh(void)
{
    FUN_00312d6c();
    lmapMainCallIfActive();
    return 1;
}

} /* extern "C" */
