#include "addon/aocMain.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

void jobStop(u32 job, int arg);

extern AocMain *g_aocMain;
extern u32 *DAT_0043e0d0; /* job handle slot */

/* Stops the AOC job and clears the three flag bits 4-6. */
void aocJobStop(void)
{
    asdDebugHookVoid();
    jobStop(*DAT_0043e0d0, 0);
    g_aocMain->flags &= ~0x70;
}

} /* extern "C" */
