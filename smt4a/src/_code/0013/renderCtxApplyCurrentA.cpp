/* Passes the current value of FUN_00152f54 to the draw context, if there is one. */
#include "common.h"
#include "util/FUN_00145e24.h"
#include "camp/RenderCtx.h"
#include "util/CalleeContracts.h"

extern "C" {


extern RenderCtxA *g_renderCtx;

u32 renderCtxApplyCurrentA(void)
{
    if (FUN_00152f54() != 0) {
        FUN_00145e24(g_renderCtx, reinterpret_cast<void *>(FUN_00152f54()));
    }
    return 0;
}

} /* extern "C" */
