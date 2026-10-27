#include "nn/Result.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

extern "C" {

// Tests module 0x4e results for the three recognized description ranges.
u32 resourceResultMatchesKnownRanges(const PackedResourceId* status)
{
    u32 result = legacyResourceIdRemap(status);
    if ((result & 0x3fc00) == (0x4e << 10)) {
        u32 description = nnResultDescription(result);
        if (description - 0xc0 < 0x40 || description - 0x140 < 0x40 ||
            description - 0x40 < 0x20) {
            return 1;
        }
    }
    return 0;
}
}
