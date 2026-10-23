/* NON_MATCHING: shared-allocation flag becomes AND/LSR instead of retail TST/MOV conditional normalization. */
#include "gfx/StexLoad.h"
extern "C" {
StexHeader *aocTexExpandCompressedData(StexHeader *data, u32 mode, u32 alignment);
s32 rt_memcmp(const void *left, const void *right, u32 size);
AsdTexture *asdTextureCreate(s32 shared);
void asdTextureSelectHeap(TextureHeapEntry *entry, u32 heap);
void asdTextureEntryApply(TextureHeapEntry *entry);

/* Decode a loaded STEX resource and attach its image storage to the texture-table entry. */
void FUN_00393fa4(TextureHeapEntry ***reference, const StexLoadPacket *packet)
{
    StexHeader *header = packet->data;
    u32 bytes = packet->bytes;
    TextureHeapEntry *entry = **reference;
    if (entry->node->compressed) {
        u32 mode = 1;
        if (entry->flags & 0x10000)
            mode = 3;
        header = aocTexExpandCompressedData(header, mode, 0x80);
    }
    if (rt_memcmp(header, "STEX", 4) != 0)
        return;
    if (header->external == 0) {
        entry->texture = asdTextureCreate((entry->flags & 0x10000) != 0);
        entry->texture->target = header->target;
        entry->texture->dimensions.width = header->width;
        entry->texture->dimensions.height = header->height;
        entry->texture->image.format = header->format;
        entry->texture->image.type = header->type;
        entry->texture->storage.unk28 = bytes - header->dataOffset;
        entry->texture->storage.flags |= 0x10;
        if (header->version == 1) {
            entry->texture->unk3c = 1;
            entry->texture->unk40 = 1;
        }
        entry->texture->storage.pixels = reinterpret_cast<u8 *>(header) + header->dataOffset;
    } else {
        entry->texture = NULL;
    }
    entry->flags = (entry->flags & ~1u) | 2;
    entry->fileData = reinterpret_cast<u8 *>(header);
    if (entry->flags & 0x60) {
        if (entry->flags & 0x20)
            asdTextureSelectHeap(entry, 0x20000);
        else
            asdTextureSelectHeap(entry, 0x30000);
    }
    asdTextureEntryApply(entry);
}
}
