#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdVramHeap g_asdVramHeapB; /* VRAM bank B */

/* Bytes still free in VRAM bank B. */
u32 asdVramBGetFreeBytes(void)
{
    return g_asdVramHeapB.freeBytes;
}

} /* extern "C" */
