/* NON_MATCHING: retail saves only LR; the compiler adds R4 to maintain call-stack alignment. */
#include "nn/Result.h"

extern "C" {
u32 legacyResourceIdRemap(const u32* result);

// Tests module 0x4e results for the three recognized description ranges.
u32 FUN_001d10c0(const u32* status)
{
    u32 result = legacyResourceIdRemap(status);
    if (nnResultModule(result) == 0x4e) {
        u32 description = nnResultDescription(result);
        if (description - 0xc0 < 0x40 || description - 0x140 < 0x40 ||
            description - 0x40 < 0x20) {
            return 1;
        }
    }
    return 0;
}
}
