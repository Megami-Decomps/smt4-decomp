/* Passes the current value of FUN_00152f54 to the draw context, if there is one. */
#include "common.h"
#include "code/Code0014.h"
#include "camp/RenderCtx.h"
#include "code/Code0015.h"

extern "C" {


extern RenderCtxA *g_renderCtx;

u32 renderCtxApplyCurrentA(void)
{
    if (FUN_00152f54() != 0) {
        effectRestoreSavedRenderPairs(g_renderCtx, reinterpret_cast<void *>(FUN_00152f54()));
    }
    return 0;
}

} /* extern "C" */
