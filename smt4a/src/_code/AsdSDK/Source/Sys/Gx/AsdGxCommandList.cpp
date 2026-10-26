#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_Smt4a.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern AsdGxCommandList *g_asdGxCommandListStack[]; /* lists begun and not yet ended, innermost last */

/* The double-buffering globals: the index of the list being recorded, the nngx list new
 * AsdGxCommandLists start with, the depth of the stack, and the two nngx command lists. */
s32 g_asdGxState;
u32 g_asdGxNewListId;
s32 g_asdGxListDepth;
u32 g_asdGxCommandLists[2];

void gxGetCommandListParameter(u32 param, u32 *out);
void FUN_0017dd84(void);
void FUN_0017dfa8(u32 *a, u32 *b, u32 *c, u32 *d);
void asdGxCommandListRefreshCopy(AsdGxCommandList *list);
void nngxBindCmdlist(u32 cmdList);
void FUN_0017df1c(void);
void nngxGetError(void);
void asdModelResetCommandBuffer(void);
u32 asdGxGetCommandCursor(void);
void asdModelCommitCommandRange(u32 begin, u32 end);
void *asdMemoryAllocTracked(s32 heap, s32 alignClass, s32 flags,
                            u32 size, s32 fromFront);

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
    gxGetCommandListParameter(0x207, &list->entries[0].values[1]);
    nngxBindCmdlist(g_asdGxCommandLists[g_asdGxState]);
    list->entries[0].values[2] = 1;
    u32 cursor = asdGxGetCommandCursor();
    asdModelCommitCommandRange(cursor, cursor);
    list->id = asdGxGetCommandCursor();
}

/* Begins a command list: the list that was running is suspended (its state saved), then this one is
 * bound and pushed on the stack. */
void asdGxCommandListBegin(AsdGxCommandList *list)
{
    AsdGxCommandList *outer;

    gxGetCommandListParameter(0x207, &list->boundList);
    if (g_asdGxListDepth != 0) {
        outer = g_asdGxCommandListStack[g_asdGxListDepth - 1];
        FUN_0017dd84();
        FUN_0017dfa8(&outer->entries[outer->entryCount].values[0], &outer->entries[outer->entryCount].values[1],
                     &outer->entries[outer->entryCount].values[2], &outer->entries[outer->entryCount].values[3]);
        outer->state = ASD_GX_CMDLIST_SUSPENDED;
        asdGxCommandListRefreshCopy(outer);
        outer->entryCount++;
    }
    list->entryCount = 0;
    nngxBindCmdlist(list->id);
    FUN_0017df1c();
    list->state = ASD_GX_CMDLIST_ACTIVE;
    g_asdGxCommandListStack[g_asdGxListDepth] = list;
    g_asdGxListDepth++;
    nngxGetError();
}

AsdGxCommandList *asdGxCommandListCreate(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\Gx\\AsdGxCommandList.cpp", 431);
    AsdGxCommandList *list = static_cast<AsdGxCommandList *>(
        asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(AsdGxCommandList), 1));

    list->id = g_asdGxNewListId;
    return list;
}

} /* extern "C" */
