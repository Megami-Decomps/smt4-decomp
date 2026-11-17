/* NON_MATCHING: retail reloads g_mapIf (second literal-pool word) after the first byte store and keeps the 0.0f in s0; the build keeps one base register and schedules the duration scaling before the stores. */
#include "map/MapIfGlobals.h"

extern "C" {

/* Starts (or, with zero duration, stops) the map interface fade: `duration` in tenths of a second is kept in frames. */
void FUN_00325998(s32 id, s32 duration)
{
    MapIfStateA *mapIf = g_mapIf.state;
    if (duration == 0) {
        mapIf->fade.active = 0;
        return;
    }
    mapIf->fade.active = 1;
    if (id == 0) {
        id = -1;
    }
    mapIf->fade.id = id;
    s16 frames = duration * 10;
    mapIf->fade.frames = frames;
    mapIf->fade.offset[0] = 0.0f;
    mapIf->fade.offset[1] = 0.0f;
    mapIf->fade.offset[2] = 0.0f;
    s16 step = frames * 4 / 10;
    mapIf->fade.step = step;
    mapIf->fade.stepCopy = step;
}

} /* extern "C" */
