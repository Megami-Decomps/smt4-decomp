#include "common.h"

extern "C" {

extern void *g_eventTex;

void eventTexCreate(void);

/* Script command: runs eventTexCreate when there is no event texture. */
s32 FUN_002a3bb4(void)
{
    if (g_eventTex == NULL)
        eventTexCreate();
    return 1;
}

} /* extern "C" */
