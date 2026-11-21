/* NON_MATCHING: the first loop's list/index registers are swapped (r0/r1) and distSpatial's two vectors load in the other order; the nearest-slot copy computes the slot and record addresses in the other registers. */
#include "gfx/EngineRecordList.h"
#include "map/LmapGlobals.h"

extern "C" {
extern EngineRecordList* g_engineRecordList;
f32 distSpatial(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2);

void engineRecordsRankNearest(void)
{
    if (g_engineRecordList->capacity != 101) {
        return;
    }
    for (s32 index = 0; index < 32; ++index) {
        EngineEffectRecord* record = &g_engineRecordList->records[index];
        if (record->active && record->proximity.eligible) {
            record->proximity.distance = distSpatial(g_lmapScene->pose.position.x,
                g_lmapScene->pose.position.y, g_lmapScene->pose.position.z,
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
        EngineEffectRecord* slot = &work->nearest[order];
        record->proximity.selectedOrder = order;
        record->proximity.order = order;
        slot->spatial.position = record->spatial.position;
        slot->spatial.fourth = record->spatial.fourth;
        slot->variant = record->variant;
        slot->visible = 1;
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
