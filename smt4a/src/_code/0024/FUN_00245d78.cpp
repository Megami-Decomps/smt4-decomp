#include "map/MapIfGlobals.h"
#include "map/LmapGlobals.h"

extern "C" {

void FUN_0029aa60(s32 mode);
void FUN_00311b74(f32 firstX, f32 firstY, f32 firstZ, f32 scalar,
                  f32 secondX, f32 secondY, f32 secondZ);

/* Marks the active map entries busy, runs three map update passes (refreshing the scene's camera when
 * asked), then restarts the timers of the active entries still counting. */
void FUN_00245d78(s32 updateScene)
{
    s32 index;
    MapIfStateA* map = g_mapIf.state;

    for (index = 0; index < 128; ++index) {
        MapIfRecord& entry = map->records[index];
        if (entry.active != 0) {
            entry.restart = 1;
        }
    }

    for (s32 pass = 0; pass < 3; ++pass) {
        FUN_0029aa60(1);
        if (updateScene != 0) {
            LmapSceneA* scene = g_lmapScene;
            FUN_00311b74(scene->pose.targetPosition.x, scene->pose.targetPosition.y, scene->pose.targetPosition.z,
                         scene->pose.heading,
                         scene->pose.previousPosition.x, scene->pose.previousPosition.y, scene->pose.previousPosition.z);
        }
    }

    for (index = 0; index < 128; ++index) {
        MapIfRecord& entry = map->records[index];
        if (entry.active != 0 && entry.timer > 0) {
            entry.timer = 16;
        }
    }
}
}
