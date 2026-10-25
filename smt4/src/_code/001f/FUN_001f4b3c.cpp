#include "gfx/NamedTextureCache.h"

extern "C" {

void asdTexTgaLoadNw4c(AsdTexture *texture, const AsdTgaHeader *file, u32 bytes, u32 flags);


void FUN_001f4b3c(u32 unused, BattleEffectTextureSlot *request, u32 bytes)
{
    asdTexTgaLoadNw4c(request->texture, static_cast<const AsdTgaHeader *>(request->file), bytes, 0x10000);
    request->texture->image.flags = 0x2000000;
    request->texture->unk3c = 1;
    request->texture->unk40 = 1;
    request->texture->unk38 = 0;
    asdTextureSetImage(request->texture);
    request->loaded = 1;
}

} /* extern "C" */
