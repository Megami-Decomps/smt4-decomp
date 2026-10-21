/* NON_MATCHING: retail waits with SVC 0x19, which is prohibited by the no-intrinsics rule. */
#include "common.h"
extern "C" {
extern u32 DAT_005c0b4c;
extern u32 g_y2rTransferEvent;
void FUN_0043a670(u32 *handle, const char *service);
void FUN_0043a844(s32 mode);
void FUN_0043a7e8(u32 *event);
s32 nn_svc_WaitSynchronization(u32 event);
void FUN_002e3140(s32 result);
/* Opens the conversion service, requests its event and waits for completion. */
void FUN_00425f68()
{
    FUN_0043a670(&DAT_005c0b4c, "y2r:u");
    FUN_0043a844(1);
    FUN_0043a7e8(&g_y2rTransferEvent);
    s32 result = nn_svc_WaitSynchronization(g_y2rTransferEvent);
    if (result < 0)
        FUN_002e3140(result);
}
}
