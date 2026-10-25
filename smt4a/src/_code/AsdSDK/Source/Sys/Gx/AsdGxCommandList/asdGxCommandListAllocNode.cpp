#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/asdGxCommandListAllocNode.h"

extern "C" {
void *asdMemoryAllocTracked(s32 heap, s32 alignmentClass, s32 flags,
                            u32 size, s32 fromFront);

void *asdGxCommandListAllocNode(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\Gx\\AsdGxCommandList.cpp", 295);
    return asdMemoryAllocTracked(0x100, 0x100, 0, 0x10, 1);
}
}
