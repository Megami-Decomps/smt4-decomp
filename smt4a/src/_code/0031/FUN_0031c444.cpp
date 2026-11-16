#include "event/eventCommand.h"

extern "C" {

void eventSetUnderMessageFade(u32 color, s32 duration, s32 fadeIn, f32 alpha);
extern EventCommandGlobals g_eventCommand;
s32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
s32 FUN_00203d74(void);

/* Starts the underlay fade out in `color` with the duration from script argument 0. */
static __inline void underMessageFadeOut(u32 color)
{
    s32 duration = scrGetArg(0);

    if (FUN_00203d74() != 0 && duration > 4) {
        duration = 4;
    }
    eventSetUnderMessageFade(color, duration, 0, 1.0f);
}

/* Script command: fades the message underlay out over the given duration (at most 4 when the check passes). */
u8 FUN_0031c444(void)
{
    if (scrGetCommandFrame() == 0) {
        underMessageFadeOut(0);
        return 0;
    }
    return g_eventCommand.command->elapsed == g_eventCommand.command->duration;
}

} /* extern "C" */
