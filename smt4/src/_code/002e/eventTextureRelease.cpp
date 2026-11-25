#include "AsdSDK/AsdMemAlloc.h"
#include "event/2dEvent/2dEventTex.h"

extern "C" {
extern EventTex *g_eventTex;

/* Releases and clears the event texture allocation. */
void eventTextureRelease(u32 /* job */)
{
    asdMemFree(g_eventTex);
    g_eventTex = NULL;
}
}
