#include "gfx/StexLoad.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern const char g_stexSignature[]; // STEX signature
StexHeader *asdTMSprDecompress(StexHeader *data, u32 mode, u32 alignment);
s32 rt_memcmp(const void *first, const void *second, u32 bytes);
void asdMemFree(void *memory);
AsdTexture *asdTextureCreate(s32 retry);

// Places the entry's texture in a VRAM heap and records the bank in the entry flags.
static __inline void assignVramBank(TextureHeapEntry *entry, u32 heap, u32 mode)
{
    if (entry != NULL && entry->texture != NULL) {
        entry->texture->heap = heap;
        entry->flags |= mode;
    }
}

/* Takes over a loaded (and decompressed if needed) STEX file of `size` bytes as the entry's texture. */
static __inline void textureEntryAttachStex(StexHeader *data, u32 size, TextureHeapEntry *entry)
{
    if (entry->node->compressed) {
        u32 flags = 1;
        if (entry->flags & TEXENTRY_RETRY) {
            flags = 3;
        }
        data = asdTMSprDecompress(data, flags, 128);
    }
    if (rt_memcmp(data, g_stexSignature, 4) != 0) {
        asdMemFree(data);
        return;
    }
    if (data->external == 0) {
        s32 retry = 0;
        if (entry->flags & TEXENTRY_RETRY) {
            retry = 1;
        }
        entry->texture = asdTextureCreate(retry);
        entry->texture->target = data->target;
        entry->texture->dimensions.width = data->width;
        entry->texture->dimensions.height = data->height;
        entry->texture->image.format = data->format;
        entry->texture->image.type = data->type;
        entry->texture->storage.bytes = size - data->dataOffset;
        entry->texture->storage.flags |= 0x10;
        if (data->version == 1) {
            entry->texture->unk3c = 1;
            entry->texture->unk40 = 1;
        }
        entry->texture->storage.pixels = reinterpret_cast<u8 *>(data) + data->dataOffset;
    } else {
        entry->texture = NULL;
    }
    u32 flags = (entry->flags & ~TEXENTRY_LOADING) | 2;
    entry->flags = flags;
    entry->fileData = reinterpret_cast<u8 *>(data);
    if (flags & (TEXENTRY_MODE_20 | TEXENTRY_MODE_40)) {
        if ((flags & TEXENTRY_MODE_20) == 0) {
            assignVramBank(entry, ASD_HEAP_VRAM_B, TEXENTRY_MODE_40);
        } else {
            assignVramBank(entry, ASD_HEAP_VRAM_A, TEXENTRY_MODE_20);
        }
    }
    if (entry->texture != NULL) {
        asdTextureSetImage(entry->texture);
        entry->flags |= 4;
    }
}

// Keep the loaded allocation alive for its texture's pixel storage, then upload it.
void textureEntryAttachStex(StexHeader *data, TextureHeapEntry *entry, u32 size)
{
    if (data == NULL) {
        return;
    }
    textureEntryAttachStex(data, size, entry);
}
}
