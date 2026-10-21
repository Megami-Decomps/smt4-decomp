/* NON_MATCHING: instruction scheduling only: retail hoists `mov r1, #10` above the conditional color select and loads 1.0f before `mov r2, #1`. */
#include "event/eventCommand.h"

extern "C" {

void eventSetUnderMessageFade(u32 a, u32 b, s32 c, f32 d);
s32 scrGetCommandFrame(void);
u32 scrGetArg(s32 index);

extern EventCommandGlobals g_eventCommand;

/* True once the command's two counters agree; while scrGetCommandFrame reports zero it starts
 * eventSetUnderMessageFade with 0xFF (argument 0 is zero) or -1, 10 and 1.0, and returns false. */
bool FUN_0020147c(void)
{
    if (scrGetCommandFrame() == 0) {
        eventSetUnderMessageFade(scrGetArg(0) == 0 ? 0xFF : 0xFFFFFFFF, 10, 1, 1.0f);
        return false;
    }
    return g_eventCommand.command->unk10 == g_eventCommand.command->unk14;
}

} /* extern "C" */
