#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 fromFront);

/* Allocates from the default heap after the source-location debug hook. */
void *FUN_00178b04(u32 size, const char *file, u32 line)
{
    asdDebugTrace(file, line);
    return asdMemoryAlloc(256, 256, 0, size, 1);
}
}
