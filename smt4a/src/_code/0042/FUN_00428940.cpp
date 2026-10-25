/* NON_MATCHING: failure tests retain different values, and the flags argument is saved in VFP storage. */
#include "classes/WindowStatus.h"
#include "nn/Result.h"

extern "C" {
u32 FUN_00427ac4(void *archive, u32 mode);
WindowStatusResult FUN_00429210(void *file, void *archive, const u16 *path, u32 flags);

WindowStatusResult FUN_00428940(void *file, void *archive, const u16 *path, u32 flags)
{
    u32 status = FUN_00427ac4(archive, 1);
    if (nnResultIsSuccess(status)) {
        status = FUN_004283cc(file);
    }
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(status);
    }
    WindowStatusResult result = FUN_00429210(file, archive, path, flags);
    recordValidatePair(file, result);
    return result;
}
}
