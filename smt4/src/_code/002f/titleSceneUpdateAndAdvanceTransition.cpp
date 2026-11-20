#include "title/titleMain.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

void titleSceneDrawEffectEditor(void);

/* Finish updating the title scene before advancing its transition. */
s32 titleSceneUpdateAndAdvanceTransition(void *)
{
    renderCtxSelectStereoLayout(g_titleScene);
    titleSceneDrawEffectEditor();
    return 0;
}
}
