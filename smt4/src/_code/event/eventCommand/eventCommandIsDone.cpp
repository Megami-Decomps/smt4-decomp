#include "event/eventCommand.h"

extern "C" {

void eventSetUnderMessageFade(u32 a, u32 b, s32 c, f32 d);
s32 scrGetCommandFrame(void);
u32 scrGetArg(s32 index);


/* True once the command's two counters agree; while scrGetCommandFrame reports zero it kicks
 * eventSetUnderMessageFade off with the first two values from scrGetArg and returns false. */
bool eventCommandIsDone(void)
{
    u32 first;
    u32 second;

    if (scrGetCommandFrame() == 0) {
        first = scrGetArg(0);
        second = scrGetArg(1);
        eventSetUnderMessageFade(first, second, 1, 1.0f);
        return false;
    }
    return g_eventCommand.command->elapsed == g_eventCommand.command->duration;
}

} /* extern "C" */
