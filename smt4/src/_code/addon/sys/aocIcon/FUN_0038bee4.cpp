/* NON_MATCHING: strip destination offset is hoisted into an extra saved register. */
#include "addon/aocIcon.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *asdMemoryAllocAligned(u32 heap, u32 type, u32 options, u32 size, u32 alignment, u32 clear);
void rt_memclr(void *memory, u32 size);
void nnnstdMemCpy(void *destination, const void *source, u32 size);
AsdTexture *asdTextureCreate(s32 type);
void FUN_001dba54(void);

// Expand the six packed icon strips into a zero-padded 64x64 RGB565 texture.
void FUN_0038bee4(AocIcon *icon, const u8 *source)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\addon\\sys\\aocIcon.cpp", 63);
    icon->pixels = (AocIconPixels *)asdMemoryAllocAligned(0x10000, 0x100, 0, 0x2000, 0x80, 1);
    rt_memclr(icon->pixels, 0x2000);
    for (u32 strip = 0; strip < 6; ++strip)
        nnnstdMemCpy(icon->pixels->strips[strip], source + strip * 0x300, 0x300);
    icon->texture = asdTextureCreate(0);
    FUN_001dba54();
    icon->texture->target = ASDTEXTURE_TARGET_2D;
    icon->texture->unk08 = 0x10000;
    icon->texture->image.flags = 0x1000000;
    icon->texture->image.mip.level = 0;
    icon->texture->dimensions.width = 64;
    icon->texture->dimensions.height = 64;
    icon->texture->image.format = 0x6754;
    icon->texture->image.type = 0x8363;
    icon->texture->storage.pixels = icon->pixels;
    icon->texture->storage.unk28 = 0x2000;
    asdTextureSetImage(icon->texture);
}
}
