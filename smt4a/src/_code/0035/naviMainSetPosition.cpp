#include "mapnavi/NaviMainGlobals.h"

extern "C" {

/* Sets and enables the navigation position. */
void naviMainSetPosition(const MapVector *position)
{
    NaviMainA *navi = g_naviMain;
    navi->position = *position;
    navi->positionSet = 1;
}

}
