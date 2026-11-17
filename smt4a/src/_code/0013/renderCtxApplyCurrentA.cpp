/* Passes the current value of asdCameraGetSavedRenderPairs to the draw context, if there is one. */
#include "common.h"
#include "camp/RenderCtxA.h"
#include "code/Code0014.h"
#include "camp/RenderCtx.h"
#include "code/Code0015.h"

extern "C" {


u32 renderCtxApplyCurrentA(void)
{
    if (asdCameraGetSavedRenderPairs() != 0) {
        effectRestoreSavedRenderPairs(g_renderCtx, reinterpret_cast<void *>(asdCameraGetSavedRenderPairs()));
    }
    return 0;
}

} /* extern "C" */
