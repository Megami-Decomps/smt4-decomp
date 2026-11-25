#include "map/LmapGlobals.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

void lmapSceneDeactivateHandles(Obj4206e8 *holder);


void lmapSceneUpdateHandles(void)
{
    lmapSceneDeactivateHandles(g_lmapScene->playerModel);
    if (g_lmapScene->stageModel != NULL) {
        asdMdlManagerMarkDestroy(g_lmapScene->stageModel);
    }
    if (g_lmapScene->models[0] != NULL) {
        asdMdlManagerMarkDestroy(g_lmapScene->models[0]);
    }
    if (g_lmapScene->models[1] != NULL) {
        asdMdlManagerMarkDestroy(g_lmapScene->models[1]);
    }
    if (g_lmapScene->models[2] != NULL) {
        asdMdlManagerMarkDestroy(g_lmapScene->models[2]);
    }
}

} /* extern "C" */
