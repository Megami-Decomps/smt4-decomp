/* NON_MATCHING: texture-resource field addressing and scan/copy register scheduling differ. */
#include "test/MotouchiTexture.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *memAlloc(u32, u32, u32, u32, u32, u32);
void rt_memcpy(void *, const void *, u32);

// Find a TXOB resource in the buffer and copy its image into owned storage.
void FUN_001f4a98(MotouchiTexture *texture, const u32 *data, u32 size)
{
    texture->data = NULL;
    texture->target = 0xde1;
    texture->unk08 = 0;
    texture->unk0c = 0;
    for (u32 offset = 0; offset < size; offset += sizeof(u32), ++data) {
        if (*data != 0x424f5854)
            continue;
        const MotouchiTextureResource *resource = reinterpret_cast<const MotouchiTextureResource *>(data);
        texture->height = resource->height;
        texture->width = resource->width;
        texture->format = resource->format;
        texture->pixelType = resource->pixelType;
        texture->mipLevel = -resource->mipLevel;
        texture->dataSize = resource->dataSize;
        const u8 *image = reinterpret_cast<const u8 *>(&resource->dataOffset) + resource->dataOffset;
        if (image == NULL)
            return;
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\test\\motouchiTest.cpp", 887);
        texture->data = memAlloc(0x10000, 0x100, 0, texture->dataSize, 0x80, 1);
        rt_memcpy(texture->data, image, texture->dataSize);
        return;
    }
}
}
