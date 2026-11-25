#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

typedef struct StateDrawWork {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ s32 state;
    /* 0x2C */ u8 unk2C[0x70];
    /* 0x9C */ u8 view[4];
} StateDrawWork;

void gxResetColorQuadToWhite(void);
void FUN_003bb77c(void *view);
void renderCtxResetColorScale(RenderCtx *context);

/* Draws the view at 0x9C under render state renderCtxPackPassFlags(1, 0) once the work reaches state 3 (nothing in state 0x11). */
void mikadoCameraDrawView(StateDrawWork *work)
{
    if (work->state == 0x11) {
        return;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    gxResetColorQuadToWhite();
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    if (work->state >= 3) {
        FUN_003bb77c(work->view);
    }
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
}

} /* extern "C" */
