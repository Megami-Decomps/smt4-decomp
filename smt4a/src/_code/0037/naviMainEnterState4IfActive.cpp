#include "shard/NaviMain.h"

extern "C" {
extern NaviMainA *g_naviMain;
void naviMainEnterState4(NaviTransitionState *navigation);

// Switch the navigation menu to state 4 when it exists.
void naviMainEnterState4IfActive(void)
{
    if (g_naviMain != NULL)
        naviMainEnterState4(&g_naviMain->transition);
}
}
