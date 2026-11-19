/* NON_MATCHING: retail loads r1=10 before the color select and lays out its literal pool as [g_eventCommand, 1.0f] one word closer; built schedules r1 last */
#include "event/eventCommand.h"
#include "script/ScriptArgs.h"

extern "C" {

void eventSetUnderMessageFade(u32 color, s32 frames, s32 a, f32 scale);

/* Script command: on the first frame starts a 10-frame fade (to 0xff or 0xffffffff by argument 0); finishes once the fade has run its frames. */
u8 scrCommFadeMessageUnderlayOut(void)
{
    if (scrGetCommandFrame() == 0) {
        u32 color = scrGetArg(0) == 0 ? 0xff : 0xffffffff;

        eventSetUnderMessageFade(color, 10, 0, 1.0f);
        return 0;
    }
    return g_eventCommand.command->elapsed == g_eventCommand.command->duration;
}

} /* extern "C" */
