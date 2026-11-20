#include "event/2dEvent/2dEventTex.h"

extern "C" {

s32 eventTexJobGetState(u32 handle);
void entryWorkSwitchTo(u32 handle, u32 a, u32 b);
void eventTexJobSetState(u32 handle, s32 arg);
s32 eventTexJobGetId(u32 handle);
s32 jobIsValid(u32 handle);

extern EventTexA *g_eventTex;

bool eventTexCallIfIdle(s32 value, u32 a, u32 b)
{
    EventTexA *tex = g_eventTex;

    if (g_eventTex != NULL && jobIsValid(g_eventTex->current) != 0 &&
        eventTexJobGetId(tex->current) == value && eventTexJobGetState(tex->current) == 0) {
        eventTexJobSetState(tex->current, 1);
        entryWorkSwitchTo(tex->current, a, b);
        return true;
    }
    return false;
}

} /* extern "C" */
