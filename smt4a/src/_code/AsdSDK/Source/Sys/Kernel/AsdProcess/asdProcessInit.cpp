#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
extern AsdProcessState g_asdProcess;
extern u8 g_asdProcessGroupEnabled[0x200];
void __aeabi_memset4(void *buffer, s32 size, s32 value);

void *asdMemoryAllocTracked(s32 heap, s32 alignmentClass, s32 flags,
                           u32 size, s32 fromFront);

void asdProcessInit(s32 groupCount)
{
    __aeabi_memset4(g_asdProcessGroupEnabled, sizeof(g_asdProcessGroupEnabled), 1);
    g_asdProcess.groupCount = groupCount;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\Kernel\\AsdProcess.cpp", 1719);
    g_asdProcess.groups = static_cast<AsdProcGroup *>(
        asdMemoryAllocTracked(0x100, 0x100, 0,
                              static_cast<u32>(groupCount) * sizeof(AsdProcGroup),
                              1));
    g_asdProcess.nextId = 1;
}
}
