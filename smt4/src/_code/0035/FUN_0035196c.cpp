#include "common.h"
#include "nn/svc.h"
#include "nn/Result.h"
extern "C" {
extern const char DAT_004091b0[];
extern u32 DAT_00471bac;
extern u32 g_y2rTransferEvent;
void FUN_003603f8(u32 *handle, const char *service);
void FUN_003605cc(s32 mode);
void conversionReplaceEventHandle(u32 *event);
void FUN_002c526c(s32 result);
/* Opens the conversion service, requests its event and waits for completion. */
void FUN_0035196c()
{
    FUN_003603f8(&DAT_00471bac, DAT_004091b0);
    FUN_003605cc(1);
    conversionReplaceEventHandle(&g_y2rTransferEvent);
    s32 result = nn::svc::ClearEvent(g_y2rTransferEvent);
    if (nnResultIsFailure(result))
        FUN_002c526c(result);
}
}
