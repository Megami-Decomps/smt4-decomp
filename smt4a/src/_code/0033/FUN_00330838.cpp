#include "event/eventCommand.h"

extern "C" {

void eventSetUnderMessageFade(u32 color, s32 duration, s32 fadeIn, f32 alpha);
extern EventCommandGlobals g_eventCommand;
s32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
s32 FUN_00203d74(void);

/* Script command: fades the message underlay in with the given color and duration (at most 4 when the check passes). */
u8 FUN_00330838(void)
{
    if (scrGetCommandFrame() == 0) {
        u32 color = scrGetArg(0);
        s32 duration = scrGetArg(1);

        if (FUN_00203d74() != 0 && duration > 4) {
            duration = 4;
        }
        eventSetUnderMessageFade(color, duration, 1, 1.0f);
        return 0;
    }
    return g_eventCommand.command->elapsed == g_eventCommand.command->duration;
}

} /* extern "C" */
