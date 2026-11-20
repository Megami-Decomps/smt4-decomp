#include "common.h"
#include "map/LmapGlobals.h"
#include "map/LmapPlayerModel.h"

extern "C" {

void objSlotsAllEmpty(Obj4206e8 *holder);

/* Perform both cleanup stages on the map scene's player-model holder. */
void lmapSceneCleanupObject(void)
{
    lmapPlayerModelDestroy(g_lmapScene->playerModel);
    objSlotsAllEmpty(g_lmapScene->playerModel);
}

}
