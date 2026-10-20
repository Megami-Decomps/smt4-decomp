/* NON_MATCHING: the retail build has a stripped debug call (file/line setup + nop) before the allocation. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* operator new: `size` bytes from the main heap. */
void *asdOperatorNew(u32 size)
{
    return asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, size, 1);
}

} /* extern "C" */
