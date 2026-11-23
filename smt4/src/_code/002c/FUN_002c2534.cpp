/* NON_MATCHING: 24 lines: with the heap kinds as a switch only the callee-saved registers of format, width, height
 * (retail r8/r9/sl, build r7/r8/r9) and the allocator hooks (retail r7, build sl) differ. */
#include "shard/W6_W6Match7_DefaultTextureWork.h"
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {
extern DriverMemoryCallbacks g_gfxAllocateCallback;
}

extern "C" void FUN_002c2534(u32 format, u32 width, u32 height, u32 heap)
{
    AsdGfxTarget *texture = g_asdGfxContext.targets[g_asdGfxContext.activeTarget];
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
    switch (heap) {
    case 0x10000:
    case 0x20000:
    case 0x30000: {
        if (texture->pixels != NULL && g_gfxAllocateCallback.release != NULL) {
            g_gfxAllocateCallback.release(texture->heap, 0x104, texture->id, texture->pixels);
        }
        void *allocation;
        if (g_gfxAllocateCallback.allocate != NULL) {
            allocation = g_gfxAllocateCallback.allocate(heap, 0x104, texture->id,
                                                        bytesPerPixel * width * height);
        } else {
            allocation = NULL;
        }
        texture->heap = heap;
        texture->pixels = static_cast<u8 *>(allocation);
        texture->format = format;
        texture->width = width;
        texture->height = height;
        break;
    }
    }
}
