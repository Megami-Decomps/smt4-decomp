#include "title/titleMain.h"

extern "C" {

extern TitleScene *g_titleScene;

extern void renderCtxResetFrameState(s32 mode);
extern void asdGxFlushCommandBuffer(void);
extern void renderTargetClear(s32 a, s32 b);
extern void renderCtxResetFrameStacks(TitleScene *scene);
extern void renderCtxSelectStereoLayout(TitleScene *scene);

/* Resets the title scene: clears its state word and restarts the scene's subsystems; returns 0. */
u32 titleSceneReset(void)
{
    TitleScene *scene;

    renderCtxResetFrameState(0);
    scene = g_titleScene;
    scene->stereoMode = 0;
    asdGxFlushCommandBuffer();
    renderTargetClear(0, 0);
    renderCtxResetFrameStacks(g_titleScene);
    renderCtxSelectStereoLayout(g_titleScene);
    return 0;
}

} /* extern "C" */
