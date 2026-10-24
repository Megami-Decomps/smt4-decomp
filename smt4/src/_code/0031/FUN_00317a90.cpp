/* NON_MATCHING: the table-address load is scheduled three instructions later than retail. */
#include "battle/EffectTextures.h"

extern "C" {
extern BattleEffectTextureSlot g_pendingTextures[26];
AsdTexture* asdTextureCreate(u32 flags);
s32 FUN_002522f8(char* buffer, u32 size, const char* format, ...);
void* fileLoadSync(const char* path, u32* size, u32 flags);
void asdTexTgaLoadNw4c(AsdTexture* texture, const void* data, u32 size, u32 flags);
void asdMemFree(void* memory);

// Load each missing battle-effect TGA into its texture slot, then release the source file.
void FUN_00317a90(void)
{
    char path[128];
    u32 size;
    u32 i = 0;
    do {
        BattleEffectTextureSlot* slot = &g_pendingTextures[i];
        if (slot->state != 1 && slot->texture == NULL) {
            slot->texture = asdTextureCreate(0);
            FUN_002522f8(path, sizeof(path), "%s%s.tga", "battle/effect/tex/", slot->name);
            slot->fileData = fileLoadSync(path, &size, 0);
            asdTexTgaLoadNw4c(slot->texture, slot->fileData, size, 0x20000);
            slot->texture->image.flags = 0x2000000;
            slot->texture->unk3c = 1;
            slot->texture->unk40 = 1;
            slot->texture->unk38 = 0;
            asdTextureSetImage(slot->texture);
            slot->ready = 1;
            asdMemFree(slot->fileData);
            slot->fileData = NULL;
        }
        ++i;
    } while (i < 26);
}
}
