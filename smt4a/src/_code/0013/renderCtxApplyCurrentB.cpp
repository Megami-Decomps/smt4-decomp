/* Passes the current value of asdCameraGetSavedRenderPairs to the draw context, if there is one. */
#include "common.h"
#include "code/Code0014.h"
#include "camp/RenderCtx.h"
#include "code/Code0015.h"

extern "C" {


extern RenderCtxA *g_renderCtx;

u32 renderCtxApplyCurrentB(void)
{
    if (asdCameraGetSavedRenderPairs() != 0) {
        effectRestoreSavedRenderPairs(g_renderCtx, reinterpret_cast<void *>(asdCameraGetSavedRenderPairs()));
    }
    return 0;
}

} /* extern "C" */
