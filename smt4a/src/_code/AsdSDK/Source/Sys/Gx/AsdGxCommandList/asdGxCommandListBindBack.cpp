#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
extern AsdGxState g_asdGxState;
extern u32 g_asdGxCommandLists[2]; /* the two nngx command lists */

void FUN_0017cff0(u32 cmdList);
void FUN_0016117c(void);

/* Binds the command list that is not being recorded. */
void asdGxCommandListBindBack(void)
{
    FUN_0017cff0(g_asdGxCommandLists[g_asdGxState.current ^ 1]);
    FUN_0016117c();
}

} /* extern "C" */
