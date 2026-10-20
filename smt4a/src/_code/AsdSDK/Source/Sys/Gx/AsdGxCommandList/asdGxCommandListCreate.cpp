#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern AsdGxState g_asdGxState;

void *asdMemoryAllocTracked(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Creates a render pass command list object. */
AsdGxCommandList *asdGxCommandListCreate(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\Gx\\AsdGxCommandList.cpp", 431);
    AsdGxCommandList *list = (AsdGxCommandList *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(AsdGxCommandList), 1);

    list->id = g_asdGxState.newListId;
    return list;
}

} /* extern "C" */
