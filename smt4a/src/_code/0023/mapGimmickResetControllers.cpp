#include "map/MapGimicGlobal.h"
#include <string.h>

extern "C" {
void wordTripleClear(u32 *words);

// Reset all map gimmick controllers, keeping padding and untouched resource storage intact.
void mapGimmickResetControllers(void)
{
    MapGimicA *work = g_mapGimic;
    /* The ten flag bytes and their padding are cleared as three words. */
    u32 *flags = reinterpret_cast<u32 *>(work->flags);
    work->mode = 0;
    work->busy = 0;
    work->area = 0;
    work->subArea = 0;
    work->step = 0;
    work->index = 0;
    work->loaded = 0;
    work->clones[0].available = 0;
    work->clones[1].available = 0;
    work->clones[2].available = 0;
    work->clones[3].available = 0;
    wordTripleClear(flags);
    work = g_mapGimic;
    memset(work->handles, 0, sizeof(work->handles));
    work->pending = 0;
    work->scriptFlags[0] = 0;
    work->scriptFlags[1] = 0;
    work->scriptFlags[2] = 0;
    work->scriptFlags[3] = 0;
    work->scriptFlags[4] = 0;
    work->effectStates[0] = 0;
    work->effectStates[1] = 0;
    work->effectStates[2] = 0;
    work->status = 0;
    for (s32 index = 0; index < MAP_GIMIC_ENTRIES; ++index) {
        MapGimicEntryA *entry = &g_mapGimic->entries[index];
        entry->active = 0;
        entry->requested = 0;
        entry->position[0] = 0.0f;
        entry->position[1] = 0.0f;
        entry->position[2] = 0.0f;
        entry->heading = 90.0f;
        entry->motion = 0;
        entry->kind = 0;
        entry->obj = NULL;
        entry->gimicId = 0;
        entry->requiredFlag = 0;
        entry->forbiddenFlag = 0;
        entry->transform[0] = 0.0f;
        entry->transform[1] = 0.0f;
        entry->transform[2] = 0.0f;
        entry->transform[3] = 0.0f;
        entry->state = 0;
    }
    for (s32 index = 0; index < MAP_GIMIC_SLOTS; ++index) {
        MapGimicA *gimmicks = g_mapGimic;
        MapGimicSlotA *slot = &gimmicks->slots[index];
        slot->active = 0;
        slot->animationId = 0;
        slot->id = 0;
        slot->obj = NULL;
        slot->animationValue = 0;
        slot->requested = 0;
        slot->delay = 0;
        slot->unk14[0] = 0;
    }
    MapGimicStageActorA *actor = &g_mapGimic->stageActor;
    actor->active = 0;
    actor->motion = 0;
    actor->position.x = 0.0f;
    actor->position.y = 0.0f;
    actor->position.z = 0.0f;
    actor->heading = 0.0f;
    actor->obj = NULL;
    actor->state = 0;
    actor->pending = 0;
    actor->delay = 0;
    actor->requested = 0;
    actor->flag = 0;
    actor->index = 0;
}
}
