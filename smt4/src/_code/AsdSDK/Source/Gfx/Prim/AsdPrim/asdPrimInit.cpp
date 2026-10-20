/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 31 vs built 26 rows, 30 diff lines. */
#include "AsdSDK/Source/Gfx/Prim/AsdPrim.h"

extern "C" {

void *memAlloc(int, int, int, u32 size, int align, int);

extern AsdPrimBuffers g_asdPrimBuffers;

/* Allocates both scratch buffers of `size` bytes and starts on the first. */
void asdPrimInit(u32 size)
{
    s32 i = 0;

    do {
        g_asdPrimBuffers.buf[i] = (u8 *)memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
        g_asdPrimBuffers.used[i] = 0;
        i++;
    } while (i < 2);
    g_asdPrimBuffers.current = 0;
    g_asdPrimBuffers.size = size;
}

} /* extern "C" */
