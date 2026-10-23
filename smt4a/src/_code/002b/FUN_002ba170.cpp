/* NON_MATCHING: nearest-index/constant register allocation and selected-record base addressing differ. */
#include "gfx/EngineRecordList.h"
#include "map/lmapMain.h"

extern "C" {
extern EngineRecordList* g_engineRecordList;
extern LmapScene* g_lmapScene;
f32 distSpatial(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2);

void FUN_002ba170(void)
{
    if (g_engineRecordList->capacity != 101) {
        return;
    }
    for (s32 index = 0; index < 32; ++index) {
        EngineEffectRecord* record = &g_engineRecordList->records[index];
        if (record->active && record->proximity.eligible) {
            record->proximity.distance = distSpatial(g_lmapScene->transform.position[0],
                g_lmapScene->transform.position[1], g_lmapScene->transform.position[2],
                record->position[0], record->position[1], record->position[2]);
            record->proximity.selectedOrder = 999;
        }
    }
    EngineRecordList* work = g_engineRecordList;
    for (s32 order = 0; order < 3; ++order) {
        s32 nearest = -1;
        f32 nearestDistance = 90000.0f;
        for (s32 index = 0; index < 32; ++index) {
            EngineEffectRecord* record = &work->records[index];
            if (record->active && record->state && record->proximity.eligible &&
                record->proximity.selectedOrder == 999 && record->proximity.distance < nearestDistance) {
                nearest = index;
                nearestDistance = record->proximity.distance;
            }
        }
        EngineEffectRecord* record = &work->records[nearest];
        record->proximity.selectedOrder = order;
        record->proximity.order = order;
        work->nearest[order].spatial.position = record->spatial.position;
        work->nearest[order].spatial.fourth = record->spatial.fourth;
        work->nearest[order].variant = record->variant;
        work->nearest[order].visible = 1;
    }
    for (s32 index = 0; index < 32; ++index) {
        EngineEffectRecord* record = &work->records[index];
        if (record->active && record->state && record->proximity.eligible &&
            record->proximity.selectedOrder == 999 && record->proximity.order != -1) {
            record->proximity.order = -1;
        }
    }
}
}
