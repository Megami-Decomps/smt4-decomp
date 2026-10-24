#include "common.h"

extern "C" {

extern void *g_eventTex;

void FUN_002ee6f8(void);

/* Script command: runs FUN_002ee6f8 when there is no event texture. */
s32 FUN_001ed3b0(void)
{
    if (g_eventTex == NULL)
        FUN_002ee6f8();
    return 1;
}

} /* extern "C" */
