/* NON_MATCHING: compiler builds the outgoing frame and groups stack arguments before checking the navigation singleton. */
#include "shard/NaviMain.h"
extern "C" NaviMain *g_naviMain;

extern "C" void naviSetMapSlot(void *, u32, u32, u32, u32, u32, u32, u32, u32);

// Forward a request to the navigation screen when it exists.
extern "C" void FUN_00267074(u32 kind, u32 argument, u32 first, u32 second,
                            u32 third, u32 fourth, u32 fifth)
{
    if (g_naviMain == NULL)
        return;
    naviSetMapSlot(g_naviMain->state, kind, 1, argument, first, second,
                 third, fourth, fifth);
}
