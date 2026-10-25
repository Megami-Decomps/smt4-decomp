#include "title/titleMain.h"

extern "C" {

extern TitleScene *g_titleScene;

extern void FUN_002c35b0(s32 mode);
extern void FUN_002bdb44(void);
extern void FUN_002c3530(s32 a, s32 b);
extern void FUN_002c3a14(TitleScene *scene);
extern void renderCtxSelectStereoLayout(TitleScene *scene);

/* Resets the title scene: clears its state word and restarts the scene's subsystems; returns 0. */
u32 titleSceneReset(void)
{
    TitleScene *scene;

    FUN_002c35b0(0);
    scene = g_titleScene;
    scene->unk528 = 0;
    FUN_002bdb44();
    FUN_002c3530(0, 0);
    FUN_002c3a14(g_titleScene);
    renderCtxSelectStereoLayout(g_titleScene);
    return 0;
}

} /* extern "C" */
