/* NON_MATCHING: retail waits with SVC 0x19, which is prohibited by the no-intrinsics rule. */
#include "common.h"
extern "C" {
extern u32 DAT_00471bac;
extern u32 g_y2rTransferEvent;
void FUN_003603f8(u32 *handle, const char *service);
void FUN_003605cc(s32 mode);
void conversionReplaceEventHandle(u32 *event);
s32 nn_svc_WaitSynchronization(u32 event);
void FUN_002c526c(s32 result);
/* Opens the conversion service, requests its event and waits for completion. */
void FUN_0035196c()
{
    FUN_003603f8(&DAT_00471bac, "y2r:u");
    FUN_003605cc(1);
    conversionReplaceEventHandle(&g_y2rTransferEvent);
    s32 result = nn_svc_WaitSynchronization(g_y2rTransferEvent);
    if (result < 0)
        FUN_002c526c(result);
}
}
