#include "AsdSDK/Source/Gfx/Prim/AsdPrim.h"

extern "C" {

extern AsdPrimBuffers g_asdPrimBuffers;

/* Hands out `size` bytes of the current scratch buffer. */
u8 *asdPrimAlloc(s32 size)
{
    AsdPrimBuffers *prim = &g_asdPrimBuffers;
    s32 offset = prim->used[prim->current];

    if (offset & 0xf) {
        offset += offset % 16;
    }
    u8 *block = prim->buf[prim->current] + offset;
    prim->used[prim->current] = offset + size;
    return block;
}

} /* extern "C" */
