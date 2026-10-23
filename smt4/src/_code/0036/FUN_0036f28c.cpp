/* NON_MATCHING: six-face relative-reference addressing, default-mode literal lifetime, mode branch layout and allocation-result registers differ. */
#include "shard/W6_W6Match8_TextureResourceFixup.h"

namespace {
struct CubeTextureFaceReferences {
    u8 unk00[0x38];
    RelativePointer faces[6];
};
// Six face references extend beyond the shared single-image resource prefix.
union CubeTextureResourceView {
    TextureResourceHeaderView header;
    CubeTextureFaceReferences cube;
};
typedef char CubeTextureResourceLayoutCheck[sizeof(CubeTextureResourceView) == 0x50 &&
    offsetof(CubeTextureFaceReferences, faces) == 0x38 ? 1 : -1];
}

extern "C" {
extern void *(*g_gfxAllocateCallback)(u32 memoryArea, u32 usage, TextureResourceHeaderView *owner, u32 size);
void *nnnstdMemCpy(void *destination, const void *source, u32 size);
void FUN_002c2424(const void *memory, u32 size);
void FUN_002a666c(const void *source, void *destination, u32 size);

void FUN_0036f28c(TextureResourceHeaderView *original)
{
    CubeTextureResourceView *resource = reinterpret_cast<CubeTextureResourceView *>(original);
    if (resource == NULL || (0x20000009 & ~static_cast<u32>(resource->header.kind)) != 0) {
        resource = NULL;
    }
    if (resource->header.boundOwner != NULL) {
        return;
    }
    resource->header.boundOwner = original;
    const u32 allocationFlags = resource->header.allocationFlags;
    for (s32 i = 0; i < 6; ++i) {
        TextureImageStorage *image = static_cast<TextureImageStorage *>(resource->cube.faces[static_cast<u8>(i)].get());
        if (image->address != NULL) {
            image->memoryArea = 0;
        } else {
            u32 mode = allocationFlags;
            if (mode == 0) {
                mode = 0x02010000;
            }
            mode &= 0xFFFF0000;
            u32 size = image->byteSize;
            if (size == 0) {
                size = (image->height * image->width * image->bitsPerPixel) >> 3;
            }
            if (mode != 0x02010000) {
                if (static_cast<s32>(mode) < 0x02010000) {
                    if (mode == 0x01010000) {
                        void *memory = g_gfxAllocateCallback(0x10000, 0x101, original, size);
                        const void *source = image->data.get();
                        if (source != NULL) {
                            nnnstdMemCpy(memory, source, size);
                            FUN_002c2424(memory, size);
                        }
                        image->address = memory;
                        image->memoryArea = 0x10000;
                    }
                } else if (mode == 0x02020000 || mode == 0x02030000) {
                    const u32 memoryArea = mode & 0x30000;
                    void *memory = g_gfxAllocateCallback(memoryArea, 0x101, original, size);
                    const void *source = image->data.get();
                    if (source != NULL) {
                        FUN_002a666c(source, memory, size);
                    }
                    image->address = memory;
                    image->memoryArea = memoryArea;
                }
            } else {
                FUN_002c2424(image->data.get(), size);
            }
        }
    }
}
}
