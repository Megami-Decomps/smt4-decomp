#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *asdMemoryAllocTracked(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Allocates a 16-byte block from the main heap. */
void *FUN_00143ae8(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\Gx\\AsdGxCommandList.cpp", 295);
    return asdMemoryAllocTracked(0x100, 0x100, 0, 0x10, 1);
}

} /* extern "C" */
