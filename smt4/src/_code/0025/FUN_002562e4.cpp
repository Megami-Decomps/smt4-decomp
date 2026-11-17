/* NON_MATCHING: the fade block is addressed through a local pointer for the active byte (the byte store makes armcc reload g_mapIf afterwards, like retail's second literal load); remaining: retail keeps the duration*10 computation after the reload and loads 0.0f first, ours schedules the multiply earlier. */
#include "map/MapIfGlobals.h"

extern "C" {

/* Starts (or, with zero duration, stops) the map interface fade: `duration` in tenths of a second is kept in frames. */
void FUN_002562e4(s32 id, s32 duration)
{
    MapIfFade *fade = &g_mapIf.state->fade;
    if (duration == 0) {
        fade->active = 0;
        return;
    }
    fade->active = 1;
    if (id == 0) {
        id = -1;
    }
    g_mapIf.state->fade.id = id;
    s16 frames = duration * 10;
    g_mapIf.state->fade.frames = frames;
    g_mapIf.state->fade.offset[0] = 0.0f;
    g_mapIf.state->fade.offset[1] = 0.0f;
    g_mapIf.state->fade.offset[2] = 0.0f;
    s16 step = frames * 4 / 10;
    g_mapIf.state->fade.step = step;
    g_mapIf.state->fade.stepCopy = step;
}

} /* extern "C" */
