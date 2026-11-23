#include "map/DeferredModels.h"

extern "C" {
extern DeferredModelWork* g_deferredMapModels;
void mapTimerBanksReset(void);

// Reset deferred model records and the associated timed vector queues.
void mapDeferredModelsReset(void)
{
    DeferredModelWork* work = g_deferredMapModels;
    work->count = 0;
    work->loadState = 0;
    work->tableIndex = 0;
    work->pending = 0;
    work->updating = 0;
    work->pendingCount = 0;
    for (s32 i = 0; i < 64; ++i) {
        work->entries[i].active = 0;
        work->entries[i].ready = 0;
        work->entries[i].visible = 0;
        work->entries[i].tableIndex = -1;
        work->entries[i].pathIndex = 0;
        work->entries[i].pathDuration = 4.0f;
        work->entries[i].position.x = -9.0f;
        work->entries[i].position.y = 0.0f;
        work->entries[i].position.z = 0.0f;
        work->entries[i].angle = 90.0f;
        work->entries[i].handle = 0;
        work->entries[i].z = 0.0f;
        work->entries[i].pathTimer = NULL;
        work->entries[i].modelId = -1;
        work->entries[i].model = NULL;
        work->entries[i].flagFirst = 0;
        work->entries[i].flagSecond = 0;
        work->entries[i].resource = 0;
    }
    mapTimerBanksReset();
}
}
