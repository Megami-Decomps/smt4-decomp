#include "map/LmapGlobals.h"
#include "common.h"
extern "C" {

void FUN_003e5858(void *object);
s32 fourPtrsAllNull(void *object);
/* Updates the scene object, then reports whether its resources are gone. */
s32 FUN_002b92b8(void) {
    FUN_003e5858(g_lmapScene->playerModel);
    return fourPtrsAllNull(g_lmapScene->playerModel);
}
}
