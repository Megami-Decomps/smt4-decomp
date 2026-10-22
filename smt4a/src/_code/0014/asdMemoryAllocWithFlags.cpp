#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 region, u32 size, u32 option);

/* Selects the main or extra heap and allocation option from two flag bits. */
void *asdMemoryAllocWithFlags(u32 size, u32 flags)
{
    if (flags & 1) {
        if (flags & 2) {
            return asdMemoryAllocTracked(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, size, 0);
        }
        return asdMemoryAllocTracked(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, size, 1);
    }
    if (flags & 2) {
        return asdMemoryAllocTracked(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, size, 0);
    }
    return asdMemoryAllocTracked(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, size, 1);
}
}
