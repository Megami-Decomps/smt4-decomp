/* NON_MATCHING: failure tests use shifts and immediate zero arguments rather than retail's sign masks and saved zero. */
#include "nn/Result.h"

struct ArchiveDestination;

extern "C" s32 FUN_0042a16c(ArchiveDestination *, u32, u32, u32);

// Try the preferred archive kind, then its fallback, mapping a double failure to a fixed result.
extern "C" s32 FUN_00429e14(ArchiveDestination *destination, u32 identifier)
{
    s32 result = FUN_0042a16c(destination, 2, identifier, 0);
    if (nnResultIsFailure(result)) {
        result = FUN_0042a16c(destination, 1, identifier, 0);
        if (nnResultIsFailure(result))
            result = (s32)0xc8804464;
    }
    return result;
}
