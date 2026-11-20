/* NON_MATCHING: scene actor teardown register allocation has not matched retail. */
#include "map/lmapMain.h"
#include "map/LmapGlobals.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"

namespace {
}
extern "C" {
extern void *g_handleRegistry;
void FUN_003e55f4(LmapScript *script);
void lmapClearExtraFlag(void);
void soundApplyValueOrStop(u32 controller, s32 mode);
}

static __inline void releaseSceneController(LmapActorA *actor)
{
    if (actor != NULL && actor->controller != 0)
        ptrListRemoveClearOwner(g_handleRegistry, reinterpret_cast<void *>(actor->controller));
}

/* Release the script's controllers and the scene's registered model controllers; stop the idle voice. */
extern "C" void FUN_002daf38(void)
{
    FUN_003e55f4(g_lmapScene->playerModel);
    if (g_lmapScene->idleVoicePhase == 3) {
        lmapClearExtraFlag();
        if (g_lmapScene->idleVoice != 0)
            soundApplyValueOrStop(g_lmapScene->idleVoice, 0);
    }
    releaseSceneController(g_lmapScene->models[1]);
    releaseSceneController(g_lmapScene->models[2]);
    releaseSceneController(g_lmapScene->models[6]);
    releaseSceneController(g_lmapScene->models[3]);
    releaseSceneController(g_lmapScene->models[0]);
    releaseSceneController(g_lmapScene->models[4]);
    releaseSceneController(g_lmapScene->models[5]);
    releaseSceneController(g_lmapScene->models[7]);
}
