/* NON_MATCHING: STEX image setup ordering and retail's retained inline-helper null guards differ. */
#include "gfx/StexLoad.h"

extern "C" {
extern const char DAT_00409268[]; // STEX signature
StexHeader *asdTMSprDecompress(StexHeader *data, u32 mode, u32 alignment);
s32 rt_memcmp(const void *first, const void *second, u32 bytes);
void asdMemFree(void *memory);
AsdTexture *asdTextureCreate(s32 retry);

void FUN_00153068(StexHeader *data, TextureHeapEntry *entry, u32 bytes)
{
    if (data == NULL)
        return;
    if (entry->node->compressed != 0) {
        u32 mode = (entry->flags & TEXENTRY_RETRY) != 0 ? 3 : 1;
        data = asdTMSprDecompress(data, mode, 0x80);
    }
    if (rt_memcmp(data, DAT_00409268, 4) != 0) {
        asdMemFree(data);
        return;
    }
    if (data->external != 0)
        entry->texture = NULL;
    else {
        entry->texture = asdTextureCreate((entry->flags & TEXENTRY_RETRY) != 0);
        entry->texture->target = data->target;
        entry->texture->dimensions.width = data->width;
        entry->texture->dimensions.height = data->height;
        entry->texture->image.format = data->format;
        entry->texture->image.type = data->type;
        entry->texture->storage.unk28 = bytes - data->dataOffset;
        entry->texture->storage.flags |= 0x10;
        if (data->version == 1) {
            entry->texture->unk3c = 1;
            entry->texture->unk40 = 1;
        }
        entry->texture->storage.pixels = reinterpret_cast<u8 *>(data) + data->dataOffset;
    }
    entry->flags = (entry->flags & ~TEXENTRY_LOADING) | 2;
    entry->fileData = reinterpret_cast<u8 *>(data);
    if ((entry->flags & 0x60) != 0) {
        if (entry->texture == NULL)
            return;
        entry->texture->unk08 = (entry->flags & TEXENTRY_MODE_20) != 0 ? 0x20000 : 0x30000;
    }
    if (entry->texture != NULL) {
        asdTextureSetImage(entry->texture);
        entry->flags |= 4;
    }
}
}
