#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "AsdSDK/asdGxCommandListBegin.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern const char g_asdGxCommandListSourcePath[]; /* __FILE__ */
extern AsdGxCommandList *g_asdGxCommandListStack[]; /* lists begun and not yet ended, innermost last */

/* The double-buffering globals: the index of the list being recorded, the nngx list new
 * AsdGxCommandLists start with, the depth of the stack, and the two nngx command lists. */
s32 g_asdGxState;
u32 g_asdGxNewListId;
s32 g_asdGxListDepth;
u32 g_asdGxCommandLists[2];

void FUN_002bc7f4(u32 param, u32 *out);
void FUN_002bdb48(void);
void FUN_001376d8(u32 *a, u32 *b, u32 *c, u32 *d);
void asdGxCommandListRefreshCopy(AsdGxCommandList *list);
void nngxBindCmdlist(u32 cmdList);
void FUN_0013764c(void);
void nngxGetError(void);
void asdModelResetCommandBuffer(void);
u32 FUN_002b7148(void);
void FUN_002af390(u32 begin, u32 end);

/* Flips between the two command lists. */
void asdGxCommandListFlip(void)
{
    g_asdGxState = 1 - g_asdGxState;
}

/* Binds the command list that is not being recorded. */
void asdGxCommandListBindBack(void)
{
    nngxBindCmdlist(g_asdGxCommandLists[g_asdGxState ^ 1]);
    asdModelResetCommandBuffer();
}

/* Installs the two nngx command lists and starts recording into the first. */
void asdGxCommandListSetLists(const u32 *cmdLists)
{
    g_asdGxState = 0;
    g_asdGxCommandLists[0] = cmdLists[0];
    g_asdGxCommandLists[1] = cmdLists[1];
}

void asdGxCommandListSetNewListId(u32 cmdList)
{
    g_asdGxNewListId = cmdList;
}

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

/* Creates a render pass command list object. */
AsdGxCommandList *asdGxCommandListCreate(void)
{
    asdDebugTrace(g_asdGxCommandListSourcePath, 431);
    AsdGxCommandList *list = (AsdGxCommandList *)asdMemAlloc(0x100, 0x100, 0, sizeof(AsdGxCommandList), 1);

    list->id = g_asdGxNewListId;
    return list;
}

/* Begins a command list: the list that was running is suspended (its state saved), then this one is
 * bound and pushed on the stack. */
void asdGxCommandListBegin(AsdGxCommandList *list)
{
    AsdGxCommandList *outer;

    FUN_002bc7f4(0x207, &list->boundList);
    if (g_asdGxListDepth != 0) {
        outer = g_asdGxCommandListStack[g_asdGxListDepth - 1];
        FUN_002bdb48();
        FUN_001376d8(&outer->entries[outer->entryCount].values[0], &outer->entries[outer->entryCount].values[1],
                     &outer->entries[outer->entryCount].values[2], &outer->entries[outer->entryCount].values[3]);
        outer->state = ASD_GX_CMDLIST_SUSPENDED;
        asdGxCommandListRefreshCopy(outer);
        outer->entryCount++;
    }
    list->entryCount = 0;
    nngxBindCmdlist(list->id);
    FUN_0013764c();
    list->state = ASD_GX_CMDLIST_ACTIVE;
    g_asdGxCommandListStack[g_asdGxListDepth] = list;
    g_asdGxListDepth++;
    nngxGetError();
}

} /* extern "C" */
