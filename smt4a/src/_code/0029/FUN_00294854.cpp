/* NON_MATCHING: gimmick active-byte clearing is unrolled differently and the special-actor tail uses a different base register. */
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
    struct MapGimicCleanupView {
        MapGimic base;
        u8 specialActive;
        u8 unk9B5;
        u16 request;
        u8 unk9B8[0x10];
        MapGimicObj *special;
    };
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
    MapGimicCleanupView *work = (MapGimicCleanupView *)g_mapGimic;
    if (work->specialActive) {
        ptrListRemoveClearOwner(g_handleRegistry, work->special->controller);
        Releasable *object = (Releasable *)work->special;
        if (object != NULL) {
            object->methods->release(object);
        }
        work->special = NULL;
        work->specialActive = 0;
    }
    work->request = 0;
}
}
