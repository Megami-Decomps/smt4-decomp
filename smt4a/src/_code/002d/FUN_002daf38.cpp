#include "map/lmapMain.h"
#include "map/LmapGlobals.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"

extern "C" {
extern void *g_handleRegistry;
void FUN_003e55f4(LmapScript *script);
void lmapClearExtraFlag(void);
void soundApplyValueOrStop(u32 controller, s32 mode);
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
    if (g_lmapScene->models[1] != NULL && g_lmapScene->models[1]->controller != 0)
        ptrListRemoveClearOwner(g_handleRegistry, (void *)g_lmapScene->models[1]->controller);
    if (g_lmapScene->models[2] != NULL && g_lmapScene->models[2]->controller != 0)
        ptrListRemoveClearOwner(g_handleRegistry, (void *)g_lmapScene->models[2]->controller);
    if (g_lmapScene->models[6] != NULL && g_lmapScene->models[6]->controller != 0)
        ptrListRemoveClearOwner(g_handleRegistry, (void *)g_lmapScene->models[6]->controller);
    if (g_lmapScene->models[3] != NULL && g_lmapScene->models[3]->controller != 0)
        ptrListRemoveClearOwner(g_handleRegistry, (void *)g_lmapScene->models[3]->controller);
    if (g_lmapScene->models[0] != NULL && g_lmapScene->models[0]->controller != 0)
        ptrListRemoveClearOwner(g_handleRegistry, (void *)g_lmapScene->models[0]->controller);
    if (g_lmapScene->models[4] != NULL && g_lmapScene->models[4]->controller != 0)
        ptrListRemoveClearOwner(g_handleRegistry, (void *)g_lmapScene->models[4]->controller);
    if (g_lmapScene->models[5] != NULL && g_lmapScene->models[5]->controller != 0)
        ptrListRemoveClearOwner(g_handleRegistry, (void *)g_lmapScene->models[5]->controller);
    if (g_lmapScene->models[7] != NULL && g_lmapScene->models[7]->controller != 0)
        ptrListRemoveClearOwner(g_handleRegistry, (void *)g_lmapScene->models[7]->controller);
}
