/* NON_MATCHING: active-byte clear-loop counters and global/zero registers differ; grouped special-state view now reproduces retail tail-base writeback. */
/* Releases all map-gimmick scene objects and their registered controller handles. */
#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"
#include "Model/MoriModelManager.h"

extern "C" {

void FUN_00294854(void)
{
    for (s32 i = MAP_GIMIC_ENTRIES - 1; i >= 0; --i) {
        MoriModelContent *object = g_mapGimic->entries[i].obj;
        if (object != NULL) {
            delete object;
            g_mapGimic->entries[i].obj = NULL;
        }
    }
    for (s32 i = 0; i < MAP_GIMIC_ENTRIES; ++i) {
        g_mapGimic->entries[i].active = 0;
    }
    MapGimicStageActorA *special = &g_mapGimic->stageActor;
    if (special->active) {
        ptrListRemoveClearOwner(g_handleRegistry, special->obj->body);
        MoriModelContent *object = special->obj;
        if (object != NULL) {
            delete object;
        }
        special->obj = NULL;
        special->active = 0;
    }
    special->motion = 0;
}
}
