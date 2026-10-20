#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern AsdProcessState g_asdProcess;
extern u8 g_asdProcessGroupEnabled[0x200]; /* group enable flags */

void __aeabi_memset4(void *buf, int size, int value);
void *asdMemoryAllocTracked(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Sets up the scheduler for `groupCount` process groups, all enabled. */
void asdProcessInit(s32 groupCount)
{
    __aeabi_memset4(g_asdProcessGroupEnabled, 0x200, 1);
    g_asdProcess.groupCount = groupCount;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\Kernel\\AsdProcess.cpp", 1719);
    g_asdProcess.groups = (AsdProcGroup *)asdMemoryAllocTracked(0x100, 0x100, 0, groupCount * sizeof(AsdProcGroup), 1);
    g_asdProcess.nextId = 1;
}

} /* extern "C" */
