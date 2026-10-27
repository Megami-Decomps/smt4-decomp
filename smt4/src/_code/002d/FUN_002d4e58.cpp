/* NON_MATCHING: snapshot copy loop gives the retail row count (39/39); retail copies y through a VFP register (vldr/vstr s1) and interleaves A and B per component, the build copies it through an integer register. */
#include "map/SceneSpawn.h"
#include "map/lmapMain.h"
#include "gamedata/DataTableAccess_AocTable23.h"

extern "C" {
extern LmapScene *g_lmapScene;
extern SceneViewHeading *DAT_004474f4;
u32 FUN_0027d7b0(void);

/* Restores the spawn position, both position snapshots, and the scene and view headings. */
void FUN_002d4e58(void)
{
    SceneSpawnRecord *record = reinterpret_cast<SceneSpawnRecord *>(dataTableGetRecord23(FUN_0027d7b0()));
    LmapScene *scene = g_lmapScene;
    scene->transform.position[0] = static_cast<f32>(record->x);
    scene->transform.position[1] = static_cast<f32>(record->y);
    scene->transform.position[2] = static_cast<f32>(record->z);
    for (s32 i = 0; i < 3; i++) {
        scene->transform.positionSnapshotA[i] = scene->transform.position[i];
        scene->transform.positionSnapshotB[i] = scene->transform.position[i];
    }
    scene->transform.headingDegrees = static_cast<f32>(record->heading);
    scene->transform.headingCopy = scene->transform.headingDegrees;
    DAT_004474f4->heading = static_cast<f32>(record->heading);
}
}
