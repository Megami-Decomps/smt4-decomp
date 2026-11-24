/* NON_MATCHING: instruction scheduling only: retail hoists `mov r1, #10` above the conditional color select and loads 1.0f before `mov r2, #1`. Tried (wave 89): the colour in a local, if/else, a default with override, switch, an early return, a call per branch (hoists the 10 but cross-jumps the return), u32/s32/bool/u8 returns, narrower duration/fadeIn types, every parameter order (paramorder.py), -O2 and multifile. */
#include "event/eventCommand.h"
#include "script/ScriptArgs.h"

extern "C" {

void eventSetUnderMessageFade(u32 a, u32 b, s32 c, f32 d);


/* True once the command's two counters agree; while scrGetCommandFrame reports zero it starts
 * eventSetUnderMessageFade with 0xFF (argument 0 is zero) or -1, 10 and 1.0, and returns false. */
bool scrCommFadeMessageUnderlayIn(void)
{
    if (scrGetCommandFrame() == 0) {
        eventSetUnderMessageFade(scrGetArg(0) == 0 ? 0xFF : 0xFFFFFFFF, 10, 1, 1.0f);
        return false;
    }
    return g_eventCommand.command->elapsed == g_eventCommand.command->duration;
}

} /* extern "C" */
