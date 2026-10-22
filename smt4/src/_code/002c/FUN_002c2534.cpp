/* NON_MATCHING: texture-format dispatch and allocation-callback registers differ. */
#include "shard/W6_W6Match7_DefaultTextureWork.h"

struct BoundTextureStorage {
    u32 flags;
    void *allocation;
    u32 format;
    u32 width;
    u32 height;
    u32 heap;
};
/* The binding array follows the currently documented AsdGfxContext prefix. */
struct TextureBindingContext {
    u8 prefix[0x124];
    u32 selected;
    BoundTextureStorage *bindings[1];
};
extern "C" {
extern TextureBindingContext *g_asdGfxContext;
extern DriverMemoryCallbacks g_gfxAllocateCallback;
}

extern "C" void FUN_002c2534(u32 format, u32 width, u32 height, u32 heap)
{
    BoundTextureStorage *texture = g_asdGfxContext->bindings[g_asdGfxContext->selected];
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
        if (texture->allocation != NULL && g_gfxAllocateCallback.release != NULL) {
            g_gfxAllocateCallback.release(texture->heap, 0x104, texture->flags, texture->allocation);
        }
        void *allocation = NULL;
        if (g_gfxAllocateCallback.allocate != NULL) {
            allocation = g_gfxAllocateCallback.allocate(heap, 0x104, texture->flags,
                                                        bytesPerPixel * width * height);
        }
        texture->heap = heap;
        texture->allocation = allocation;
        texture->format = format;
        texture->width = width;
        texture->height = height;
    }
}
