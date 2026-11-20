#include "classes/WindowStatus.h"
#include "nn/Result.h"
extern "C" {
nn::Result FUN_00427ac4(void*, u32);
WindowStatusResult FUN_004293b0(void*, void*, const void*, const char*);

WindowStatusResult aocServiceRunItemCodeRequest(void *owner, void *request, const ItemCodeInfo &item, const char *contentCode)
{
    nn::Result status = FUN_00427ac4(request, 1);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    status = queryFailureResultOrZero(owner);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    WindowStatusResult result = FUN_004293b0(owner, request, &item, contentCode);
    recordValidatePair(owner, result);
    return result;
}
}
