/* NON_MATCHING: compiler addresses g_asdGxState separately rather than deriving it from the command-list table. */
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
extern s32 g_asdGxState;
extern u32 g_asdGxCommandLists[2];

void FUN_002bc7f4(u32 param, u32 *out);
void nngxBindCmdlist(u32 cmdList);
u32 FUN_002b7148(void);
void FUN_002af390(u32 begin, u32 end);

/* Starts recording into the current command list: remembers the list bound before it. */
void asdGxCommandListStartRecord(AsdGxCommandList *list)
{
    FUN_002bc7f4(0x207, &list->entries[0].values[1]);
    nngxBindCmdlist(g_asdGxCommandLists[g_asdGxState]);
    list->entries[0].values[2] = 1;
    u32 cursor = FUN_002b7148();
    FUN_002af390(cursor, cursor);
    list->id = FUN_002b7148();
}

} /* extern "C" */
