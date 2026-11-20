#include "shard/W6_W6Match2_TitleCommand.h"
#include "camp/RenderCtxA.h"
#include "code/Code0014.h"
#include "code/Code0015.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {

s32 asdProcessSetCommandListRecording(s32 recording);
s32 renderCtxResetFrameState(RenderCtxA *context);

/* Stops recording the title command list (in stereoscopic 3D, while it is enabled and active), resets the
 * render context's frame state and restores the saved render pairs, if any. */
u32 titleStopCommandRecording(void)
{
    if (g_titleFlags.disabled == 0 && gxIsStereoscopic3dEnabled() == 1 && g_titleFlags.commandActive != 0) {
        asdProcessSetCommandListRecording(0);
    }
    renderCtxResetFrameState(g_renderCtx);
    if (asdCameraGetSavedRenderPairs() != 0) {
        effectRestoreSavedRenderPairs(g_renderCtx, (void *)asdCameraGetSavedRenderPairs());
    }
    return 0;
}

} /* extern "C" */
