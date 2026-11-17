#include "map/LmapGlobals.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

void asdMdlManagerMarkDestroy(AsdMdlObject *model);
void FUN_00335144(LmapScript *script);


void lmapSceneUpdateHandles(void)
{
    FUN_00335144(g_lmapScene->playerModel);
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
