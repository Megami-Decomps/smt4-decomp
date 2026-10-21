#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
extern AsdGxState g_asdGxState;

void *asdMemoryAllocTracked(s32 heap, s32 alignClass, s32 flags,
                            u32 size, s32 fromFront);

AsdGxCommandList *asdGxCommandListCreate(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\Gx\\AsdGxCommandList.cpp", 431);

    AsdGxCommandList *list = static_cast<AsdGxCommandList *>(
        asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(AsdGxCommandList), 1));
    list->id = g_asdGxState.newListId;
    return list;
}
}
