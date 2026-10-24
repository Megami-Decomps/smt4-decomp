#include "map/lmapMain.h"
#include "common.h"

extern "C" {


extern LmapSceneA *g_lmapScene;
s32 scrGetArg(u32 index);
void mapSetSceneState(s32 event);

s32 scrCommTriggerMapEvent(void)
{
    s32 event;
    if (scrGetArg(0) == 0) {
        event = 29;
    } else {
        g_lmapScene->state = 0;
        g_lmapScene->time = 0.0f;
        event = 44;
    }
    mapSetSceneState(event);
    return 1;
}

} /* extern "C" */
