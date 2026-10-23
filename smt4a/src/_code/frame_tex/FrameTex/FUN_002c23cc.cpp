/* NON_MATCHING: texture setup store grouping, allocation constants/live registers and preserved argument stack layout differ. */
#include "ui/FrameTex.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern FrameWorkA *g_frameTex;
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
    // The capture slots follow, rather than enlarge, the shared FrameWorkA prefix.
    struct CaptureView {
        FrameWorkA prefix;
        AsdTexture *main;
        u8 vramA;
        u8 unk1495[3];
        AsdTexture *medium;
        AsdTexture *small;
    };
    typedef char CaptureOffsets[
        offsetof(CaptureView, main) == 0x1490 &&
        offsetof(CaptureView, vramA) == 0x1494 &&
        offsetof(CaptureView, medium) == 0x1498 &&
        offsetof(CaptureView, small) == 0x149c ? 1 : -1];
    CaptureView *work = reinterpret_cast<CaptureView *>(g_frameTex);
    AsdTexture *texture = asdTextureCreate(0);
    if (work->main)
        return;
    if (useVramB) {
        work->vramA = 0;
        configureFrameCaptureTexture(texture, 512, 400, 0x64000, ASD_HEAP_VRAM_B, 606);
        work->main = texture;
    } else {
        work->vramA = 1;
        configureFrameCaptureTexture(texture, 512, 400, 0x64000, ASD_HEAP_VRAM_A, 546);
        work->main = texture;
        texture = asdTextureCreate(0);
        configureFrameCaptureTexture(texture, 256, 256, 0x20000, ASD_HEAP_VRAM_A, 565);
        work->medium = texture;
        texture = asdTextureCreate(0);
        configureFrameCaptureTexture(texture, 128, 128, 0x8000, ASD_HEAP_VRAM_A, 584);
        work->small = texture;
    }
    work->prefix.unk148C = 0;
    work->prefix.unkFAE = 0;
    work->prefix.unkFAD = 0;
}
