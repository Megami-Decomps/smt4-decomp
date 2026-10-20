#include "event/2dEvent/2dEventTex.h"

extern "C" {

void jobSetParent(u32 job, u32 value);

extern EventTexA *g_eventTex;

void eventTexSetCurrent(u32 value)
{
    EventTexA *tex = g_eventTex;

    jobSetParent(g_eventTex->job, value);
    tex->current = value;
}

} /* extern "C" */
