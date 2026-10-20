#include "event/2dEvent/2dEventTex.h"

extern "C" {

s32 FUN_00167ce8(u32 handle);
void entryWorkSwitchTo(u32 handle, u32 a, u32 b);
void FUN_00167df8(u32 handle, s32 arg);
s32 eventTexJobGetId(u32 handle);
s32 jobIsValid(u32 handle);

extern EventTexA *g_eventTex;

bool eventTexCallIfIdle(s32 value, u32 a, u32 b)
{
    EventTexA *tex = g_eventTex;

    if (g_eventTex != NULL && jobIsValid(g_eventTex->current) != 0 &&
        eventTexJobGetId(tex->current) == value && FUN_00167ce8(tex->current) == 0) {
        FUN_00167df8(tex->current, 1);
        entryWorkSwitchTo(tex->current, a, b);
        return true;
    }
    return false;
}

} /* extern "C" */
