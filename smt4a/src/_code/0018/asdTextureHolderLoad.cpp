#include "shard/W6_W6Match2_TextureHolder.h"

extern "C" s32 texIsStexFile(const void* image);

// Decode either texture format and retain it in the holder.
extern "C" void asdTextureHolderLoad(TextureHolder* holder, const void* image)
{
    AsdTexture* texture;
    if (texIsStexFile(image)) {
        texture = asdEffectTextureCreate(image);
    } else {
        texture = textureCreateFromImage(image);
    }
    holder->texture = texture;
    refCountIncrement(texture);
    asdTextureRelease(texture);
}
