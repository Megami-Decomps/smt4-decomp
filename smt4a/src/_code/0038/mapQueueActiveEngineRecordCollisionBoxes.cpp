#include "gfx/EngineRecordList.h"
#include "map/MapCollisionBox.h"

extern "C" {
extern EngineRecordList *g_engineRecordList;

/* Queues collision boxes for active engine records of the supported kinds. */
void mapQueueActiveEngineRecordCollisionBoxes(void)
{
    for (s32 i = 0; i < 32; ++i) {
        EngineEffectRecord *record = &g_engineRecordList->records[i];
        if (record->active) {
            s16 kind = record->duration;
            if (kind == 3 || kind == 4 ||
                kind == 5 || kind == 8 ||
                kind == 9 || kind == 10) {
                mapCollisionQueueBoxWalls(record->spatial.position, record->spatial.fourth, 80.0f, 0, 70.0f, 36.0f);
            } else if (kind == 7 || kind == 13 ||
                kind == 15 || kind == 16) {
                mapCollisionQueueBoxWalls(record->spatial.position, record->spatial.fourth, 60.0f, 0, 70.0f, 36.0f);
            }
        }
    }
}

} /* extern "C" */
