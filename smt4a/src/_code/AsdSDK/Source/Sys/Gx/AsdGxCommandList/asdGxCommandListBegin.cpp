#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
extern AsdGxState g_asdGxState;
extern AsdGxCommandList *g_asdGxCommandListStack[]; /* lists begun and not yet ended, innermost last */

void gxGetCommandListParameter(u32 param, u32 *out);
void FUN_0017dd84(void);
void FUN_0017dfa8(u32 *a, u32 *b, u32 *c, u32 *d);
void asdGxCommandListRefreshCopy(AsdGxCommandList *list);
void nngxBindCmdlist(u32 cmdList);
void FUN_0017df1c(void);
void nngxGetError(void);

/* Begins a command list: the list that was running is suspended (its state saved), then this one is
 * bound and pushed on the stack. */
void asdGxCommandListBegin(AsdGxCommandList *list)
{
    AsdGxCommandList *outer;

    gxGetCommandListParameter(0x207, &list->boundList);
    if (g_asdGxState.depth != 0) {
        outer = g_asdGxCommandListStack[g_asdGxState.depth - 1];
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
    g_asdGxCommandListStack[g_asdGxState.depth] = list;
    g_asdGxState.depth++;
    nngxGetError();
}

} /* extern "C" */
