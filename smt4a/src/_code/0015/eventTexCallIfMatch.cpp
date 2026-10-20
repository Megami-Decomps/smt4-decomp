#include "event/2dEvent/2dEventTex.h"

extern "C" {

void FUN_00167cf8(u32 handle, u32 a, u32 b);
s32 FUN_00167888(u32 handle);
s32 jobIsValid(u32 handle);

extern EventTexA *g_eventTex;

bool eventTexCallIfMatch(s32 value, u32 a, u32 b)
{
    EventTexA *tex = g_eventTex;

    if (g_eventTex != NULL && jobIsValid(g_eventTex->current) != 0 &&
        FUN_00167888(tex->current) == value) {
        FUN_00167cf8(tex->current, a, b);
        return true;
    }
    return false;
}

} /* extern "C" */
