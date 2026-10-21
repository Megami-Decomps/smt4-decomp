#include "common.h"

extern "C" {

struct SceneObject;
struct LocalMapSceneWork {
    /* 0x000 */ u8 unk000[0x194];
    /* 0x194 */ SceneObject *object;
};
extern LocalMapSceneWork *g_lmapScene;
void FUN_00297684(SceneObject *object);
void FUN_00293edc(SceneObject *object);

/* Perform both cleanup stages on the local map scene's object. */
void lmapSceneCleanupObject(void)
{
    FUN_00297684(g_lmapScene->object);
    FUN_00293edc(g_lmapScene->object);
}

}
