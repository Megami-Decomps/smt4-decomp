#include "event/2dEvent/2dEventTex.h"

extern "C" {

extern EventTexA *g_eventTex;

/* The handle currently shown, or -1 when there is no scene. */
u32 eventTexGetCurrentOrInvalid(void)
{
    u32 current = 0xFFFFFFFF;

    if (g_eventTex != NULL) {
        current = g_eventTex->current;
    }
    return current;
}

} /* extern "C" */
