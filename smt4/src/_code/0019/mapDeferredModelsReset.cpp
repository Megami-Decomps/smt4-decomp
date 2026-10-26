#include "map/DeferredModels.h"

extern "C" {
extern DeferredModelWork* g_deferredMapModels;
void FUN_0019dc90(void);

// Reset deferred model records and the associated timed vector queues.
void mapDeferredModelsReset(void)
{
    DeferredModelWork* work = g_deferredMapModels;
    work->current = 0;
    work->state = 0;
    work->count = 0;
    work->pending = 0;
    work->updating = 0;
    work->pendingCount = 0;
    for (s32 i = 0; i < 64; ++i) {
        work->entries[i].active = 0;
        work->entries[i].ready = 0;
        work->entries[i].visible = 0;
        work->entries[i].modelId = -1;
        work->entries[i].flags = 0;
        work->entries[i].speed = 4.0f;
        work->entries[i].offset = -9.0f;
        work->entries[i].x = 0.0f;
        work->entries[i].y = 0.0f;
        work->entries[i].angle = 90.0f;
        work->entries[i].handle = 0;
        work->entries[i].z = 0.0f;
        work->entries[i].callback = 0;
        work->entries[i].id = -1;
        work->entries[i].userData = 0;
        work->entries[i].state = 0;
        work->entries[i].timer = 0;
        work->entries[i].resource = 0;
    }
    FUN_0019dc90();
}
}
