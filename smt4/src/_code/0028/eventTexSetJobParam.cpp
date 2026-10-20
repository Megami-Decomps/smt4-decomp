#include "event/2dEvent/2dEventTex.h"

extern "C" {

void FUN_002c425c(u32 job, u32 value);

extern EventTex *g_eventTex;

void eventTexSetJobParam(u32 value)
{
    FUN_002c425c(g_eventTex->job, value);
}

} /* extern "C" */
