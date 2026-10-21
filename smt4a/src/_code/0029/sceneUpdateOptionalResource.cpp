#include "shard/W5_W5Match2_MapCallbacks.h"

extern "C" {

extern ResourceCallbackWork *g_sceneResourceWork;
void FUN_0047c00c(void *resource);

/* Update the optional resource when its owner and resource both exist. */
s32 sceneUpdateOptionalResource(void)
{
    if (g_sceneResourceWork != NULL && g_sceneResourceWork->resource != NULL) {
        FUN_0047c00c(g_sceneResourceWork->resource);
    }
    return 0;
}

}
