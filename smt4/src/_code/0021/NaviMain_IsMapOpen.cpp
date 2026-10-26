#include "shard/NaviMain.h"

struct NavigationState;

extern "C" {
extern NaviMain *g_naviMain;
bool naviStateIsMapOpen(const NavigationState *navigation);

/* Whether the navigation screen exists and is in one of its map-open states. */
bool NaviMain_IsMapOpen(void)
{
    NaviMain *navi = g_naviMain;
    if (navi == NULL) {
        return false;
    }
    return naviStateIsMapOpen((const NavigationState *)navi->state);
}

} /* extern "C" */
