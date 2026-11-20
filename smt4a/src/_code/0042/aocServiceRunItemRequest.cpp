/* NON_MATCHING: with its neighbours' cflags (-O3 -Otime --fpu=softvfp) only r7/r8 swap: retail keeps the count 1 in r8 and the parameters in r7. */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {
nn::Result FUN_00427ac4(void *request, u32 count);
WindowStatusResult FUN_00429580(void *owner, void *request, const ItemCodeInfo *items, u32 count, s32 mode);

/* Validates `count` requests and their owner, executes them, and returns the translated result. */
static __inline WindowStatusResult runRequests(void *owner, void *request, const ItemCodeInfo *items, u32 count)
{
    nn::Result status = FUN_00427ac4(request, count);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    status = queryFailureResultOrZero(owner);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    WindowStatusResult result = FUN_00429580(owner, request, items, count, 0);
    recordValidatePair(owner, result);
    return result;
}

/* Validates one request (for one item) and its owner, executes it, and returns the translated operation result. */
WindowStatusResult aocServiceRunItemRequest(void *owner, void *request, const ItemCodeInfo &item)
{
    return runRequests(owner, request, &item, 1);
}
}
