#include "common.h"
#include "nn/svc.h"
#include "nn/Result.h"
extern "C" {
extern u32 DAT_005c0b4c;
extern const char DAT_00537f2b[];
extern u32 g_y2rTransferEvent;
void FUN_0043a670(u32 *handle, const char *service);
void FUN_0043a844(s32 mode);
void conversionReplaceEventHandle(u32 *event);
void FUN_002e3140(s32 result);
/* Opens the conversion service, requests its event and waits for completion. */
void FUN_00425f68()
{
    FUN_0043a670(&DAT_005c0b4c, DAT_00537f2b);
    FUN_0043a844(1);
    conversionReplaceEventHandle(&g_y2rTransferEvent);
    s32 result = nn::svc::ClearEvent(g_y2rTransferEvent);
    if (nnResultIsFailure(result))
        FUN_002e3140(result);
}
}
