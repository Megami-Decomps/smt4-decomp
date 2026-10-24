#include "shard/HealingSceneWork.h"

extern "C" {
extern void *g_handleRegistry;
void asdMemFree(void *block);
void scrScriptProcessDestroy(ScriptProcess *script);
void placeWinRelease(void);
void asdCameraInitAreas(void);
void ptrListRemoveClearOwner(void *registry, void *object);
void resourceOwnerReleaseAndReset(void *registry);
void mapReleaseTableTexture(void);
void FUN_002c2358(void);
void campCommonBgRelease(void);
void campButtonHelpRelease(void);
void gfxObjectDestroy(void *object);

/* Tears the Spring of Healing scene down: its models, backdrop, script and heaps. */
void sceneHealingRelease(HealingSceneWork *work)
{
    FUN_002c2358();
    asdCameraInitAreas();
    mapReleaseTableTexture();
    ptrListRemoveClearOwner(g_handleRegistry, work->primary->object);
    if (work->primary != NULL) {
        delete work->primary;
        work->primary = NULL;
    }
    ptrListRemoveClearOwner(g_handleRegistry, work->secondary->object);
    if (work->secondary != NULL) {
        delete work->secondary;
        work->secondary = NULL;
    }
    for (s32 i = 0; i < 3; ++i) {
        ptrListRemoveClearOwner(g_handleRegistry, work->models[i]->object);
        if (work->models[i] != NULL) {
            delete work->models[i];
            work->models[i] = NULL;
        }
    }
    resourceOwnerReleaseAndReset(g_handleRegistry);
    if (work->backdrop != NULL) {
        gfxObjectDestroy(work->backdrop);
        work->backdrop = NULL;
    }
    campCommonBgRelease();
    campButtonHelpRelease();
    placeWinRelease();
    if (work->script != NULL) {
        scrScriptProcessDestroy(work->script);
        work->script = NULL;
    }
    if (work->heapA != NULL) {
        asdMemFree(work->heapA);
        work->heapA = NULL;
    }
    if (work->heapB != NULL) {
        asdMemFree(work->heapB);
        work->heapB = NULL;
    }
}

} /* extern "C" */
