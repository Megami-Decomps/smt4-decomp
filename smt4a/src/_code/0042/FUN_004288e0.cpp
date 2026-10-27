#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {
WindowStatusResult FUN_00429048(const u32 *token, const char *name);

// Fetch and validate an owner's result, translating preliminary SDK failures.
WindowStatusResult FUN_004288e0(void *owner)
{
    nn::Result status = FUN_004283cc(owner);
    if (nnResultIsFailure(status))
        return WindowStatusResult(static_cast<u32>(status));
    WindowStatusResult value = FUN_00429048(static_cast<const u32 *>(owner), NULL);
    recordValidatePair(owner, value);
    return value;
}
}
