/* NON_MATCHING: scene actor teardown register allocation has not matched retail. */
#include "map/lmapMain.h"
#include "util/PtrListRemoveClearOwner.h"

namespace {
/* The full cleanup state extends past the shared LmapSceneA prefix. */
struct SceneCleanupView {
    u8 unk000[0x170];
    LmapActorA *actors[8];
    u8 unk190[0x18];
    LmapScript *script;
    u8 unk1AC[0xDC];
    s32 mode;
    u32 extraController;
};
}
extern "C" {
extern SceneCleanupView *g_lmapScene;
extern void *g_handleRegistry;
void FUN_003e55f4(LmapScript *script);
void lmapClearExtraFlag(void);
void FUN_003d2158(u32 controller, s32 mode);
}

static __inline void releaseSceneController(LmapActorA *actor)
{
    if (actor != NULL && actor->controller != 0)
        ptrListRemoveClearOwner(g_handleRegistry, reinterpret_cast<void *>(actor->controller));
}

/* Release the script's controllers and the scene's registered actor controllers. */
extern "C" void FUN_002daf38(void)
{
    FUN_003e55f4(g_lmapScene->script);
    if (g_lmapScene->mode == 3) {
        lmapClearExtraFlag();
        if (g_lmapScene->extraController != 0)
            FUN_003d2158(g_lmapScene->extraController, 0);
    }
    releaseSceneController(g_lmapScene->actors[1]);
    releaseSceneController(g_lmapScene->actors[2]);
    releaseSceneController(g_lmapScene->actors[6]);
    releaseSceneController(g_lmapScene->actors[3]);
    releaseSceneController(g_lmapScene->actors[0]);
    releaseSceneController(g_lmapScene->actors[4]);
    releaseSceneController(g_lmapScene->actors[5]);
    releaseSceneController(g_lmapScene->actors[7]);
}
