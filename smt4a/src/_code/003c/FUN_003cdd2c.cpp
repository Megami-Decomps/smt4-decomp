#include "shard/Shard003C.h"

extern "C" {

extern void lmapSetFollowCameraPose(void);

/* Script command: runs lmapSetFollowCameraPose. */
u32 FUN_003cdd2c(void)
{
    lmapSetFollowCameraPose();
    return 1;
}

} /* extern "C" */
