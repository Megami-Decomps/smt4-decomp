/* NON_MATCHING: unified bank selection folds two retail branches; shared-flag boolean normalization and scheduling differ (110/101 rows). */
#include "shard/W6_W6Match5_TextureEntry.h"
#include "shard/S1AsdTexTable.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

struct StexHeader {
    /* 0x00 */ char magic[4];
    /* 0x04 */ u32 version;
    /* 0x08 */ u32 target;
    /* 0x0c */ s32 width;
    /* 0x10 */ s32 height;
    /* 0x14 */ u32 type;
    /* 0x18 */ u32 format;
    /* 0x1c */ u32 unk1c;
    /* 0x20 */ u32 dataOffset;
    /* 0x24 */ u32 unk24;
};

extern "C" {
extern const char g_stexMagic[];
u8* asdTMSprDecompress(u8* data, u32 flags, u32 alignment);
s32 rt_memcmp(const void* first, const void* second, u32 size);
void asdMemFree(void* allocation);
AsdTexture* asdTextureCreate(s32 shared);

// Keep the loaded allocation alive for its texture's pixel storage, then upload it.
void FUN_001b5154(u8* data, TextureHeapEntry* entry, u32 size)
{
    if (entry->node->compressed) {
        u32 flags = 1;
        if (entry->flags & TEXENTRY_RETRY) {
            flags = 3;
        }
        data = asdTMSprDecompress(data, flags, 128);
    }
    if (rt_memcmp(data, g_stexMagic, 4) != 0) {
        asdMemFree(data);
        return;
    }
    StexHeader* header = reinterpret_cast<StexHeader*>(data);
    if (header->unk24 == 0) {
        entry->texture = asdTextureCreate((entry->flags & TEXENTRY_RETRY) != 0);
        entry->texture->target = header->target;
        entry->texture->dimensions.width = header->width;
        entry->texture->dimensions.height = header->height;
        entry->texture->image.format = header->format;
        entry->texture->image.type = header->type;
        entry->texture->storage.unk28 = size - header->dataOffset;
        entry->texture->storage.flags |= 0x10;
        if (header->version == 1) {
            entry->texture->unk3c = 1;
            entry->texture->unk40 = 1;
        }
        entry->texture->storage.pixels = data + header->dataOffset;
    } else {
        entry->texture = NULL;
    }
    u32 flags = (entry->flags & ~TEXENTRY_LOADING) | 2;
    entry->flags = flags;
    entry->fileData = data;
    if (flags & (TEXENTRY_MODE_20 | TEXENTRY_MODE_40)) {
        u32 mode = (flags & TEXENTRY_MODE_20) ? TEXENTRY_MODE_20 : TEXENTRY_MODE_40;
        u32 heap = (mode == TEXENTRY_MODE_20) ? ASD_HEAP_VRAM_A : ASD_HEAP_VRAM_B;
        if (entry != NULL && entry->texture != NULL) {
            entry->texture->unk08 = heap;
            entry->flags |= mode;
        }
    }
    if (entry->texture != NULL) {
        asdTextureSetImage(entry->texture);
        entry->flags |= 4;
    }
}
}
