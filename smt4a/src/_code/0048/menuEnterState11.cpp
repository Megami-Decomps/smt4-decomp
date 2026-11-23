#include "mapnavi/NaviMainGlobals.h"

/* Enters state 11 and records the requested selection. */
extern "C" void menuEnterState11(NaviTransitionState *menu, u32 selection)
{
    menu->state = 11;
    menu->step = 0;
    menu->selection = selection;
}
