/* NON_MATCHING: only scheduling differs: retail stores the file data before loading the flags (no write-back addressing) and loads dataOffset before the texture pointer. */
#include "gfx/StexLoad.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {
char *libc_strcat(char *dst, const char *src);
u32 libc_strlen(const char *s);
u8 *asdLoadFileSync(const char *path, s32 *size, u32 loadFlags, u32 alignment);
StexHeader *asdTMSprDecompress(StexHeader *data, u32 mode, u32 alignment);
s32 rt_memcmp(const void *first, const void *second, u32 bytes);
void asdMemFree(void *memory);
AsdTexture *asdTextureCreate(s32 retry);

/* Build the entry's file path and load it synchronously; on success the entry holds the new texture and its file data. */
u32 FUN_002b9178(TexTableNamedEntry *entry)
{
    char path[64];
    s32 size;
    TexTableFile *file = entry->file;
    TexTableNode *node = entry->node;

    libc_strcpy(reinterpret_cast<unsigned int *>(path), reinterpret_cast<unsigned int *>(file->directory));
    if (node->name[0] == '-') {
        libc_strcat(path, entry->slots[-(s8)node->name[1]].node->name);
    } else {
        libc_strcat(path, node->name);
    }
    if (entry->node->compressed) {
        libc_strcat(path, ".cmp");
    } else {
        libc_strcat(path, ".stex");
    }

    if (libc_strlen(node->name) == 0) {
        entry->state = 0;
    } else if ((entry->flags & ~TEXENTRY_RETRY) == 0) {
        u32 mode = 1;
        if (entry->flags & TEXENTRY_RETRY)
            mode = 3;
        u32 loadFlags = mode;
        if (entry->node->compressed) {
            if (loadFlags & 2) {
                loadFlags &= ~2;
            } else {
                loadFlags |= 2;
            }
        }
        StexHeader *data = (StexHeader *)asdLoadFileSync(path, &size, loadFlags, 0x80);
        if (data != NULL) {
            if (entry->node->compressed)
                data = asdTMSprDecompress(data, mode, 0x80);
            if (rt_memcmp(data, "STEX", 4) == 0) {
                if (data->external == 0) {
                    s32 retry = 0;
                    if (entry->flags & TEXENTRY_RETRY)
                        retry = 1;
                    entry->texture = asdTextureCreate(retry);
                    entry->texture->target = data->target;
                    entry->texture->dimensions.width = data->width;
                    entry->texture->dimensions.height = data->height;
                    entry->texture->image.format = data->format;
                    entry->texture->image.type = data->type;
                    entry->texture->storage.unk28 = size - data->dataOffset;
                    entry->texture->storage.flags |= 0x10;
                    if (data->version == 1) {
                        entry->texture->unk3c = 1;
                        entry->texture->unk40 = 1;
                    }
                    entry->texture->storage.pixels = (u8 *)data + data->dataOffset;
                } else {
                    entry->texture = NULL;
                }
                entry->fileData = (u8 *)data;
                entry->flags |= 2;
                return 1;
            }
            asdMemFree(data);
        }
    }
    return 0;
}
}
