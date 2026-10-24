#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

struct PendingTexture {
    AsdTexture *texture;  // 0x00
    u8 unk04[0x40];       // 0x04
    void *image;          // 0x44
    u8 reloaded;          // 0x48
    u8 unk49;             // 0x49
    u8 busy;              // 0x4A
    u8 unk4B;             // 0x4B
};

extern "C" {

extern PendingTexture g_pendingTextures[26]; /* 0x4332a0 */

void asdMemFree(void *block);

/* Resets the image of every loaded texture that is not busy and releases its pending image data. */
void FUN_00328fa4(void)
{
    for (u32 i = 0; i < 26; i++) {
        PendingTexture *entry = &g_pendingTextures[i];

        if (entry->busy != 1 && entry->texture != NULL) {
            entry->texture->image.flags = 0x2000000;
            entry->texture->unk3c = 1;
            entry->texture->unk40 = 1;
            entry->texture->unk38 = 0;
            asdTextureSetImage(entry->texture);
            entry->reloaded = 1;
            asdMemFree(entry->image);
            entry->image = NULL;
        }
    }
}

} /* extern "C" */
