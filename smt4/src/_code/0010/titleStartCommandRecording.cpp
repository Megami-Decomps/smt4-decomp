#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "shard/W6_W6Match2_TitleCommand.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

s32 asdProcessSetCommandListRecording(s32 recording);
s32 objResetCounters(RenderCtx *context);

/* Starts recording the title command list (in stereoscopic 3D, while it is enabled and active) and
 * clears the render context's two frame counters. */
u32 titleStartCommandRecording(void)
{
    if (g_titleFlags.disabled == 0 && gxIsStereoscopic3dEnabled() == 1 && g_titleFlags.commandActive != 0) {
        asdProcessSetCommandListRecording(1);
    }
    objResetCounters(g_titleScene);
    return 0;
}

} /* extern "C" */
