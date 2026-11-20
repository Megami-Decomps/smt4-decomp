#include "gamedata/MapSaveBlockA.h"
#include "map/LmapGlobals.h"

extern "C" {

int eventIsSkipping(void);
int moriModelUnitStartMaterialAnimation(u32 id, int a, int b, f32 scale);

/* Starts the block's effect (scale 85.0) when its state is set and eventIsSkipping accepts; 0 when that check fails. */
u32 lmapStartOptionalEffect(void)
{
    gameFlagsGetBlock();
    if (g_lmapScene->unk228 != 0) {
        if (eventIsSkipping() == 0) {
            return 0;
        }
        if (g_lmapScene->models[7] != NULL) {
            moriModelUnitStartMaterialAnimation(g_lmapScene->models[7]->controller, 0, 2, 85.0f);
        }
    }
    return 1;
}

} /* extern "C" */
