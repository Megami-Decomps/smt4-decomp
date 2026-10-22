/* NON_MATCHING: flag-group address reuse, gate branches and the service-call NOP differ. */
#include "shard/FrameWork.h"
#include "camp/RenderCtx.h"

extern "C" {
void FUN_00150d38(u32 value);
void FUN_00157558(RenderCtxA *context);
u32 stateValuesGetBySelector(u32 selector);
extern RenderCtxA *g_renderCtx;

u32 FUN_0013c7dc()
{
    FrameWorkA *work = reinterpret_cast<FrameWorkA *>(jobGetWork());
    if (stateValuesGetBySelector(0) == 0 && work->flags.active &&
        work->flags.ready && work->flags.surfaceReady && work->frame.surface != 0 &&
        !work->frame.blocked) {
        FUN_00157558(g_renderCtx);
        FUN_00150d38(0);
    }
    return 0;
}
}
