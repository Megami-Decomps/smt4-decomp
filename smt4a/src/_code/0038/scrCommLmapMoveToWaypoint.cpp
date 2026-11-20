#include "shard/Shard0038.h"

extern "C" {

void lmapSceneMoveToWaypoint(s32 startGroup, u32 startPoint, s32 targetGroup, u32 targetPoint);
extern u32 scrGetArg(s32 index);

/* Script command: moves the map scene from waypoint (argument 0, argument 1), or from where it is
 * when the group is 0, toward waypoint (argument 2, argument 3). */
u32 scrCommLmapMoveToWaypoint(void)
{
    u32 targetPoint = scrGetArg(3);
    s32 targetGroup = scrGetArg(2);
    u32 startPoint = scrGetArg(1);
    s32 startGroup = scrGetArg(0);

    lmapSceneMoveToWaypoint(startGroup, startPoint, targetGroup, targetPoint);
    return 1;
}

} /* extern "C" */
