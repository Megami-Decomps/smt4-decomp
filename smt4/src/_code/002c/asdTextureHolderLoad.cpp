#include "shard/W6_W6Match2_TextureHolder.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_TextureHolder.h"

extern "C" s32 stexHeaderIsValid(const void* image);

// Decode either texture format and retain it in the holder.
extern "C" void asdTextureHolderLoad(TextureHolder* holder, const void* image)
{
    AsdTexture* texture;
    if (stexHeaderIsValid(image)) {
        texture = asdEffectTextureCreate(image);
    } else {
        texture = textureCreateFromImage(image);
    }
    holder->texture = texture;
    refCountIncrement(texture);
    asdTextureRelease(texture);
}
