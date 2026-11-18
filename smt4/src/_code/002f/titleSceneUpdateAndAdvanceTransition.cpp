#include "title/titleMain.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

void FUN_002d7e44(void);

/* Finish updating the title scene before advancing its transition. */
s32 titleSceneUpdateAndAdvanceTransition(void *)
{
    renderCtxSelectStereoLayout(g_titleScene);
    FUN_002d7e44();
    return 0;
}
}
