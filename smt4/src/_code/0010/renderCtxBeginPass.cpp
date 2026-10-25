#include "title/titleMain.h"

extern "C" {

void FUN_002bdb44(void);
void FUN_002c3530(s32 a, s32 b);
void FUN_002c35b0(s32 arg);
void renderCtxSelectStereoLayout(TitleScene *scene);
void FUN_002c3a14(TitleScene *scene);
s32 FUN_002c5210(void);

extern TitleScene *g_titleScene;
extern struct {
    u8 unk00;
    s8 unk01;
} g_titleFlags;

u32 renderCtxBeginPass(void)
{
    if (FUN_002c5210() == 1 && g_titleFlags.unk01 != 0) {
        TitleScene *scene;

        FUN_002c35b0(1);
        scene = g_titleScene;
        scene->unk528 = 1;
        FUN_002bdb44();
        FUN_002c3530(1, 0);
        FUN_002c3a14(g_titleScene);
        renderCtxSelectStereoLayout(g_titleScene);
    }
    return 0;
}

} /* extern "C" */
