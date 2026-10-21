/* NON_MATCHING: enclosing-list lookup and current-entry address calculation are scheduled in the opposite order. */
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
extern AsdGxState g_asdGxState;
extern AsdGxCommandList *g_asdGxCommandListStack[];

void FUN_0017d920(u32 param, u32 *out);
void FUN_0017dd84(void);
void FUN_0017dfa8(u32 *a, u32 *b, u32 *c, u32 *d);
void asdGxCommandListRefreshCopy(AsdGxCommandList *list);
void nngxBindCmdlist(u32 cmdList);
void FUN_0017df1c(void);
void nngxGetError(void);
void asdModelResetCommandBuffer(void);
void FUN_0017db14(u32 cmdList, void *copy, u32 copySize);

/* Ends a command list. If another list is still open it becomes the active one again;
 * otherwise the list that was bound before is restored and, when `restoreCopy`, its saved state is replayed. */
void asdGxCommandListEnd(AsdGxCommandList *list, s32 restoreCopy, u32 unk08, u32 unk0c)
{
    AsdGxCommandList *outer;
    u32 bound;

    FUN_0017dd84();
    FUN_0017dfa8(&list->entries[list->entryCount].values[0], &list->entries[list->entryCount].values[1],
                 &list->entries[list->entryCount].values[2], &list->entries[list->entryCount].values[3]);
    list->state = ASD_GX_CMDLIST_SUSPENDED;
    asdGxCommandListRefreshCopy(list);
    list->entryCount++;
    g_asdGxState.depth--;
    if (g_asdGxState.depth != 0) {
        outer = g_asdGxCommandListStack[g_asdGxState.depth - 1];
        list->entries[outer->entryCount].values[0] = list->entries[list->entryCount].values[0];
        list->entries[outer->entryCount].values[1] = list->entries[list->entryCount].values[1];
        FUN_0017df1c();
        outer->state = ASD_GX_CMDLIST_ACTIVE;
    } else {
        asdModelResetCommandBuffer();
        nngxBindCmdlist(list->boundList);
        if (restoreCopy != 0 && list->entries[0].copy != NULL) {
            FUN_0017d920(0x207, &bound);
            FUN_0017db14(bound, list->entries[0].copy, list->entries[0].copySize);
            nngxGetError();
        }
    }
}

} /* extern "C" */
