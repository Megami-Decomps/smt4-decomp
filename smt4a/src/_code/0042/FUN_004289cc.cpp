/* NON_MATCHING: Status tests and aggregate-return register allocation differ; the name is spilled through VFP. */
#include "classes/WindowStatus.h"
#include "nn/Result.h"
extern "C" {
nn::Result FUN_00427ac4(void*, u32);
WindowStatusResult FUN_004293b0(void*, void*, const void*, const char*);

WindowStatusResult FUN_004289cc(void* owner, void* request, const void* metadata, const char* name)
{
    nn::Result status = FUN_00427ac4(request, 1);
    if (!nnResultIsFailure(status)) {
        status = FUN_004283cc(owner);
    }
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    WindowStatusResult result = FUN_004293b0(owner, request, metadata, name);
    recordValidatePair(owner, result);
    return result;
}
}
