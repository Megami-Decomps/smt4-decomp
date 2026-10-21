/* NON_MATCHING: retail uses bl 0 [R_ARM_CALL __aeabi_memset4] where the compiled block uses bl 0 [R_ARM_CALL __aeabi_memset]. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include <string.h>

extern "C" {
extern AsdProcessState g_asdProcess;
__align(4) extern u8 g_asdProcessGroupEnabled[0x200];

void *asdMemoryAllocTracked(s32 heap, s32 alignmentClass, s32 flags,
                           u32 size, s32 fromFront);

void asdProcessInit(s32 groupCount)
{
    memset(g_asdProcessGroupEnabled, 1, sizeof(g_asdProcessGroupEnabled));
    g_asdProcess.groupCount = groupCount;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\Kernel\\AsdProcess.cpp", 1719);
    g_asdProcess.groups = static_cast<AsdProcGroup *>(
        asdMemoryAllocTracked(0x100, 0x100, 0,
                              static_cast<u32>(groupCount) * sizeof(AsdProcGroup),
                              1));
    g_asdProcess.nextId = 1;
}
}
