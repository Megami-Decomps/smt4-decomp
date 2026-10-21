#include "common.h"

extern "C" {
s32 jyoucyuGetTableEntry(s32 id);
s32 FUN_002d602c(u32 request);
/* Requests the resident entry if it is not already available. */
s32 FUN_00394720()
{
    if (jyoucyuGetTableEntry(1) != 0)
        return 1;
    return FUN_002d602c(0x6000001);
}
}
