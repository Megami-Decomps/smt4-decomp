/* NON_MATCHING: port of smt4a twin; only saved-register numbering of owner/request/item/count differs. */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {
nn::Result FUN_00239fc4(void *request, u32 count);
WindowStatusResult FUN_00354450(void *owner, void *request, const ItemCodeInfo *items, u32 count);

/* Validates `count` requests and their owner, executes them, and returns the translated result. */
static __inline WindowStatusResult runRequests(void *owner, void *request, const ItemCodeInfo *items, u32 count)
{
    nn::Result status = FUN_00239fc4(request, count);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    status = queryFailureResultOrZero(owner);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    WindowStatusResult result = FUN_00354450(owner, request, items, count);
    recordValidatePair(owner, result);
    return result;
}

/* Validates one request (for one item) and its owner, executes it, and returns the translated operation result. */
WindowStatusResult aocServiceRunItemRequest(void *owner, void *request, const ItemCodeInfo &item)
{
    return runRequests(owner, request, &item, 1);
}
}
