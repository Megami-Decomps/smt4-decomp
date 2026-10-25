#include "shard/W5_W5Match2_MapCallbacks.h"
#include "classes/AocMenu.h"

extern "C" {

extern ResourceCallbackWork *g_sceneResourceWork;
void FUN_00392b2c(AocMenu *resource);

/* Update the optional resource when its owner and resource both exist. */
s32 sceneUpdateOptionalResource(void)
{
    if (g_sceneResourceWork != NULL && g_sceneResourceWork->resource != NULL) {
        FUN_00392b2c(static_cast<AocMenu *>(g_sceneResourceWork->resource));
    }
    return 0;
}

}
