#include "map/lmapMain.h"
#include "common.h"
extern "C" {

extern LmapSceneA *g_lmapScene;
void FUN_003e5858(void *object);
s32 fourPtrsAllNull(void *object);
/* Updates the scene object, then reports whether its resources are gone. */
s32 FUN_002b92b8(void) {
    FUN_003e5858(g_lmapScene->script);
    return fourPtrsAllNull(g_lmapScene->script);
}
}
