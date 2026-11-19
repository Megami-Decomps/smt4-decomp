#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {
nn::Result FUN_00427ac4(void *archive, u32 mode);
WindowStatusResult FUN_00429210(void *file, void *archive, const u16 *path, u32 flags);

WindowStatusResult FUN_00428940(void *file, void *archive, const u16 *path, u32 flags)
{
    nn::Result status = FUN_00427ac4(archive, 1);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    status = queryFailureResultOrZero(file);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    WindowStatusResult result = FUN_00429210(file, archive, path, flags);
    recordValidatePair(file, result);
    return result;
}
}
