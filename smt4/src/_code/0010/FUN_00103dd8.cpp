#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

typedef struct TitleScene {
    /* 0x000 */ u8 unk000[0x528];
    /* 0x528 */ s32 phase;
} TitleScene;


extern int renderCtxResetFrameState(int mode);
extern void FUN_002bdb44(void);
extern int renderTargetClear(int a, int b);
extern int FUN_002c3a14(RenderCtx *scene);
void renderCtxSetStereoMode(RenderCtx *scene, u32 mode);

/* Switches the title scene to phase 2 and refreshes it. */
u32 FUN_00103dd8(void)
{
    renderCtxResetFrameState(2);
    FUN_002bdb44();
    renderTargetClear(2, 0);
    renderCtxSetStereoMode(g_titleScene, 2);
    FUN_002c3a14(g_titleScene);
    return 0;
}

} /* extern "C" */
