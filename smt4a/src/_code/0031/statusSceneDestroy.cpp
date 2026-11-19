#include "shard/Shard0031.h"
#include "Model/MoriModelManager.h"
#include "map/MapSceneAccess.h"

extern "C" {

extern void statusCameraDestroy(void);
extern s32 lmapSceneGetScript(void);

void statusSceneDestroy(StatusScene *scene)
{
    statusCameraDestroy();
    if (lmapSceneGetScript() != 0) {
        lmapSceneSetUnk134(1);
    }
    if (scene->unk2C != 0) {
        resourceOwnerReleaseAndReset(g_handleRegistry);
    }
    if (scene->object != NULL) {
        scene->object->vtbl->release(scene->object);
    }
}

} /* extern "C" */
