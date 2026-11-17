#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"

extern "C" void naviSetMapSlot(void *, u32, u32, u32, u32, u32, u32, u32, u32);

static __inline void naviSetActiveMapSlot(NaviMain *navi, u32 kind, u32 argument, u32 first, u32 second,
                                        u32 third, u32 fourth, u32 fifth)
{
    naviSetMapSlot(navi->state, kind, 1, argument, first, second, third, fourth, fifth);
}

// Forward a request to the navigation screen when it exists.
extern "C" void naviSetActiveMapSlot(u32 kind, u32 argument, u32 first, u32 second,
                            u32 third, u32 fourth, u32 fifth)
{
    NaviMain *navi = g_naviMain;
    if (navi != NULL)
        naviSetActiveMapSlot(navi, kind, argument, first, second, third, fourth, fifth);
}
