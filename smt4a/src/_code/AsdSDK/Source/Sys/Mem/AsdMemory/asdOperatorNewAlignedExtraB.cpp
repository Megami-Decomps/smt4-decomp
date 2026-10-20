/* NON_MATCHING: the retail build has a stripped debug call (file/line setup + nop) before the allocation. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
void *asdMemoryAllocAligned(int heap, int alignClass, int unk08, u32 size, u32 align, int fromFront);

/* Aligned operator new: `size` bytes from the ASD_HEAP_EXTRA heap at the given alignment (`unused` is ignored). */
void *asdOperatorNewAlignedExtraB(void *unused, u32 size, u32 align)
{
    return asdMemoryAllocAligned(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, size, align, 1);
}

} /* extern "C" */
