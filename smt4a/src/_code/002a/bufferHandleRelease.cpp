/* NON_MATCHING: as in the IV twin bufferHandleRelease: retail writes back the +0x10 state address (str r5, [r4, #16]!)
 * and clears the +0x1C field through it with its own zero (mov r0, #0); the build stores both through r4 with the
 * shared zero. */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" void asdMemFree(void *allocation);
extern "C" void asdTextureRelease(void *texture);

/* Release both owned resources and clear the buffer handle's state. */
extern "C" s32 bufferHandleRelease(u32 handle)
{
    if (handle == 0) {
        return 0;
    }
    AsdBufferHandle *entry = (AsdBufferHandle *)handle;
    if (entry->buffer != NULL) {
        asdMemFree(entry->buffer);
        entry->buffer = NULL;
    }
    if (entry->texture != NULL) {
        asdTextureRelease(entry->texture);
        entry->texture = NULL;
    }
    entry->active = 0;
    entry->flags = 0;
    return 0;
}
