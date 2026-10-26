/* NON_MATCHING: the duration argument MOV is scheduled after color selection instead of before the conditional color moves. */
#include "event/eventCommand.h"
#include "script/ScriptArgs.h"

extern "C" {

void eventSetUnderMessageFade(u32 color, s32 duration, s32 fadeIn, f32 alpha);
extern EventCommandGlobals g_eventCommand;

u8 scrCommFadeMessageUnderlayOut(void)
{
    if (scrGetCommandFrame() == 0) {
        u32 color = scrGetArg(0) == 0 ? 0xffu : 0xffffffffu;
        eventSetUnderMessageFade(color, 10, 0, 1.0f);
        return 0;
    }
    return g_eventCommand.command->elapsed == g_eventCommand.command->duration;
}

} /* extern "C" */
