#include "common.h"

extern "C" {
s32 jyoucyuGetTableEntry(s32 id);
s32 FUN_003418c0(u32 request);
/* Requests the resident entry if it is not already available. */
s32 jyoucyuEnsureResidentEntry()
{
    if (jyoucyuGetTableEntry(1) != 0)
        return 1;
    return FUN_003418c0(0x6000001);
}
}
