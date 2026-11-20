#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {
nn::Result FUN_00239fc4(void *request, u32 count);
WindowStatusResult FUN_003542c4(void *owner, void *request, const void *item, const char *contentCode);

/* Validates the request and service state, runs the item-code request, and validates the result. */
WindowStatusResult aocServiceRunItemCodeRequest(void *owner, void *request, const ItemCodeInfo &item, const char *contentCode)
{
    nn::Result status = FUN_00239fc4(request, 1);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    status = queryFailureResultOrZero(owner);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    WindowStatusResult result = FUN_003542c4(owner, request, &item, contentCode);
    recordValidatePair(owner, result);
    return result;
}
}
