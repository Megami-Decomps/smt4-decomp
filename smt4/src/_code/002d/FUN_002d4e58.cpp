/* NON_MATCHING: snapshot copy loop gives the retail row count (39/39); retail copies y through a VFP register (vldr/vstr s1) and interleaves A and B per component, the build copies it through an integer register. */
#include "map/SceneSpawn.h"
#include "map/LmapGlobals.h"
#include "gamedata/DataTableAccess_AocTable23.h"
#include "map/LmapViewGlobals.h"

extern "C" {
u32 table23FindRecordByKey(void);

/* Restores the spawn position, both position snapshots, and the scene and view headings. */
void FUN_002d4e58(void)
{
    SceneSpawnRecord *record = reinterpret_cast<SceneSpawnRecord *>(dataTableGetRecord23(table23FindRecordByKey()));
    LmapScene *scene = g_lmapScene;
    scene->pose.position.x = static_cast<f32>(record->x);
    scene->pose.position.y = static_cast<f32>(record->y);
    scene->pose.position.z = static_cast<f32>(record->z);
    scene->pose.targetPosition.x = scene->pose.position.x;
    scene->pose.previousPosition.x = scene->pose.position.x;
    scene->pose.targetPosition.y = scene->pose.position.y;
    scene->pose.previousPosition.y = scene->pose.position.y;
    scene->pose.targetPosition.z = scene->pose.position.z;
    scene->pose.previousPosition.z = scene->pose.position.z;
    scene->pose.heading = static_cast<f32>(record->heading);
    scene->pose.targetHeading = scene->pose.heading;
    g_mapCamera->heading = static_cast<f32>(record->heading);
}
}
