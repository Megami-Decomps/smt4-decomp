#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void FUN_002bf0d8(void);
u32 nnosGetHeapBase(void);
u32 FUN_002c3984(void);
f32 FUN_002a66e0(u32 format, u32 type, u32* hardwareFormat);
u32 osVirtToPhysAddress(u32 address);
void* asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 clear);
void FUN_002a666c(const void* source, void* destination, u32 bytes);

void asdTextureSetImage(AsdTexture* texture)
{
    FUN_002bf0d8();
    const u32 address = (u32)texture->storage.pixels;
    const u32 base = nnosGetHeapBase();
    const u32 size = FUN_002c3984();
    if (base > address || address >= base + size || (address & 0x7f) != 0 ||
        (address & 0xfe000000) != ((address + texture->storage.unk28) & 0xfe000000)) {
        return;
    }

    const f32 bytesPerPixel =
        FUN_002a66e0(texture->image.format, texture->image.type, &texture->image.hardwareFormat);
    const u32 bytes =
        (u32)((f32)(texture->dimensions.width * texture->dimensions.height) * bytesPerPixel);

    if (texture->image.format == 0x675a || texture->image.format == 0x675b) {
        if (texture->unk08 != ASD_HEAP_EXTRA) {
            texture->auxiliaryData = NULL;
            if (texture->unk08 == ASD_HEAP_VRAM_A) {
                asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Tex\\AsdTexture.cpp", 180);
                texture->auxiliaryData = asdMemoryAlloc(ASD_HEAP_VRAM_A, ASD_ALIGN_DEFAULT, 0, bytes, 1);
            } else if (texture->unk08 == ASD_HEAP_VRAM_B) {
                asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Tex\\AsdTexture.cpp", 184);
                texture->auxiliaryData = asdMemoryAlloc(ASD_HEAP_VRAM_B, ASD_ALIGN_DEFAULT, 0, bytes, 1);
            }
            FUN_002a666c(texture->storage.pixels, texture->auxiliaryData, bytes);
            texture->image.physicalAddress = osVirtToPhysAddress((u32)texture->auxiliaryData);
        } else {
            texture->image.physicalAddress = osVirtToPhysAddress((u32)texture->storage.pixels);
        }
    } else {
        if (texture->unk08 != ASD_HEAP_EXTRA) {
            texture->auxiliaryData = NULL;
            if (texture->unk08 == ASD_HEAP_VRAM_A) {
                asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Tex\\AsdTexture.cpp", 227);
                texture->auxiliaryData = asdMemoryAlloc(ASD_HEAP_VRAM_A, ASD_ALIGN_DEFAULT, 0, bytes, 1);
            } else if (texture->unk08 == ASD_HEAP_VRAM_B) {
                asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Tex\\AsdTexture.cpp", 231);
                texture->auxiliaryData = asdMemoryAlloc(ASD_HEAP_VRAM_B, ASD_ALIGN_DEFAULT, 0, bytes, 1);
            }
            FUN_002a666c(texture->storage.pixels, texture->auxiliaryData, bytes);
            texture->image.physicalAddress = osVirtToPhysAddress((u32)texture->auxiliaryData);
        } else {
            texture->image.physicalAddress = osVirtToPhysAddress((u32)texture->storage.pixels);
        }
    }
    FUN_002bf0d8();
}
}
