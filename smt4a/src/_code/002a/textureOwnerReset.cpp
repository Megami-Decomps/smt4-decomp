/* NON_MATCHING: final embedded-state clears use one cached zero instead of retail's two registers. */
#include "common.h"

struct TextureCallbackOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *texture;
    /* 0x0C */ void *allocation;
    /* 0x10 */ u32 active;
    /* 0x14 */ u8 unk14[8];
    /* 0x1C */ u32 count;
};

extern "C" void asdMemFree(void *allocation);
extern "C" void asdTextureRelease(void *texture);

/* Release both resources and clear the owner's state. */
extern "C" void textureOwnerReset(TextureCallbackOwner *owner)
{
    if (owner == NULL)
        return;
    if (owner->allocation != NULL) {
        asdMemFree(owner->allocation);
        owner->allocation = NULL;
    }
    if (owner->texture != NULL) {
        asdTextureRelease(owner->texture);
        owner->texture = NULL;
    }
    owner->active = 0;
    owner->count = 0;
}
