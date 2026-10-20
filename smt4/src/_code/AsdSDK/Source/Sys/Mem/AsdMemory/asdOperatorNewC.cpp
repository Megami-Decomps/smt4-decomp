#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

#include "AsdSDK/AsdDebug.h"

extern "C" {
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* operator new: `size` bytes from the main heap. */
void *asdOperatorNewC(u32 size)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Sys\\Mem\\AsdMemory.cpp", 120);
    return asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, size, 1);
}

} /* extern "C" */
