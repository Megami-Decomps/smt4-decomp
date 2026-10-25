#include "shard/NaviMain.h"

extern "C" {
extern NaviMainA *g_naviMain;
void naviMainEnterState6(NaviTransitionState *navigation);

// Switch the navigation menu to state 6 when it exists.
void naviMainEnterState6IfActive(void)
{
    if (g_naviMain != NULL)
        naviMainEnterState6(&g_naviMain->transition);
}
}
