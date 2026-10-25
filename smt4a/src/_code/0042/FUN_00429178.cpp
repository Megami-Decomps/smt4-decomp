/* NON_MATCHING: Native result construction uses a merged failure path and a different saved-register frame. */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {
s32 FUN_00427ac4(void *request, u32 count);
WindowStatusResult FUN_00429580(void *owner, void *request, void *parameters, u32 count, s32 mode);

/* Validates one request and its owner, executes it, and returns the translated operation result. */
WindowStatusResult FUN_00429178(void *owner, void *request, void *parameters)
{
    s32 status = FUN_00427ac4(request, 1);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(static_cast<u32>(status));
    }
    status = FUN_004283cc(owner);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(static_cast<u32>(status));
    }
    WindowStatusResult result = FUN_00429580(owner, request, parameters, 1, 0);
    recordValidatePair(owner, result);
    return result;
}
}
