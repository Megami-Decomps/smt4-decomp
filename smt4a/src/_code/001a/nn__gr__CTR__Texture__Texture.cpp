/* NON_MATCHING: Coordinate initialization uses the saved Texture owner; retail recovers it from each returned coordinate subobject. */
#include "classes/Texture.h"

extern "C" nn::gr::CTR::TextureCoordinate *FUN_001af0f4(nn::gr::CTR::TextureCoordinate *);

nn::gr::CTR::Texture::Texture()
{
    TextureCoordinate *coordinate = FUN_001af0f4(&first);
    coordinate->kind = 5;
    coordinate->owner = NULL;
    for (u32 index = 0; index < 5; ++index) {
        values[index] = 0;
    }
    root = this;
    coordinate = FUN_001af0f4(&second);
    coordinate->kind = 0;
    coordinate->owner = this;
    coordinate = FUN_001af0f4(&third);
    coordinate->kind = 0;
    coordinate->flag = 0;
    coordinate->owner = this;
    coordinate = FUN_001af0f4(&fourth);
    coordinate->kind = 0;
    coordinate->flag = 0;
    coordinate->owner = this;
}
