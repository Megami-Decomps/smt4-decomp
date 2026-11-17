/* NON_MATCHING: Inlined texture initialization retains heap argument registers and groups format/dimension stores differently; cleanup branch placement differs. */
#include "frame_tex/FrameTex.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
AsdTexture *asdTextureCreate(u32 flags);
void *asdMemoryAlloc(u32 heap, u32 tag, u32 mode, u32 size, u32 flags);
u32 osVirtToPhysAddress(const void *address);
}

static __inline void frameTexAllocateImage(AsdTexture *texture, u32 heap, s32 width, s32 height,
    u32 bytes, s32 line)
{
    texture->storage.unk28 = bytes;
    texture->image.mip.level = 0;
    texture->image.hardwareFormat = 3;
    texture->dimensions.width = width;
    texture->dimensions.height = height;
    texture->image.format = 0x8D62;
    texture->image.type = 0x1403;
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\frame_tex\\FrameTex.cpp", line);
    texture->storage.pixels = asdMemoryAlloc(heap, 0x100, 0, texture->storage.unk28, 1);
    texture->image.physicalAddress = osVirtToPhysAddress(texture->storage.pixels);
}

extern "C" void FUN_00280ac0(s32 useSpecialHeap)
{
    FrameTexWork *work = g_frameTex;
    AsdTexture *texture = asdTextureCreate(0);
    if (work->sceneSurface == NULL) {
        if (useSpecialHeap != 0) {
            work->hdrDownsampleChain = 0;
            frameTexAllocateImage(texture, 0x30000, 512, 400, 0x64000, 352);
            work->sceneSurface = texture;
        } else {
            work->hdrDownsampleChain = 1;
            frameTexAllocateImage(texture, 0x20000, 512, 400, 0x64000, 418);
            work->sceneSurface = texture;
            texture = asdTextureCreate(0);
            frameTexAllocateImage(texture, 0x20000, 256, 256, 0x20000, 437);
            work->hdrSurfaceHalf = texture;
            texture = asdTextureCreate(0);
            frameTexAllocateImage(texture, 0x20000, 128, 128, 0x8000, 456);
            work->hdrSurfaceQuarter = texture;
        }
        work->captureBlocked = 0;
        work->hdr.capturedRight = 0;
        work->hdr.capturedLeft = 0;
    }
}
