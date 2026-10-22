#include "event/2dEvent/2dEventTex.h"

extern "C" {

s32 FUN_001262fc(u32 handle);
void aocSelectMusicTrack(u32 handle, u32 a, u32 b);
void FUN_0012640c(u32 handle, s32 arg);
s32 jobWorkGetFirstWordB(u32 handle);
s32 jobIsValid(u32 handle);

extern EventTex *g_eventTex;

bool eventTexCallIfIdle(s32 value, u32 a, u32 b)
{
    EventTex *tex = g_eventTex;

    if (g_eventTex != NULL && jobIsValid(g_eventTex->current) != 0 &&
        jobWorkGetFirstWordB(tex->current) == value && FUN_001262fc(tex->current) == 0) {
        FUN_0012640c(tex->current, 1);
        aocSelectMusicTrack(tex->current, a, b);
        return true;
    }
    return false;
}

} /* extern "C" */
