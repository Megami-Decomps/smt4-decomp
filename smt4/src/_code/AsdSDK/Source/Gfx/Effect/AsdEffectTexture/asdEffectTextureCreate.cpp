/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 44 vs built 39 rows, 54 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/AsdEffectTexture.h"

extern "C" {

EffectTexture *asdTextureCreate(int arg);
void *asdMemoryAllocAligned(int, int, int, u32 size, int align, int);
void FUN_002b77b0(const void *src, void *dst, u32 size);
void FUN_002bd540(EffectTexture *tex);

/* Builds a texture object from a texture image file: copies the header fields and the pixel data. */
EffectTexture *asdEffectTextureCreate(EffectTextureFile *file)
{
    EffectTexture *tex = asdTextureCreate(0);

    tex->unk3c = 1;
    tex->unk40 = 1;
    tex->unk04 = file->unk08;
    tex->unk08 = 0x30000;
    tex->unk14 = file->unk0c;
    tex->unk18 = file->unk10;
    tex->unk1c = file->unk18;
    tex->unk20 = file->unk14;
    tex->size = file->size;
    tex->pixels = (u8 *)asdMemoryAllocAligned(0x10000, 0x100, 0, tex->size, 0x80, 1);
    FUN_002b77b0(file->pixels, tex->pixels, tex->size);
    FUN_002bd540(tex);
    return tex;
}

} /* extern "C" */
