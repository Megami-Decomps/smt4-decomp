/* NON_MATCHING: only the new used-count register differs (retail adds into r3, this build into r0). */
#include "AsdSDK/Source/Gfx/Prim/AsdPrim.h"

extern "C" {

extern AsdPrimBuffers g_asdPrimBuffers;

/* Hands out `size` bytes of the current scratch buffer. */
u8 *asdPrimAlloc(s32 size)
{
    s32 offset = g_asdPrimBuffers.used[g_asdPrimBuffers.current];
    u8 *block;

    if (offset & 0xf) {
        offset += offset % 16;
    }
    block = g_asdPrimBuffers.buf[g_asdPrimBuffers.current] + offset;
    g_asdPrimBuffers.used[g_asdPrimBuffers.current] = offset + size;
    return block;
}

} /* extern "C" */
