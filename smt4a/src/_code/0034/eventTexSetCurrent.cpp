#include "event/2dEvent/2dEventTex.h"

extern "C" {

void FUN_0014bdb4(u32 job, u32 value);

extern EventTexA *g_eventTex;

void eventTexSetCurrent(u32 value)
{
    EventTexA *tex = g_eventTex;

    FUN_0014bdb4(g_eventTex->job, value);
    tex->current = value;
}

} /* extern "C" */
