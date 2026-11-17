#include "code/Code0014.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match2_TitleCommand.h"
#include "code/Code0015.h"

extern "C" {

extern s32 gxIsStereoscopic3dEnabled(void);
extern s32 asdProcessSetCommandListRecording(s32 arg);
extern s32 renderCtxResetFrameState(RenderCtxA *scene);

/* Per-frame hook: opens the pending screen once both flags allow it, then passes the scene the pending value, if any; always returns 0. */
u32 FUN_00138068(void)
{
    if (g_titleFlags.disabled == 0 && gxIsStereoscopic3dEnabled() == 1 && g_titleFlags.commandActive != 0) {
        asdProcessSetCommandListRecording(0);
    }
    renderCtxResetFrameState(g_renderCtx);
    if (asdCameraGetSavedRenderPairs() != 0) {
        effectRestoreSavedRenderPairs(g_renderCtx, reinterpret_cast<void *>(asdCameraGetSavedRenderPairs()));
    }
    return 0;
}

}
