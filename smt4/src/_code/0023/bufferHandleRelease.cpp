/* NON_MATCHING: retail writes back the +0x10 state subobject address, then clears its +0x0c field; the field-based source uses two non-writeback stores. */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {
void asdMemFree(void *block);
void asdTextureRelease(AsdTexture *texture);
}

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
