#include "event/2dEvent/2dEventTex.h"

extern "C" {

void FUN_0014bdb4(u32 job, u32 value);

extern EventTexA *g_eventTex;

void eventTexSetJobParam(u32 value)
{
    FUN_0014bdb4(g_eventTex->job, value);
}

} /* extern "C" */
