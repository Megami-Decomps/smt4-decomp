#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "shard/W6_W6Match2_TitleCommand.h"

extern "C" {

s32 asdProcessSetCommandListRecording(s32 arg);
s32 holderClearPair(RenderCtxA *scene);
s32 gxIsStereoscopic3dEnabled(void);

/* Runs the title scene update, first starting asdProcessSetCommandListRecording when the flags and gxIsStereoscopic3dEnabled allow it; always returns 0. */
u32 FUN_00138804(void)
{
    if (g_titleFlags.disabled == 0 && gxIsStereoscopic3dEnabled() == 1 && g_titleFlags.commandActive != 0) {
        asdProcessSetCommandListRecording(1);
    }
    holderClearPair(g_renderCtx);
    return 0;
}

} /* extern "C" */
