/* NON_MATCHING: Position snapshots reload their first two components through integer registers instead of retaining the retail mixed integer/VFP pair. */
#include "map/SceneSpawn.h"
#include "map/LmapViewGlobals.h"

extern "C" {
u32 table23FindRecordByKey(void);
SceneSpawnRecord *dataTableGetRecord23(u32 index);

/* Restores the spawn position, both position snapshots, and the scene and view headings. */
void FUN_0033f188(void)
{
    SceneSpawnRecord *record = dataTableGetRecord23(table23FindRecordByKey());
    LmapSceneA *scene = g_lmapScene;
    scene->pose.position.x = static_cast<f32>(record->x);
    scene->pose.position.y = static_cast<f32>(record->y);
    scene->pose.position.z = static_cast<f32>(record->z);
    scene->pose.targetPosition.x = scene->pose.position.x;
    scene->pose.targetPosition.y = scene->pose.position.y;
    scene->pose.targetPosition.z = scene->pose.position.z;
    scene->pose.previousPosition.x = scene->pose.position.x;
    scene->pose.previousPosition.y = scene->pose.position.y;
    scene->pose.previousPosition.z = scene->pose.position.z;
    scene->pose.heading = static_cast<f32>(record->heading);
    scene->pose.targetHeading = scene->pose.heading;
    g_lmapView->heading = static_cast<f32>(record->heading);
}
}
