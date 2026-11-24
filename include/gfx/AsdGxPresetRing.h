#ifndef GFX_ASDGXPRESETRING_H
#define GFX_ASDGXPRESETRING_H
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

/* The display buffer shown last: the one before `index` in the ring. */
static __inline u32 asdGxPresetPrevious(const AsdGxDisplayBuffers *ring)
{
    s32 previous = ring->index - 1;
    return previous < 0 ? ring->count - 1 : previous;
}
#endif
