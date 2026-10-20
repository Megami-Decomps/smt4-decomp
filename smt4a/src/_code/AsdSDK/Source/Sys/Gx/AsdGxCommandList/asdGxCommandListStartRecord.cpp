#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
extern s32 g_asdGxState;
extern u32 g_asdGxCommandLists[2];

void FUN_0017d920(u32 param, u32 *out);
void nngxBindCmdlist(u32 cmdList);
void FUN_0019eafc(void);
u32 FUN_001960f0(void);

/* Starts recording into the current command list: remembers the list bound before it. */
void asdGxCommandListStartRecord(AsdGxCommandList *list)
{
    FUN_0017d920(0x207, &list->entries[0].values[1]);
    nngxBindCmdlist(g_asdGxCommandLists[g_asdGxState]);
    list->entries[0].values[2] = 1;
    FUN_0019eafc();
    list->id = FUN_001960f0();
    FUN_0019eafc();
}

} /* extern "C" */
