#include "common.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

void FUN_002c3a14(RenderCtx *scene);
void FUN_002e1c04();

/* Refreshes the title scene before advancing its UI callbacks. */
s32 titleSceneUpdateCallback()
{
    FUN_002c3a14(g_titleScene);
    FUN_002e1c04();
    return 0;
}

}
