#include "shard/Shard004A.h"

extern "C" {

extern u8 *g_lmapScene;
extern u8 *g_naviMain;
extern u8 g_gameState;

/* The active map scene object: the navi scene when the flag at g_gameState+0x460 is set, else the field scene. */
u8 *lmapSceneGetObj(void)
{
    u8 **scene;

    if (*((s8 *)&g_gameState + 0x460) != 0) {
        scene = &g_naviMain;
    } else {
        scene = &g_lmapScene;
    }
    if (*((s8 *)&g_gameState + 0x460) != 0) {
        return *scene + 0x4C;
    }
    return *scene + 0x1C;
}

} /* extern "C" */
