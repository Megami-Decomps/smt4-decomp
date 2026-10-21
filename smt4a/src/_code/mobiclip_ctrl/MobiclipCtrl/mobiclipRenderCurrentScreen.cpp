#include "camp/RenderCtx.h"

struct MovieRenderState;

extern "C" {
s32 FUN_001696f4(void);
void FUN_00423a1c(MovieRenderState *state, s32 screen);
extern RenderCtxA *g_renderCtx;
extern MovieRenderState DAT_00617e70;

// Dispatch movie rendering to screen zero or one when the render mode permits it.
void mobiclipRenderCurrentScreen(void)
{
    if (FUN_001696f4() == 1 && g_renderCtx->unk052C != 0) {
        if (g_renderCtx->unk052C != 1) {
            return;
        }
        FUN_00423a1c(&DAT_00617e70, 1);
    } else {
        FUN_00423a1c(&DAT_00617e70, 0);
    }
}
}
