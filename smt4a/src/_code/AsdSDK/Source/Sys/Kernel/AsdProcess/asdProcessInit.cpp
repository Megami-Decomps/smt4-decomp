/* NON_MATCHING: the retail build has a stripped debug call (file/line setup + nop) before the group table allocation. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern AsdProcessState g_asdProcess;
extern u8 g_asdProcessGroupEnabled[0x200]; /* group enable flags */

void FUN_001b4a90(void *buf, int size, int value);
void *asdMemoryAllocTracked(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Sets up the scheduler for `groupCount` process groups, all enabled. */
void asdProcessInit(s32 groupCount)
{
    FUN_001b4a90(g_asdProcessGroupEnabled, 0x200, 1);
    g_asdProcess.groupCount = groupCount;
    g_asdProcess.groups = (AsdProcGroup *)asdMemoryAllocTracked(0x100, 0x100, 0, groupCount * sizeof(AsdProcGroup), 1);
    g_asdProcess.nextId = 1;
}

} /* extern "C" */
