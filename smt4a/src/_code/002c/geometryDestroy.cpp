#include "shard/W6_W6Match2_GeometryResources.h"

extern "C" {
void FUN_002ce8b0(void* special);
void asdOperatorDelete(void* memory);
void asdTextureRelease(AsdTexture* texture);
void asdMemFree(void* memory);

// Release the geometry's special or paired buffers, its texture, and the geometry itself.
void geometryDestroy(GeometryResources* geometry)
{
    if ((geometry->flags & 0x200) != 0 && geometry->special != NULL) {
        FUN_002ce8b0(geometry->special);
    } else {
        bufferReleaseOwnedPair(geometry->buffers);
        if (geometry->buffers != NULL) {
            asdOperatorDelete(bufferDestroyOwnedPair(geometry->buffers));
        }
    }
    if (geometry->texture != NULL) {
        asdTextureRelease(geometry->texture);
    }
    asdMemFree(geometry);
}
}
