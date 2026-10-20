#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_004099b8[]; /* AsdGxCommandList.cpp: __FILE__ */
extern AsdGxState g_asdGxState;

void *asdMemAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Creates a render pass command list object. */
AsdGxCommandList *asdGxCommandListCreate(void)
{
    asdDebugTrace(DAT_004099b8, 431);
    AsdGxCommandList *list = (AsdGxCommandList *)asdMemAlloc(0x100, 0x100, 0, sizeof(AsdGxCommandList), 1);

    list->id = g_asdGxState.newListId;
    return list;
}

} /* extern "C" */
