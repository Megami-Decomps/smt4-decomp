/* NON_MATCHING: named record pointer restores settling-loop shape and address writeback; initial global/constant loads are scheduled differently. */
#include "map/mapIf.h"
#include "map/lmapMain.h"

extern "C" {
extern MapIfGlobals g_mapIf;
void FUN_001e5e78(s32);
void FUN_00280ccc(f32, f32, f32, f32, f32, f32, f32);
extern LmapScene *g_lmapScene;

// Let active interface records settle, then shorten their remaining timers.
void FUN_002646d4(s32 updateScene)
{
    MapIfState *state = g_mapIf.state;
    for (s32 index = 0; index < 128; ++index) {
        MapIfRecord *record = &state->records[index];
        if (record->active)
            record->transition.restart = 1;
    }
    for (s32 pass = 0; pass < 3; ++pass) {
        FUN_001e5e78(1);
        if (updateScene)
            FUN_00280ccc(g_lmapScene->transform.positionSnapshotA[0],
                        g_lmapScene->transform.positionSnapshotA[1],
                        g_lmapScene->transform.positionSnapshotA[2],
                        g_lmapScene->transform.headingDegrees,
                        g_lmapScene->transform.positionSnapshotB[0],
                        g_lmapScene->transform.positionSnapshotB[1],
                        g_lmapScene->transform.positionSnapshotB[2]);
    }
    for (s32 index = 0; index < 128; ++index) {
        MapIfRecord *record = &state->records[index];
        if (record->active && record->update.timer > 0)
            record->update.timer = 16;
    }
}
}
