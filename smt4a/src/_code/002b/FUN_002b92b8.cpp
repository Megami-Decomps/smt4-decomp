#include "common.h"
extern "C" {
struct SceneWork { u8 unk00[0x1A8]; void *object; };
extern SceneWork *g_lmapScene;
void FUN_003e5858(void *object);
s32 fourPtrsAllNull(void *object);
/* Updates the scene object, then reports whether its resources are gone. */
s32 FUN_002b92b8(void) {
    FUN_003e5858(g_lmapScene->object);
    return fourPtrsAllNull(g_lmapScene->object);
}
}
