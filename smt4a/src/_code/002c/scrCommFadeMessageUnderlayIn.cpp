/* NON_MATCHING: instruction scheduling only: retail hoists `mov r1, #10` above the conditional color select and loads 1.0f before `mov r2, #1`. Tried (wave 89, on the IV twin): if/else, switch, a call per branch, other return and parameter types and orders, -O2 and multifile. */
#include "event/eventCommand.h"
#include "script/ScriptArgs.h"

extern "C" {

void eventSetUnderMessageFade(u32 color, s32 duration, s32 fadeIn, f32 alpha);


/* True once the command's two counters agree; while scrGetCommandFrame reports zero it starts
 * eventSetUnderMessageFade with 0xFF (argument 0 is zero) or -1, 10 and 1.0, and returns false. */
bool scrCommFadeMessageUnderlayIn(void)
{
    if (scrGetCommandFrame() == 0) {
        u32 color = scrGetArg(0) == 0 ? 0xFF : 0xFFFFFFFF;
        eventSetUnderMessageFade(color, 10, 1, 1.0f);
        return false;
    }
    return g_eventCommand.command->elapsed == g_eventCommand.command->duration;
}

} /* extern "C" */
