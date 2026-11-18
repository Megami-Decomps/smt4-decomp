#include "map/LmapGlobals.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "classes/Obj4206e8.h"

extern "C" {

void mdlPartsRelease(void *model);


/* Shuts the scene's script down and releases its handles. */
void lmapSceneShutdownScript(void)
{
    mdlPartsRelease(g_lmapScene->playerModel);
    delete g_lmapScene->playerModel;
    g_lmapScene->playerModel = NULL;
    if (g_lmapScene->stageModel != NULL) {
        asdMdlManagerDestroy(g_lmapScene->stageModel);
        g_lmapScene->stageModel = NULL;
    }
    if (g_lmapScene->models[0] != NULL) {
        asdMdlManagerDestroy(g_lmapScene->models[0]);
        g_lmapScene->models[0] = NULL;
    }
    if (g_lmapScene->models[1] != NULL) {
        asdMdlManagerDestroy(g_lmapScene->models[1]);
        g_lmapScene->models[1] = NULL;
    }
    if (g_lmapScene->models[2] != NULL) {
        asdMdlManagerDestroy(g_lmapScene->models[2]);
        g_lmapScene->models[2] = NULL;
    }
}

} /* extern "C" */
