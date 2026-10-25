/* NON_MATCHING: the sign-mask failure tests now match; retail keeps the zero argument in saved r6 across the first call. */
#include "nn/Result.h"

struct ArchiveDestination;

extern "C" s32 FUN_0042a16c(ArchiveDestination *, u32, u32, u32);

// Try the preferred archive kind, then its fallback, mapping a double failure to a fixed result.
extern "C" s32 FUN_00429e14(ArchiveDestination *destination, u32 identifier)
{
    u32 flags = 0;
    s32 result = FUN_0042a16c(destination, 2, identifier, flags);
    if ((s32)(result & 0x80000000) < 0) {
        result = FUN_0042a16c(destination, 1, identifier, flags);
        if ((s32)(result & 0x80000000) < 0)
            result = (s32)0xc8804464;
    }
    return result;
}
