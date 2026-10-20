#include "event/2dEvent/2dEventTex.h"

extern "C" {

void FUN_0012630c(u32 handle, u32 a, u32 b);
s32 FUN_002b721c(u32 handle);
s32 jobIsValid(u32 handle);

extern EventTex *g_eventTex;

bool eventTexCallIfMatch(s32 value, u32 a, u32 b)
{
    EventTex *tex = g_eventTex;

    if (g_eventTex != NULL && jobIsValid(g_eventTex->current) != 0 &&
        FUN_002b721c(tex->current) == value) {
        FUN_0012630c(tex->current, a, b);
        return true;
    }
    return false;
}

} /* extern "C" */
