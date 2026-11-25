/* NON_MATCHING: the extended block's 0xD0 stride uses an MLA in retail and shift-adds here. */
#include "shard/ModelWorkSize.h"

/* Sizes the model work allocation, including its optional sections. */
extern "C" u32 FUN_0045ab0c(const ModelWorkSize *settings)
{
    u32 extended = 0;
    if (settings->extendedEnabled) {
        const u32 alignedEntries = (settings->entryCount + 15) & ~15u;
        extended = ((alignedEntries + settings->countB * 0xd0) * 2 +
                    settings->countB * 4) * 2 + settings->countB * 0x100 + 100;
    }
    u32 bytes = (settings->countA + 1) * 0x6c +
                settings->countB * 0x278 + settings->countC * 0x218 + extended;
    if (settings->extraEnabled)
        bytes += 0x1d0;
    return bytes;
}
