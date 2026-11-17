#include "shard/W8Match1_CallbackSelection.h"
#include "camp/RenderCtxTitle.h"
extern "C" {
void gxResetColorQuadToWhite(void);
void renderCtxResetColorScale(RenderCtx *);
void renderCtxApplyTransforms(RenderCtx *);

// Commits the current selection, invokes its member callback, and refreshes the scene.
void _ZN9Obj4223c46renderEv(CallbackSelectionWork* work)
{
    gxResetColorQuadToWhite();
    work->state = 0x1F;
    if (work->callbacks[work->selection] != NULL) {
        (work->*work->callbacks[work->selection])();
    }
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
}
}
