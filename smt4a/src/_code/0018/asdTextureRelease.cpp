#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {
void asdMemFree(void *);

// Free the texture's owned storage and then the texture itself.
static __inline void asdTextureDestroy(AsdTexture *texture)
{
    if (texture->storage.pixels != NULL && (texture->storage.flags & 0x10) == 0) {
        asdMemFree(texture->storage.pixels);
        texture->storage.pixels = NULL;
    }
    if (texture->auxiliaryData != NULL) {
        asdMemFree(texture->auxiliaryData);
        texture->auxiliaryData = NULL;
    }
    asdMemFree(texture);
}

// Drop a reference and destroy the texture when the last owner leaves.
void asdTextureRelease(AsdTexture *texture)
{
    if (--texture->refCount != 0)
        return;
    asdTextureDestroy(texture);
}
}
