#include "common.h"

extern "C" {

typedef struct TextureSlot {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ void *texture;
} TextureSlot;

extern void asdTextureRelease(void *texture);
extern s32 FUN_0025cc50(u32 id);
extern void *asdEffectTextureCreate(u32 id);
extern void *FUN_0037a7f4(u32 id);

/* Replaces the slot's texture with one created for `id` (an effect texture or the default one). */
void textureSlotReplace(TextureSlot *slot, u32 id)
{
    if (slot->texture != NULL) {
        asdTextureRelease(slot->texture);
    }
    if (FUN_0025cc50(id) != 0) {
        slot->texture = asdEffectTextureCreate(id);
    } else {
        slot->texture = FUN_0037a7f4(id);
    }
}

} /* extern "C" */
