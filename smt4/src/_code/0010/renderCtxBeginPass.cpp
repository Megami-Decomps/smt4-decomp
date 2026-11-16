#include "title/titleMain.h"

extern "C" {

void FUN_002bdb44(void);
void renderTargetClear(s32 a, s32 b);
void renderCtxResetFrameState(s32 arg);
void renderCtxSelectStereoLayout(TitleScene *scene);
void FUN_002c3a14(TitleScene *scene);
s32 gxIsStereoscopic3dEnabled(void);

extern TitleScene *g_titleScene;
extern struct {
    u8 unk00;
    s8 unk01;
} g_titleFlags;

u32 renderCtxBeginPass(void)
{
    if (gxIsStereoscopic3dEnabled() == 1 && g_titleFlags.unk01 != 0) {
        TitleScene *scene;

        renderCtxResetFrameState(1);
        scene = g_titleScene;
        scene->stereoMode = 1;
        FUN_002bdb44();
        renderTargetClear(1, 0);
        FUN_002c3a14(g_titleScene);
        renderCtxSelectStereoLayout(g_titleScene);
    }
    return 0;
}

} /* extern "C" */
