#include "event/2dEvent/2dEventTex.h"

extern "C" {

void aocSelectMusicTrack(u32 handle, u32 a, u32 b);
s32 jobWorkGetFirstWordB(u32 handle);
s32 jobIsValid(u32 handle);

extern EventTex *g_eventTex;

bool eventTexCallIfMatch(s32 value, u32 a, u32 b)
{
    EventTex *tex = g_eventTex;

    if (g_eventTex != NULL && jobIsValid(g_eventTex->current) != 0 &&
        jobWorkGetFirstWordB(tex->current) == value) {
        aocSelectMusicTrack(tex->current, a, b);
        return true;
    }
    return false;
}

} /* extern "C" */
