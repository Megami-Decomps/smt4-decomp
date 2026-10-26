#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern const char g_asdGxCommandListSourcePath[]; /* AsdGxCommandList.cpp: __FILE__ */
extern AsdGxState g_asdGxState;


/* Creates a render pass command list object. */
AsdGxCommandList *asdGxCommandListCreate(void)
{
    asdDebugTrace(g_asdGxCommandListSourcePath, 431);
    AsdGxCommandList *list = (AsdGxCommandList *)asdMemAlloc(0x100, 0x100, 0, sizeof(AsdGxCommandList), 1);

    list->id = g_asdGxState.newListId;
    return list;
}

} /* extern "C" */
