#include "AsdSDK/Source/Gfx/Effect/AsdEffectTexture.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/asdEffectTextureCreate.h"

extern "C" {

extern const char DAT_00410174[]; /* __FILE__ of AsdEffectTexture.cpp */

EffectTexture *asdTextureCreate(int arg);
void *asdMemoryAllocAligned(int, int, int, u32 size, int align, int);
void memCopyWords(const void *src, void *dst, u32 size);

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
    asdDebugTrace(DAT_00410174, 51);
    tex->pixels = (u8 *)asdMemoryAllocAligned(0x10000, 0x100, 0, tex->size, 0x80, 1);
    memCopyWords(file->pixels, tex->pixels, tex->size);
    asdTextureSetImage((AsdTexture*)tex);
    return tex;
}

} /* extern "C" */
