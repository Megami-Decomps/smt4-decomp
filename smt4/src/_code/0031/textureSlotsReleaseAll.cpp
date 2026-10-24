#include "common.h"

extern "C" {

typedef struct TextureSlot {
    /* 0x00 */ void *texture;
    /* 0x04 */ u8 unk04[0x46];
    /* 0x4A */ u8 keep;          /* 1: slot is not released */
    /* 0x4B */ u8 unk4B;
} TextureSlot; /* 0x4C */

extern TextureSlot g_pendingTextures[26];
extern void asdTextureRelease(void *texture);

/* Releases and clears the texture of every slot that isn't marked to keep. */
void textureSlotsReleaseAll(void)
{
    u32 i;

    for (i = 0; i < 26; i++) {
        TextureSlot *slot = &g_pendingTextures[i];

        if (slot->keep != 1 && slot->texture != NULL) {
            asdTextureRelease(slot->texture);
            slot->texture = NULL;
        }
    }
}

} /* extern "C" */
