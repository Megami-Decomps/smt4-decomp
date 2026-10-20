#include "event/2dEvent/2dEventTex.h"

extern "C" {

extern EventTex *g_eventTex;

u32 eventTexGetCurrent(void)
{
    return g_eventTex->current;
}

} /* extern "C" */
