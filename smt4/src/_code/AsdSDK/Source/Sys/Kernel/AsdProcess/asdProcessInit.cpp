#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00409bc8[];
extern AsdProcessState g_asdProcess;
extern u8 g_asdProcessGroupEnabled[0x200]; /* group enable flags */

void FUN_002c424c(void *buf, int size, int value);
void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Sets up the scheduler for `groupCount` process groups, all enabled. */
void asdProcessInit(s32 groupCount)
{
    FUN_002c424c(g_asdProcessGroupEnabled, 0x200, 1);
    g_asdProcess.groupCount = groupCount;
    asdDebugTrace(DAT_00409bc8, 1719);
    g_asdProcess.groups = (AsdProcGroup *)asdMemAlloc(0x100, 0x100, 0, groupCount * sizeof(AsdProcGroup), 1);
    g_asdProcess.nextId = 1;
}

} /* extern "C" */
