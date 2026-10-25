/* NON_MATCHING: embedded graphics context corrected; format/allocation saved registers still differ. */
#include "shard/W6_W6Match7_DefaultTextureWork.h"
#include "shard/W6_W6Match5_DisplayMode.h"

struct BoundTextureStorage : GraphicsTarget {
    u32 heap;
};
typedef char BoundTextureStorageLayoutCheck[
    sizeof(BoundTextureStorage) == 0x18 && offsetof(BoundTextureStorage, heap) == 0x14 ? 1 : -1];
extern "C" {
extern DriverMemoryCallbacks g_gfxAllocateCallback;
}

extern "C" void FUN_002c2534(u32 format, u32 width, u32 height, u32 heap)
{
    BoundTextureStorage *texture = static_cast<BoundTextureStorage *>(
        g_asdGfxContext.query.targets[g_asdGfxContext.query.active]);
    u32 bytesPerPixel;
    switch (format) {
    case 0x8051:
        bytesPerPixel = 3;
        break;
    case 0x8056:
    case 0x8057:
    case 0x8D62:
        bytesPerPixel = 2;
        break;
    case 0x8058:
        bytesPerPixel = 4;
        break;
    default:
        return;
    }
    if (heap == 0x10000 || heap == 0x20000 || heap == 0x30000) {
        if (texture->pixels != NULL && g_gfxAllocateCallback.release != NULL) {
            g_gfxAllocateCallback.release(texture->heap, 0x104, texture->unk00, texture->pixels);
        }
        void *allocation;
        if (g_gfxAllocateCallback.allocate != NULL) {
            allocation = g_gfxAllocateCallback.allocate(heap, 0x104, texture->unk00,
                                                        bytesPerPixel * width * height);
        } else {
            allocation = NULL;
        }
        texture->heap = heap;
        texture->pixels = static_cast<u8 *>(allocation);
        texture->format = format;
        texture->width = width;
        texture->height = height;
    }
}
