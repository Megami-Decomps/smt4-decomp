#include "AsdSDK/AsdMemAlloc.h"
#include "event/2dEvent/2dEventTex.h"

extern "C" {
extern EventTexA *g_eventTex;

/* Releases the event texture manager when its job ends. */
void eventTexFree(u32 /* job */)
{
    asdMemFree(g_eventTex);
    g_eventTex = NULL;
}

} /* extern "C" */
