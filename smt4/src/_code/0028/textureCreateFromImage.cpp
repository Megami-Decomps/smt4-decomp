#include "common.h"

namespace { struct Texture { u8 padding[0x3c]; u32 width, height; }; }

extern "C" {
Texture *asdTextureCreate(u32 flags);
void FUN_0019fc50(Texture *texture, void *image, u32 flags, u32 format);
void asdTextureSetImage(Texture *texture);
Texture *textureCreateFromImage(void *image)
{
    Texture *texture = asdTextureCreate(0);
    texture->width = 1;
    texture->height = 1;
    FUN_0019fc50(texture, image, 0, 0x30000);
    asdTextureSetImage(texture);
    return texture;
}
}
