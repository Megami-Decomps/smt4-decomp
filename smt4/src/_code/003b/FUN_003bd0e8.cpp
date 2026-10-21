/* NON_MATCHING: retail grouped bit tests or aggregate-copy runtime selection differs. */
#include "common.h"
/* Reports any supported flag pair or the remaining special flags. */
extern "C" s32 FUN_003bd0e8(u32 flags)
{
    if (flags & (2 | 32)) return 1;
    if (flags & (64 | 128)) return 1;
    if (flags & (256 | 512)) return 1;
    return (flags & (1024 | 4 | 8)) != 0;
}
