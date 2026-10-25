#include "shard/Shard003C.h"

extern "C" {

extern void lmapSetFollowCameraTargetPose(void);

/* Script command: runs lmapSetFollowCameraTargetPose. */
u32 FUN_003cdd1c(void)
{
    lmapSetFollowCameraTargetPose();
    return 1;
}

} /* extern "C" */
