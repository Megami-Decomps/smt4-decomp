/* NON_MATCHING: Inlined texture initialization retains heap argument registers and groups format/dimension stores differently; cleanup branch placement differs. */
#include "ui/FrameTex.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern FrameWork *g_frameTex;
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
    /* The texture ownership fields follow the shared FrameWork prefix. */
    struct TextureOwnerView {
        u8 unk000[0xFDC];
        AsdTexture *primary;
        u8 useSystemMemory;
        u8 unkFE1[3];
        AsdTexture *secondary;
        AsdTexture *tertiary;
    };
    typedef char TextureOwnerOffsetsCheck[offsetof(TextureOwnerView, primary) == 0xFDC &&
        offsetof(TextureOwnerView, secondary) == 0xFE4 && offsetof(TextureOwnerView, tertiary) == 0xFE8 ? 1 : -1];
    FrameWork *work = g_frameTex;
    AsdTexture *texture = asdTextureCreate(0);
    TextureOwnerView *owner = (TextureOwnerView *)work;
    if (owner->primary == NULL) {
        if (useSpecialHeap != 0) {
            owner->useSystemMemory = 0;
            frameTexAllocateImage(texture, 0x30000, 512, 400, 0x64000, 352);
            owner->primary = texture;
        } else {
            owner->useSystemMemory = 1;
            frameTexAllocateImage(texture, 0x20000, 512, 400, 0x64000, 418);
            owner->primary = texture;
            texture = asdTextureCreate(0);
            frameTexAllocateImage(texture, 0x20000, 256, 256, 0x20000, 437);
            owner->secondary = texture;
            texture = asdTextureCreate(0);
            frameTexAllocateImage(texture, 0x20000, 128, 128, 0x8000, 456);
            owner->tertiary = texture;
        }
        work->unkFD8 = 0;
        work->unkE96 = 0;
        work->unkE95 = 0;
    }
}
