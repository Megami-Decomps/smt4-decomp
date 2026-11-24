#ifndef MAP_NAVI_DISPLAY_MAP_LOAD_H
#define MAP_NAVI_DISPLAY_MAP_LOAD_H

#include "map/NaviDisplayTransition.h"

struct MapMarkerWork;

extern "C" {
void FUN_002316e8(MapMarkerWork *work, s32 region);
void mapNaviDisplayLoadMap(MapNaviDisplay *display, s32 map);
} /* extern "C" */

/* Resets the display counter and loads the map as naviFieldSetCurrentMap does. Region maps
 * build a marker list in place; this display loads local maps rather than using the field debug hook. */
static __inline void naviDisplaySetMap(MapNaviDisplay *display, s32 map)
{
    NaviDisplayTransitionView *work = (NaviDisplayTransitionView *)display;
    work->counter = 0;
    if (map >= 100) {
        work->mapVisible = 0;
        FUN_002316e8((MapMarkerWork *)display, map);
    } else {
        work->mapVisible = 1;
        mapNaviDisplayLoadMap(display, map);
    }
}

#endif
