#include "shard/Shard0031.h"

extern "C" {

extern void statusCameraDestroy(void);
extern s32 lmapSceneGetScript(void);
extern void FUN_003857b4(u8 value);
extern void FUN_001aeafc(u32 handle);
extern u32 g_handleRegistry;

void statusSceneDestroy(StatusScene *scene)
{
    statusCameraDestroy();
    if (lmapSceneGetScript() != 0) {
        FUN_003857b4(1);
    }
    if (scene->unk2C != 0) {
        FUN_001aeafc(g_handleRegistry);
    }
    if (scene->object != NULL) {
        scene->object->vtbl->release(scene->object);
    }
}

} /* extern "C" */
