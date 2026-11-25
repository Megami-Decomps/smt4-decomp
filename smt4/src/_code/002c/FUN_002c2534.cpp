/* NON_MATCHING: armcc swaps the saved registers for the heap selector and the driver callback table,
 * and schedules the heap copy after the first pool load. */
#include "shard/W6_W6Match7_DefaultTextureWork.h"
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern DriverMemoryCallbacks g_gfxAllocateCallback;
}

/* Reallocates the selected render target's pixel storage for a supported format and heap. */
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
    case ASD_HEAP_EXTRA:
    case ASD_HEAP_VRAM_A:
    case ASD_HEAP_VRAM_B: {
        const DriverMemoryCallbacks *callbacks = &g_gfxAllocateCallback;
        if (texture->pixels != NULL && callbacks->release != NULL) {
            callbacks->release(texture->heap, ASD_ALIGN_16, texture->id, texture->pixels);
        }
        void *allocation;
        if (callbacks->allocate != NULL) {
            allocation = callbacks->allocate(heap, ASD_ALIGN_16, texture->id, bytesPerPixel * width * height);
        } else {
            allocation = NULL;
        }
        texture->heap = heap;
        texture->pixels = (u8 *)allocation;
        texture->format = format;
        texture->width = width;
        texture->height = height;
        break;
    }
    }
}
