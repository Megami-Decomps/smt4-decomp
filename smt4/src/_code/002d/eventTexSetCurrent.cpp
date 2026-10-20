#include "event/2dEvent/2dEventTex.h"

extern "C" {

void FUN_002c425c(u32 job, u32 value);

extern EventTex *g_eventTex;

void eventTexSetCurrent(u32 value)
{
    EventTex *tex = g_eventTex;

    FUN_002c425c(g_eventTex->job, value);
    tex->current = value;
}

} /* extern "C" */
