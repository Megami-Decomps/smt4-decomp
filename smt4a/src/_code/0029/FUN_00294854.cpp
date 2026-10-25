/* NON_MATCHING: active-byte clear-loop counters and global/zero registers differ; grouped special-state view now reproduces retail tail-base writeback. */
/* Releases all map-gimmick scene objects and their registered controller handles. */
#include "map/mapGimic.h"

extern "C" {
void ptrListRemoveClearOwner(void *registry, void *controller);
extern void *g_handleRegistry;
extern MapGimic *g_mapGimic;

void FUN_00294854(void)
{
    struct Releasable;
    struct ReleaseMethods {
        void *unk00;
        void (*release)(Releasable *object);
    };
    struct Releasable {
        ReleaseMethods *methods;
    };
    struct MapGimicSpecialState {
        s8 active;
        u8 unk01;
        u16 request;
        u8 unk04[0x10];
        MapGimicObj *object;
    };
    struct MapGimicCleanupView {
        MapGimic base;
        MapGimicSpecialState special;
    };
    typedef char MapGimicCleanupLayoutCheck[
        offsetof(MapGimicCleanupView, special.active) == 0x9B4 &&
        offsetof(MapGimicCleanupView, special.request) == 0x9B6 &&
        offsetof(MapGimicCleanupView, special.object) == 0x9C8 &&
        sizeof(MapGimicCleanupView) == 0x9CC ? 1 : -1];
    for (s32 i = MAP_GIMIC_ENTRIES - 1; i >= 0; --i) {
        Releasable *object = (Releasable *)g_mapGimic->entries[i].obj;
        if (object != NULL) {
            object->methods->release(object);
            g_mapGimic->entries[i].obj = NULL;
        }
    }
    for (s32 i = 0; i < MAP_GIMIC_ENTRIES; ++i) {
        g_mapGimic->entries[i].active = 0;
    }
    MapGimicSpecialState *special = &((MapGimicCleanupView *)g_mapGimic)->special;
    if (special->active) {
        ptrListRemoveClearOwner(g_handleRegistry, special->object->controller);
        Releasable *object = (Releasable *)special->object;
        if (object != NULL) {
            object->methods->release(object);
        }
        special->object = NULL;
        special->active = 0;
    }
    special->request = 0;
}
}
