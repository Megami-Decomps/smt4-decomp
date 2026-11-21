/* NON_MATCHING: 97 lines (IV's twin FUN_00280ac0 is 16 off with the same source): the format and type constants get
 * fp/r9 where retail has r9/sl, so the first texture's format no longer joins the stm, and the half/quarter setups
 * move the texture into r4 before their stores. */
#include "frame_tex/FrameTexA.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
AsdTexture *asdTextureCreate(s32);
void *asdMemoryAlloc(u32, u32, u32, u32, u32);
u32 asdGxGetPhysicalAddress(const void *);
}

/* Creates the frame-texture capture surfaces: the scene surface in VRAM B, or in VRAM A with its half- and
 * quarter-size downsample chain (each texture is RGB565, its pixels allocated with a FrameTex.cpp trace). */
extern "C" void frameTexConfigureCaptureTextures(s32 useVramB)
{
    FrameTexWorkA *work = g_frameTex;
    AsdTexture *texture = asdTextureCreate(0);
    if (work->sceneSurface == NULL) {
        if (useVramB == 0) {
            work->hdrDownsampleChain = 1;
            texture->dimensions.width = 512;
            texture->dimensions.height = 400;
            texture->storage.bytes = 0x64000;
            texture->image.mip.level = 0;
            texture->image.format = 0x8d62;
            texture->image.type = 0x1403;
            texture->image.hardwareFormat = 3;
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\frame_tex\\FrameTex.cpp", 546);
            texture->storage.pixels = asdMemoryAlloc(ASD_HEAP_VRAM_A, ASD_ALIGN_DEFAULT, 0, texture->storage.bytes, 1);
            texture->image.physicalAddress = asdGxGetPhysicalAddress(texture->storage.pixels);
            work->sceneSurface = texture;
            AsdTexture *half = asdTextureCreate(0);
            half->dimensions.width = 256;
            half->dimensions.height = 256;
            half->storage.bytes = 0x20000;
            half->image.mip.level = 0;
            half->image.format = 0x8d62;
            half->image.type = 0x1403;
            half->image.hardwareFormat = 3;
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\frame_tex\\FrameTex.cpp", 565);
            half->storage.pixels = asdMemoryAlloc(ASD_HEAP_VRAM_A, ASD_ALIGN_DEFAULT, 0, half->storage.bytes, 1);
            half->image.physicalAddress = asdGxGetPhysicalAddress(half->storage.pixels);
            work->hdrSurfaceHalf = half;
            AsdTexture *quarter = asdTextureCreate(0);
            quarter->dimensions.width = 128;
            quarter->dimensions.height = 128;
            quarter->storage.bytes = 0x8000;
            quarter->image.mip.level = 0;
            quarter->image.format = 0x8d62;
            quarter->image.type = 0x1403;
            quarter->image.hardwareFormat = 3;
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\frame_tex\\FrameTex.cpp", 584);
            quarter->storage.pixels = asdMemoryAlloc(ASD_HEAP_VRAM_A, ASD_ALIGN_DEFAULT, 0, quarter->storage.bytes, 1);
            quarter->image.physicalAddress = asdGxGetPhysicalAddress(quarter->storage.pixels);
            work->hdrSurfaceQuarter = quarter;
        } else {
            work->hdrDownsampleChain = 0;
            texture->dimensions.width = 512;
            texture->dimensions.height = 400;
            texture->storage.bytes = 0x64000;
            texture->image.mip.level = 0;
            texture->image.format = 0x8d62;
            texture->image.type = 0x1403;
            texture->image.hardwareFormat = 3;
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\frame_tex\\FrameTex.cpp", 606);
            texture->storage.pixels = asdMemoryAlloc(ASD_HEAP_VRAM_B, ASD_ALIGN_DEFAULT, 0, texture->storage.bytes, 1);
            texture->image.physicalAddress = asdGxGetPhysicalAddress(texture->storage.pixels);
            work->sceneSurface = texture;
        }
        work->captureBlocked = 0;
        work->hdr.capturedRight = 0;
        work->hdr.capturedLeft = 0;
    }
}
