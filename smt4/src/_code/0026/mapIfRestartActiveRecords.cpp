#include "map/MapIfGlobals.h"
#include "map/LmapGlobals.h"

extern "C" {
void FUN_001e5e78(s32);
void FUN_00280ccc(f32, f32, f32, f32, f32, f32, f32);

/* Marks the active interface records for restart, runs three map update passes (refreshing the
 * scene's camera when asked), then restarts the timers of the active records still counting. */
void mapIfRestartActiveRecords(s32 updateScene)
{
    s32 index;
    MapIfState *state = g_mapIf.state;

    for (index = 0; index < 128; ++index) {
        MapIfRecord &record = state->records[index];
        if (record.active != 0) {
            record.restart = 1;
        }
    }

    for (s32 pass = 0; pass < 3; ++pass) {
        FUN_001e5e78(1);
        if (updateScene != 0) {
            LmapScene *scene = g_lmapScene;
            FUN_00280ccc(scene->pose.targetPosition.x, scene->pose.targetPosition.y,
                         scene->pose.targetPosition.z, scene->pose.heading,
                         scene->pose.previousPosition.x, scene->pose.previousPosition.y,
                         scene->pose.previousPosition.z);
        }
    }

    for (index = 0; index < 128; ++index) {
        MapIfRecord &record = state->records[index];
        if (record.active != 0 && record.timer > 0) {
            record.timer = 16;
        }
    }
}
}
