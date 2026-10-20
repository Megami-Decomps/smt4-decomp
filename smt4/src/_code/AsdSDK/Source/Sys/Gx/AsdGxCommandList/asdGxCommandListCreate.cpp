/* NON_MATCHING: retail has a stripped debug call (file/line setup + nop) before the allocation. */
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
extern AsdGxState g_asdGxState;

void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Creates a render pass command list object. */
AsdGxCommandList *asdGxCommandListCreate(void)
{
    AsdGxCommandList *list = (AsdGxCommandList *)asdMemAlloc(0x100, 0x100, 0, sizeof(AsdGxCommandList), 1);

    list->id = g_asdGxState.newListId;
    return list;
}

} /* extern "C" */
