/* NON_MATCHING: deferred release table base/result registers and prologue load order differ from retail. */
#include "common.h"

struct DeferredEffectRelease {
    u32 mode; // 0x00
    u32 handle; // 0x04
};

extern "C" {
extern DeferredEffectRelease g_deferredEffectReleases[64];

static __inline DeferredEffectRelease *findReleaseSlot()
{
    DeferredEffectRelease *freeEntry = NULL;
    for (s32 index = 0; index < 64; ++index) {
        DeferredEffectRelease *entry = &g_deferredEffectReleases[index];
        if (entry->handle == 0) {
            freeEntry = entry;
            break;
        }
    }
    return freeEntry;
}

// Queue an effect handle for deferred release.
void asdEffectQueueRelease(u32 handle, u32 mode)
{
    DeferredEffectRelease *entry = findReleaseSlot();
    entry->handle = handle;
    entry->mode = mode;
}
}
