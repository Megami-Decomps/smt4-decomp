#include "AsdSDK/Source/Gfx/AsdGfxContext.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void asdGxCheckError(void);
u32 nnosGetHeapBase(void);
u32 nnosGetHeapSize(void);
f32 texFormatGetBytesPerPixel(u32 format, u32 type, u32* hardwareFormat);
u32 asdGxGetPhysicalAddress(u32 address);
void* asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 clear);

/* Prepares a texture's pixel data for the GPU: data that is 128-byte aligned inside the heap and
 * does not cross a 32 MB boundary is copied to the texture's VRAM bank (or used in place when it
 * stays in the extra heap) and its physical address recorded. */
void asdTextureSetImage(AsdTexture* texture)
{
    asdGxCheckError();
    const u32 address = (u32)texture->storage.pixels;
    const u32 base = nnosGetHeapBase();
    const u32 size = nnosGetHeapSize();
    /* the GPU reads only 128-byte aligned data of the heap that stays inside one 32 MB block */
    if (base > address || address >= base + size || (address & 0x7f) != 0 ||
        (address & 0xfe000000) != ((address + texture->storage.bytes) & 0xfe000000)) {
        return;
    }

    const f32 bytesPerPixel =
        texFormatGetBytesPerPixel(texture->image.format, texture->image.type, &texture->image.hardwareFormat);
    const u32 bytes =
        (u32)((f32)(texture->dimensions.width * texture->dimensions.height) * bytesPerPixel);

    /* ETC1 images and the others are prepared alike (separate source lines in the original) */
    if (texture->image.format == ASDTEXTURE_FORMAT_ETC1 ||
        texture->image.format == ASDTEXTURE_FORMAT_ETC1_A4) {
        if (texture->heap != ASD_HEAP_EXTRA) {
            texture->auxiliaryData = NULL;
            if (texture->heap == ASD_HEAP_VRAM_A) {
                asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Tex\\AsdTexture.cpp", 180);
                texture->auxiliaryData = asdMemoryAlloc(ASD_HEAP_VRAM_A, ASD_ALIGN_DEFAULT, 0, bytes, 1);
            } else if (texture->heap == ASD_HEAP_VRAM_B) {
                asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Tex\\AsdTexture.cpp", 184);
                texture->auxiliaryData = asdMemoryAlloc(ASD_HEAP_VRAM_B, ASD_ALIGN_DEFAULT, 0, bytes, 1);
            }
            asdGxQueueMemoryTransfer(texture->storage.pixels, texture->auxiliaryData, bytes);
            texture->image.physicalAddress = asdGxGetPhysicalAddress((u32)texture->auxiliaryData);
        } else {
            texture->image.physicalAddress = asdGxGetPhysicalAddress((u32)texture->storage.pixels);
        }
    } else {
        if (texture->heap != ASD_HEAP_EXTRA) {
            texture->auxiliaryData = NULL;
            if (texture->heap == ASD_HEAP_VRAM_A) {
                asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Tex\\AsdTexture.cpp", 227);
                texture->auxiliaryData = asdMemoryAlloc(ASD_HEAP_VRAM_A, ASD_ALIGN_DEFAULT, 0, bytes, 1);
            } else if (texture->heap == ASD_HEAP_VRAM_B) {
                asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Tex\\AsdTexture.cpp", 231);
                texture->auxiliaryData = asdMemoryAlloc(ASD_HEAP_VRAM_B, ASD_ALIGN_DEFAULT, 0, bytes, 1);
            }
            asdGxQueueMemoryTransfer(texture->storage.pixels, texture->auxiliaryData, bytes);
            texture->image.physicalAddress = asdGxGetPhysicalAddress((u32)texture->auxiliaryData);
        } else {
            texture->image.physicalAddress = asdGxGetPhysicalAddress((u32)texture->storage.pixels);
        }
    }
    asdGxCheckError();
}
} /* extern "C" */
