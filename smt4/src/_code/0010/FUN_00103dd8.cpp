#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

typedef struct TitleScene {
    /* 0x000 */ u8 unk000[0x528];
    /* 0x528 */ s32 phase;
} TitleScene;


extern int renderCtxResetFrameState(int mode);
extern void asdGxFlushCommandBuffer(void);
extern int renderTargetClear(int a, int b);
extern int renderCtxResetFrameStacks(RenderCtx *scene);

/* Switches the title scene to phase 2 and refreshes it. */
u32 FUN_00103dd8(void)
{
    renderCtxResetFrameState(2);
    asdGxFlushCommandBuffer();
    renderTargetClear(2, 0);
    renderCtxSetStereoMode(g_titleScene, 2);
    renderCtxResetFrameStacks(g_titleScene);
    return 0;
}

} /* extern "C" */
