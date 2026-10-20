/* NON_MATCHING: retail has a stripped debug call (file/line setup + nop) before the allocation. */
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
extern u32 DAT_005b3ff0;

void *asdMemoryAllocTracked(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Creates a render pass command list object. */
AsdGxCommandList *asdGxCommandListCreate(void)
{
    AsdGxCommandList *list = (AsdGxCommandList *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(AsdGxCommandList), 1);

    list->id = DAT_005b3ff0;
    return list;
}

} /* extern "C" */
