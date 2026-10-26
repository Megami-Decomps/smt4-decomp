#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern const char g_asdProcessSourcePath[];
extern AsdProcessState g_asdProcess;
extern u8 g_asdProcessGroupEnabled[0x200]; /* group enable flags */

void __aeabi_memset4(void *buf, int size, int value);

/* Sets up the scheduler for `groupCount` process groups, all enabled. */
void asdProcessInit(s32 groupCount)
{
    __aeabi_memset4(g_asdProcessGroupEnabled, 0x200, 1);
    g_asdProcess.groupCount = groupCount;
    asdDebugTrace(g_asdProcessSourcePath, 1719);
    g_asdProcess.groups = (AsdProcGroup *)asdMemAlloc(0x100, 0x100, 0, groupCount * sizeof(AsdProcGroup), 1);
    g_asdProcess.nextId = 1;
}

} /* extern "C" */
