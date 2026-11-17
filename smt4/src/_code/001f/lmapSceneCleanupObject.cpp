#include "common.h"
#include "map/LmapGlobals.h"

extern "C" {

void FUN_00297684(LmapScript *object);
void objSlotsAllEmpty(LmapScript *object);

/* Perform both cleanup stages on the map scene's player-model holder. */
void lmapSceneCleanupObject(void)
{
    FUN_00297684(g_lmapScene->playerModel);
    objSlotsAllEmpty(g_lmapScene->playerModel);
}

}
