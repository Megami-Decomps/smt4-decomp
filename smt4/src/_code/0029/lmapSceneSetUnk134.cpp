#include "map/lmapMain.h"
#include "map/MapSceneAccess_Smt4.h"

extern "C" {

extern LmapScene *g_lmapScene;

void lmapSceneSetUnk134(u8 value)
{
    g_lmapScene->unk134 = value;
}

} /* extern "C" */
