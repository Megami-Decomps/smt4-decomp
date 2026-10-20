#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
extern AsdGxState g_asdGxState;

void asdGxCommandListSetNewListId(u32 cmdList)
{
    g_asdGxState.newListId = cmdList;
}

} /* extern "C" */
