#include "mapnavi/NaviMainGlobals.h"

extern "C" {

void naviFieldSetCurrentMap(u32 *field, u32 map);

/* Select the current navigation map and reset its counter. */
void NaviMain_SetCurrentMap(u32 map)
{
    NaviMain *navi = g_naviMain;
    navi->currentMap = map;
    navi->unk2C = 0;
    naviFieldSetCurrentMap(navi->state, map);
}

}
