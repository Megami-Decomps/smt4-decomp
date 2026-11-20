#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
extern AsdGxState g_asdGxState;
extern AsdGxCommandList *g_asdGxCommandListStack[];

void gxGetCommandListParameter(u32 param, u32 *out);
void asdGxCommandBufferTerminateAndSubmit(void);
void asdGxCommandBufferPadAndGetRanges(u32 *first, u32 *second, u32 *third, u32 *fourth);
void asdGxCommandListRefreshCopy(AsdGxCommandList *list);
void nngxBindCmdlist(u32 cmdList);
void asdGxCommandBufferPadAndRecordSize(void);
void nngxGetError(void);
void asdModelResetCommandBuffer(void);
void nngxImportCmdlist(u32 cmdList, void *copy, u32 copySize);

/* Ends a command list. If another list is still open it becomes the active one again;
 * otherwise the list that was bound before is restored and, when `restoreCopy`, its saved state is replayed. */
void asdGxCommandListEnd(AsdGxCommandList *list, s32 restoreCopy)
{
    AsdGxCommandList *outer;
    u32 bound;

    asdGxCommandBufferTerminateAndSubmit();
    asdGxCommandBufferPadAndGetRanges(&list->entries[list->entryCount].values[0], &list->entries[list->entryCount].values[1],
                 &list->entries[list->entryCount].values[2], &list->entries[list->entryCount].values[3]);
    list->state = ASD_GX_CMDLIST_SUSPENDED;
    asdGxCommandListRefreshCopy(list);
    list->entryCount++;
    g_asdGxState.depth--;
    if (g_asdGxState.depth != 0) {
        s32 depth = g_asdGxState.depth;
        outer = g_asdGxCommandListStack[depth - 1];
        list->entries[outer->entryCount].values[0] = list->entries[list->entryCount].values[0];
        list->entries[outer->entryCount].values[1] = list->entries[list->entryCount].values[1];
        asdGxCommandBufferPadAndRecordSize();
        outer->state = ASD_GX_CMDLIST_ACTIVE;
    } else {
        asdModelResetCommandBuffer();
        nngxBindCmdlist(list->boundList);
        if (restoreCopy != 0 && list->entries[0].copy != NULL) {
            gxGetCommandListParameter(ASD_GX_CMDLIST_BINDING, &bound);
            nngxImportCmdlist(bound, list->entries[0].copy, list->entries[0].copySize);
            nngxGetError();
        }
    }
}

} /* extern "C" */
