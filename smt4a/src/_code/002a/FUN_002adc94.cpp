#include "gfx/NamedTextureCache.h"

extern "C" {

void asdTexTgaLoadNw4c(AsdTexture *texture, const AsdTgaHeader *file, u32 bytes, u32 flags);


/* Install a completed effect-texture file and mark its cache slot loaded. */
void FUN_002adc94(u32 unused, BattleEffectTextureSlot *holder, u32 bytes)
{
    asdTexTgaLoadNw4c(holder->texture, static_cast<const AsdTgaHeader *>(holder->file), bytes, 0x10000);
    holder->texture->image.flags = 0x2000000;
    holder->texture->unk3c = 1;
    holder->texture->unk40 = 1;
    holder->texture->unk38 = 0;
    asdTextureSetImage(holder->texture);
    holder->loaded = 1;
}

} /* extern "C" */
