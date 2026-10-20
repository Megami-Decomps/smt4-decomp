#include "event/2dEvent/2dEventTex.h"

extern "C" {

void jobSetParent(u32 job, u32 value);

extern EventTexA *g_eventTex;

void eventTexSetJobParam(u32 value)
{
    jobSetParent(g_eventTex->job, value);
}

} /* extern "C" */
