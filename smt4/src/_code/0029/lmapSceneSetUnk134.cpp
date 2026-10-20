#include "map/lmapMain.h"

extern "C" {

extern LmapScene *g_lmapScene;

void lmapSceneSetUnk134(u8 value)
{
    g_lmapScene->unk134 = value;
}

} /* extern "C" */
