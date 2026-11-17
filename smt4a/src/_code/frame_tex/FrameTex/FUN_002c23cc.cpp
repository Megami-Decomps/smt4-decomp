/* NON_MATCHING: texture setup store grouping, allocation constants/live registers and preserved argument stack layout differ. */
#include "frame_tex/FrameTexA.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
AsdTexture *asdTextureCreate(s32);
void *asdMemoryAlloc(u32, u32, u32, u32, u32);
u32 asdGxGetPhysicalAddress(const void *);
}

static inline void configureFrameCaptureTexture(AsdTexture *texture, s32 width, s32 height,
    u32 bytes, u32 heap, s32 line)
{
    texture->storage.unk28 = bytes;
    texture->image.mip.level = 0;
    texture->image.hardwareFormat = 3;
    texture->dimensions.width = width;
    texture->dimensions.height = height;
    texture->image.format = 0x8d62; // GL_RGB565
    texture->image.type = 0x1403; // GL_UNSIGNED_SHORT
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\frame_tex\\FrameTex.cpp", line);
    texture->storage.pixels = asdMemoryAlloc(heap, ASD_ALIGN_DEFAULT, 0,
        texture->storage.unk28, 1);
    texture->image.physicalAddress = asdGxGetPhysicalAddress(texture->storage.pixels);
}

extern "C" void FUN_002c23cc(s32 useVramB)
{
    FrameTexWorkA *work = g_frameTex;
    AsdTexture *texture = asdTextureCreate(0);
    if (work->sceneSurface)
        return;
    if (useVramB) {
        work->hdrDownsampleChain = 0;
        configureFrameCaptureTexture(texture, 512, 400, 0x64000, ASD_HEAP_VRAM_B, 606);
        work->sceneSurface = texture;
    } else {
        work->hdrDownsampleChain = 1;
        configureFrameCaptureTexture(texture, 512, 400, 0x64000, ASD_HEAP_VRAM_A, 546);
        work->sceneSurface = texture;
        texture = asdTextureCreate(0);
        configureFrameCaptureTexture(texture, 256, 256, 0x20000, ASD_HEAP_VRAM_A, 565);
        work->hdrSurfaceHalf = texture;
        texture = asdTextureCreate(0);
        configureFrameCaptureTexture(texture, 128, 128, 0x8000, ASD_HEAP_VRAM_A, 584);
        work->hdrSurfaceQuarter = texture;
    }
    work->captureBlocked = 0;
    work->hdr.capturedRight = 0;
    work->hdr.capturedLeft = 0;
}
