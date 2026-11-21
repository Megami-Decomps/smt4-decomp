#include <stdio.h>
#include "battle/BattleEffectTextureCache.h"
#include "AsdSDK/FileLoadSync.h"

extern "C" {
extern BattleEffectTextureSlot g_pendingTextures[26];
AsdTexture *asdTextureCreate(u32 flags);
void asdTexTgaLoadNw4c(AsdTexture *texture, void *file, u32 size, u32 flags);
void asdMemFree(void *memory);

void FUN_00324a20(void)
{
    for (u32 index = 0; index < 26; ++index) {
        BattleEffectTextureSlot *slot = &g_pendingTextures[index];
        if (slot->requested && !slot->texture) {
            slot->texture = asdTextureCreate(0);
            char path[128];
            snprintf(path, sizeof(path), "%s%s.tga", "battle/effect/tex/", slot->name);
            u32 size;
            slot->file = fileLoadSync(path, &size, 0);
            asdTexTgaLoadNw4c(slot->texture, slot->file, size, 0x10000);
            slot->texture->image.flags = 0x2000000;
            slot->texture->unk3c = 1;
            slot->texture->unk40 = 1;
            slot->texture->unk38 = 0;
            asdTextureSetImage(slot->texture);
            slot->loaded = 1;
            asdMemFree(slot->file);
            slot->file = NULL;
        }
    }
}
}
