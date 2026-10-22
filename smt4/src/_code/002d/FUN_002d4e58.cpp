/* NON_MATCHING: Position snapshots reload their first two components through integer registers instead of retaining the retail mixed integer/VFP pair. */
#include "map/SceneSpawn.h"
#include "map/lmapMain.h"

extern "C" {
extern LmapScene *g_lmapScene;
extern SceneViewHeading *DAT_004474f4;
u32 FUN_0027d7b0(void);
SceneSpawnRecord *dataTableGetRecord23(u32 index);

/* Restores the spawn position, both position snapshots, and the scene and view headings. */
void FUN_002d4e58(void)
{
    SceneSpawnRecord *record = dataTableGetRecord23(FUN_0027d7b0());
    LmapScene *scene = g_lmapScene;
    scene->transform.position[0] = static_cast<f32>(record->x);
    scene->transform.position[1] = static_cast<f32>(record->y);
    scene->transform.position[2] = static_cast<f32>(record->z);
    scene->transform.positionSnapshotA[0] = scene->transform.position[0];
    scene->transform.positionSnapshotA[1] = scene->transform.position[1];
    scene->transform.positionSnapshotA[2] = scene->transform.position[2];
    scene->transform.positionSnapshotB[0] = scene->transform.position[0];
    scene->transform.positionSnapshotB[1] = scene->transform.position[1];
    scene->transform.positionSnapshotB[2] = scene->transform.position[2];
    scene->transform.headingDegrees = static_cast<f32>(record->heading);
    scene->transform.headingCopy = scene->transform.headingDegrees;
    DAT_004474f4->heading = static_cast<f32>(record->heading);
}
}
