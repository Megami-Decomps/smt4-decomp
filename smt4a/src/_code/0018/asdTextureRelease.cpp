/* NON_MATCHING: retail decrements/returns before saving registers; compiler saves first (-O2 shrink-wrapping candidate). */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {
void asdMemFree(void *);

// Drop a reference and release owned backing storage when the last owner leaves.
void asdTextureRelease(AsdTexture *texture)
{
    if (--texture->refCount != 0)
        return;
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
}
