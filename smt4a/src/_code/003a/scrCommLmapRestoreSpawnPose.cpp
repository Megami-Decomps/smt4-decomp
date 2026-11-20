#include "shard/Shard003A.h"

extern "C" {

void lmapRestoreSpawnPose(s32 map, s32 group, u32 point);
extern u32 scrGetArg(s32 index);

/* Script command: puts the map scene and camera back on waypoint (argument 1, argument 2) of map
 * argument 0. */
u32 scrCommLmapRestoreSpawnPose(void)
{
    u32 point = scrGetArg(2);
    s32 group = scrGetArg(1);
    s32 map = scrGetArg(0);

    lmapRestoreSpawnPose(map, group, point);
    return 1;
}

} /* extern "C" */
