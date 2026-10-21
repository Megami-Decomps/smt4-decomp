#include "shard/W6_W6Match2_GeometryResources.h"

extern "C" {
void FUN_00207470(void* special);
void asdMemFreeNonNull(void* memory);
void asdTextureRelease(AsdTexture* texture);
void asdMemFree(void* memory);

// Release the geometry's special or paired buffers, its texture, and the geometry itself.
void geometryDestroy(GeometryResources* geometry)
{
    if ((geometry->flags & 0x200) != 0 && geometry->special != NULL) {
        FUN_00207470(geometry->special);
    } else {
        bufferReleaseOwnedPair(geometry->buffers);
        if (geometry->buffers != NULL) {
            asdMemFreeNonNull(bufferDestroyOwnedPair(geometry->buffers));
        }
    }
    if (geometry->texture != NULL) {
        asdTextureRelease(geometry->texture);
    }
    asdMemFree(geometry);
}
}
