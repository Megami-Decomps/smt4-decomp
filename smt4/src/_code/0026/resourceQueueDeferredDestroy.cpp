#include "common.h"

struct DeferredResource {
    s32 framesRemaining; // 0x00
    u32 handle; // 0x04
};

extern "C" {
extern DeferredResource DAT_004d92f0[64];

// Queue a resource handle for destruction after the requested number of frames.
void resourceQueueDeferredDestroy(u32 handle, s32 frames)
{
    DeferredResource *slot = NULL;
    for (s32 i = 0; i < 64; ++i) {
        DeferredResource *candidate = &DAT_004d92f0[i];
        if (candidate->handle == 0) {
            slot = candidate;
            break;
        }
    }
    slot->handle = handle;
    slot->framesRemaining = frames;
}
}
