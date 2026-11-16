/* NON_MATCHING: the archive id is the callee's 64-bit argument (r2:r3), so its zero high word now lives in a saved register as in retail; only r5/r6 are swapped between the destination and that high word. */
#include "nn/Result.h"

struct ArchiveDestination;

extern "C" s32 FUN_0042a16c(ArchiveDestination *destination, u32 kind, u64 identifier);

// Try the preferred archive kind, then its fallback, mapping a double failure to a fixed result.
extern "C" s32 FUN_00429e14(ArchiveDestination *destination, u32 identifier)
{
    u64 archiveId = identifier;
    s32 result = FUN_0042a16c(destination, 2, archiveId);
    if ((s32)(result & 0x80000000) < 0) {
        result = FUN_0042a16c(destination, 1, archiveId);
        if ((s32)(result & 0x80000000) < 0)
            result = (s32)0xc8804464;
    }
    return result;
}
