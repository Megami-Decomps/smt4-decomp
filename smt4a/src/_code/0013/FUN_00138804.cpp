#include "camp/RenderCtx.h"
#include "shard/W6_W6Match2_TitleCommand.h"

extern "C" {

extern RenderCtxA *g_renderCtx;

s32 asdProcessSetCommandListRecording(s32 arg);
s32 holderClearPair(RenderCtxA *scene);
s32 FUN_001696f4(void);

/* Runs the title scene update, first starting asdProcessSetCommandListRecording when the flags and FUN_001696f4 allow it; always returns 0. */
u32 FUN_00138804(void)
{
    if (g_titleFlags.disabled == 0 && FUN_001696f4() == 1 && g_titleFlags.commandActive != 0) {
        asdProcessSetCommandListRecording(1);
    }
    holderClearPair(g_renderCtx);
    return 0;
}

} /* extern "C" */
