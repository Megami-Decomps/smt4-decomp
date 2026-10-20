#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *asdMemoryAllocAligned(int heap, int alignClass, int unk08, u32 size, u32 align, int fromFront);

/* Aligned operator new: `size` bytes from the ASD_HEAP_MAIN heap at the given alignment (`unused` is ignored). */
void *asdOperatorNewAligned(void *unused, u32 size, u32 align)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Sys\\Mem\\AsdMemory.cpp", 79);
    return asdMemoryAllocAligned(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, size, align, 1);
}

} /* extern "C" */
