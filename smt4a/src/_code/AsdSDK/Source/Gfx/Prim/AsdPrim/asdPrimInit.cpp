#include "AsdSDK/Source/Gfx/Prim/AsdPrim.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void *memAlloc(int, int, int, u32 size, int align, int);

extern AsdPrimBuffers g_asdPrimBuffers;

/* Allocates both scratch buffers of `size` bytes and starts on the first. */
void asdPrimInit(u32 size)
{
    s32 i = 0;
    AsdPrimBuffers *prim = &g_asdPrimBuffers;

    do {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Prim\\AsdPrim.cpp", 387);
        prim->buf[i] = (u8 *)memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
        prim->used[i] = 0;
        i++;
    } while (i < 2);
    prim->current = 0;
    prim->size = size;
}

} /* extern "C" */
