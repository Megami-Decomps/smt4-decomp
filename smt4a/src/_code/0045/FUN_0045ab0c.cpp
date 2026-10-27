/* NON_MATCHING: the extended-block size now follows retail's nested shift chain; retail multiplies the 0xd0 element size with MLA from a register where armcc here uses shift-adds. */
#include "shard/ModelWorkSize.h"

// Calculate the variable work allocation, including optional extended and extra blocks.
extern "C" u32 FUN_0045ab0c(const ModelWorkSize *settings)
{
    u32 extended = 0;
    if (settings->extendedEnabled)
        extended = ((((settings->entryCount + 15) & ~15u) + settings->countB * 0xd0) * 2 +
                    settings->countB * 4) * 2 + settings->countB * 0x100 + 100;
    u32 bytes = (settings->countA + 1) * 0x6c +
                settings->countB * 0x278 + settings->countC * 0x218 + extended;
    if (settings->extraEnabled)
        bytes += 0x1d0;
    return bytes;
}
