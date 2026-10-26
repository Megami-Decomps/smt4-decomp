#include "common.h"
static bool flagIsSet(u32 flags, u32 flag)
{
    return (flags & flag) != 0;
}
/* Reports any supported flag pair or the remaining special flags. */
extern "C" s32 FUN_003bd0e8(u32 flags)
{
    if (flagIsSet(flags, 2) || flagIsSet(flags, 32)) return 1;
    if (flagIsSet(flags, 64) || flagIsSet(flags, 128)) return 1;
    if (flagIsSet(flags, 256) || flagIsSet(flags, 512)) return 1;
    return flagIsSet(flags, 1024) || flagIsSet(flags, 4) || flagIsSet(flags, 8);
}
