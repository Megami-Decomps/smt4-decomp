#include "shard/W5_W5Match2_MapCallbacks.h"
#include "classes/AocMenu.h"

extern "C" {

extern ResourceCallbackWork *g_sceneResourceWork;
void aocMenuDrawScreen(AocMenu *resource);

/* Update the optional resource when its owner and resource both exist. */
s32 sceneUpdateOptionalResource(void)
{
    if (g_sceneResourceWork != NULL && g_sceneResourceWork->resource != NULL) {
        aocMenuDrawScreen(static_cast<AocMenu *>(g_sceneResourceWork->resource));
    }
    return 0;
}

}
