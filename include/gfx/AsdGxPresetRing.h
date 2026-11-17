#ifndef GFX_ASDGXPRESETRING_H
#define GFX_ASDGXPRESETRING_H
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

/* The display buffer shown last: the one before `index` in the ring. */
static inline u32 asdGxPresetPrevious(const AsdGxDisplayBuffers* ring)
{
    s32 previous = ring->index - 1;
    if (previous < 0)
        previous = ring->count - 1;
    return previous;
}
#endif
