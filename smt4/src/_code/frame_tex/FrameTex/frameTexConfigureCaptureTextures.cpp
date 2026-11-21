/* NON_MATCHING: 16 lines: the quarter-size texture's setup moves the texture into r4 before its stores (retail stores
 * through r0 and copies it after), and the constant 1 is materialised one instruction earlier. */
#include "frame_tex/FrameTex.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
AsdTexture *asdTextureCreate(u32 flags);
void *asdMemoryAlloc(u32 heap, u32 tag, u32 mode, u32 size, u32 flags); // declcheck: local (the shared declaration does not compile here or changes this unit)
u32 osVirtToPhysAddress(const void *address); // declcheck: local (the shared declaration does not compile here or changes this unit)
}

/* Creates the frame-texture capture surfaces: the scene surface in VRAM B, or in VRAM A with its half- and
 * quarter-size downsample chain (each texture is RGB565, its pixels allocated with a FrameTex.cpp trace). */
extern "C" void frameTexConfigureCaptureTextures(s32 useSpecialHeap)
{
    FrameTexWork *work = g_frameTex;
    AsdTexture *texture = asdTextureCreate(0);
    if (work->sceneSurface == NULL) {
        if (useSpecialHeap == 0) {
            work->hdrDownsampleChain = 1;
            texture->dimensions.width = 512;
            texture->dimensions.height = 400;
            texture->storage.bytes = 0x64000;
            texture->image.mip.level = 0;
            texture->image.format = 0x8D62;
            texture->image.type = 0x1403;
            texture->image.hardwareFormat = 3;
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\frame_tex\\FrameTex.cpp", 418);
            texture->storage.pixels = asdMemoryAlloc(ASD_HEAP_VRAM_A, ASD_ALIGN_DEFAULT, 0, texture->storage.bytes, 1);
            texture->image.physicalAddress = osVirtToPhysAddress(texture->storage.pixels);
            work->sceneSurface = texture;
            AsdTexture *half = asdTextureCreate(0);
            half->dimensions.width = 256;
            half->dimensions.height = 256;
            half->storage.bytes = 0x20000;
            half->image.mip.level = 0;
            half->image.format = 0x8D62;
            half->image.type = 0x1403;
            half->image.hardwareFormat = 3;
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\frame_tex\\FrameTex.cpp", 437);
            half->storage.pixels = asdMemoryAlloc(ASD_HEAP_VRAM_A, ASD_ALIGN_DEFAULT, 0, half->storage.bytes, 1);
            half->image.physicalAddress = osVirtToPhysAddress(half->storage.pixels);
            work->hdrSurfaceHalf = half;
            AsdTexture *quarter = asdTextureCreate(0);
            quarter->dimensions.width = 128;
            quarter->dimensions.height = 128;
            quarter->storage.bytes = 0x8000;
            quarter->image.mip.level = 0;
            quarter->image.format = 0x8D62;
            quarter->image.type = 0x1403;
            quarter->image.hardwareFormat = 3;
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\frame_tex\\FrameTex.cpp", 456);
            quarter->storage.pixels = asdMemoryAlloc(ASD_HEAP_VRAM_A, ASD_ALIGN_DEFAULT, 0, quarter->storage.bytes, 1);
            quarter->image.physicalAddress = osVirtToPhysAddress(quarter->storage.pixels);
            work->hdrSurfaceQuarter = quarter;
        } else {
            work->hdrDownsampleChain = 0;
            texture->dimensions.width = 512;
            texture->dimensions.height = 400;
            texture->storage.bytes = 0x64000;
            texture->image.mip.level = 0;
            texture->image.format = 0x8D62;
            texture->image.type = 0x1403;
            texture->image.hardwareFormat = 3;
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\frame_tex\\FrameTex.cpp", 478);
            texture->storage.pixels = asdMemoryAlloc(ASD_HEAP_VRAM_B, ASD_ALIGN_DEFAULT, 0, texture->storage.bytes, 1);
            texture->image.physicalAddress = osVirtToPhysAddress(texture->storage.pixels);
            work->sceneSurface = texture;
        }
        work->captureBlocked = 0;
        work->hdr.capturedRight = 0;
        work->hdr.capturedLeft = 0;
    }
}
