#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Sys/Mem/AsdOperatorNewB.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* operator new[]: `size` bytes from the main heap; the owner hint is unused. */
void *asdOperatorNewB(u32 size, void *owner)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Sys\\Mem\\AsdMemory.cpp", 189);
    return asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, size, 1);
}

} /* extern "C" */
