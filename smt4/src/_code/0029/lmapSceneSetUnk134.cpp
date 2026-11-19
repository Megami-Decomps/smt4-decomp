#include "map/LmapGlobals.h"
#include "map/MapSceneAccess_Smt4.h"

extern "C" {


void lmapSceneSetUnk134(u8 value)
{
    g_lmapScene->updateModels = value;
}

} /* extern "C" */
