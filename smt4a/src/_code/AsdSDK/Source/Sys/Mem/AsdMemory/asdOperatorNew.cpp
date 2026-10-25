#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char g_asdMemorySourcePath[]; /* "c:\SMT4F\SMT4F\AsdSDK\Source\Sys\Mem\AsdMemory.cpp": __FILE__ */

void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* operator new: `size` bytes from the main heap. Retail callers also pass an owner tag in the second
 * argument; the allocator does not read it. */
void *asdOperatorNew(u32 size, const void *owner)
{
    asdDebugTrace(g_asdMemorySourcePath, 1304);
    return asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, size, 1);
}

} /* extern "C" */
