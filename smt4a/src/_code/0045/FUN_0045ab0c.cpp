/* NON_MATCHING: extended-block constant multiplication uses MUL rather than the retail shift/MLA chain. */
#include "shard/ModelWorkSize.h"

// Calculate the variable work allocation, including optional extended and extra blocks.
extern "C" u32 FUN_0045ab0c(const ModelWorkSize *settings)
{
    u32 extended = 0;
    if (settings->extendedEnabled)
        extended = settings->countB * 0x448 +
                   ((settings->entryCount + 15) & ~15u) * 4 + 100;
    u32 bytes = (settings->countA + 1) * 0x6c +
                settings->countB * 0x278 + settings->countC * 0x218 + extended;
    if (settings->extraEnabled)
        bytes += 0x1d0;
    return bytes;
}
