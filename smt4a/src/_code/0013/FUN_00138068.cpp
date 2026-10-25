#include "util/FUN_00145e24.h"
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match2_TitleCommand.h"
#include "util/CalleeContracts.h"

extern "C" {

extern RenderCtxA *g_renderCtx;

extern s32 FUN_001696f4(void);
extern s32 asdProcessSetCommandListRecording(s32 arg);
extern s32 FUN_001575cc(RenderCtxA *scene);

/* Per-frame hook: opens the pending screen once both flags allow it, then passes the scene the pending value, if any; always returns 0. */
u32 FUN_00138068(void)
{
    if (g_titleFlags.disabled == 0 && FUN_001696f4() == 1 && g_titleFlags.commandActive != 0) {
        asdProcessSetCommandListRecording(0);
    }
    FUN_001575cc(g_renderCtx);
    if (FUN_00152f54() != 0) {
        FUN_00145e24(g_renderCtx, reinterpret_cast<void *>(FUN_00152f54()));
    }
    return 0;
}

}
