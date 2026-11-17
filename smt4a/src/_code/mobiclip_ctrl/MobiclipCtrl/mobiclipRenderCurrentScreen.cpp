#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"

struct MovieRenderState;

extern "C" {
s32 gxIsStereoscopic3dEnabled(void);
void FUN_00423a1c(MovieRenderState *state, s32 screen);
extern MovieRenderState DAT_00617e70;

// Dispatch movie rendering to screen zero or one when the render mode permits it.
void mobiclipRenderCurrentScreen(void)
{
    if (gxIsStereoscopic3dEnabled() == 1 && g_renderCtx->unk052C != 0) {
        if (g_renderCtx->unk052C != 1) {
            return;
        }
        FUN_00423a1c(&DAT_00617e70, 1);
    } else {
        FUN_00423a1c(&DAT_00617e70, 0);
    }
}
}
