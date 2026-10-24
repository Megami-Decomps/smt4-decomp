#include "camp/RenderCtx.h"

extern "C" {

typedef struct StateDrawWork {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ s32 state;
    /* 0x2C */ u8 unk2C[0x70];
    /* 0x9C */ u8 view[4];
} StateDrawWork;

extern RenderCtx *g_titleScene;
void FUN_002c39a4(RenderCtx *context);
void FUN_002bed3c(void);
u32 FUN_002c5d80(u32 slot, u32 flags);
void FUN_003bb77c(void *view);
void FUN_002c198c(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);

/* Draws the view at 0x9C under render state FUN_002c5d80(1, 0) once the work reaches state 3 (nothing in state 0x11). */
void FUN_003ba63c(StateDrawWork *work)
{
    if (work->state == 0x11) {
        return;
    }
    FUN_002c39a4(g_titleScene);
    FUN_002bed3c();
    renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
    if (work->state >= 3) {
        FUN_003bb77c(work->view);
    }
    renderStackPop(&g_titleScene->stackA);
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
}

} /* extern "C" */
