#include "common.h"

extern "C" {

extern void *g_eventTex;

void FUN_0036f424(void);

/* Script command: runs FUN_0036f424 when there is no event texture. */
s32 FUN_002a3bb4(void)
{
    if (g_eventTex == NULL)
        FUN_0036f424();
    return 1;
}

} /* extern "C" */
