#include "common.h"
#include "map/LmapGlobals.h"

extern "C" {

extern void moriModelUnitStartMaterialAnimation(u32 handle, u32 id, s32 mode, f32 delay);

/* Starts `id` on the lmap scene's marker (no delay), if it has one. */
void lmapSceneMarkerStart(u32 id)
{
    if (g_lmapScene->models[4] != NULL) {
        moriModelUnitStartMaterialAnimation(g_lmapScene->models[4]->controller, id, 2, 0.0f);
    }
}

} /* extern "C" */
