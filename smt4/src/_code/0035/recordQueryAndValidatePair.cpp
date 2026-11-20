#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {
WindowStatusResult FUN_00353fd8(const void *owner);

// Fetch and validate an owner's result, translating preliminary SDK failures.
WindowStatusResult recordQueryAndValidatePair(void *owner)
{
    nn::Result status = queryFailureResultOrZero(owner);
    if (nnResultIsFailure(status))
        return WindowStatusResult(static_cast<u32>(status));
    WindowStatusResult value = FUN_00353fd8(owner);
    recordValidatePair(owner, value);
    return value;
}
}
