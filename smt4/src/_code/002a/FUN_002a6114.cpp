/* NON_MATCHING: instructions match, but the final string-literal pool padding differs from the retail object. */
#include "shard/S1AsdTexTable.h"

extern "C" {

char *libc_strcpy(char *dst, const char *src);
char *libc_strcat(char *dst, const char *src);
u32 libc_strlen(const char *s);
typedef void (*AsdLoadCallback)(void *userData);
s32 asdLoadFileAsync(const char *path, s32 offset, u32 loadFlags, AsdLoadCallback callback, void *userData, s32 size);

/* Build the entry's file path (directory + name + extension) and start its asynchronous load. */
TexTableEntry *FUN_002a6114(TexTableEntry *entry, u32 mode)
{
    char path[64];
    TexTableFile *file = entry->file;
    TexTableNode *node = entry->node;

    libc_strcpy(path, file->directory);
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
        return entry;
    }
    u32 flags = entry->flags;
    if ((flags & ~TEXENTRY_RETRY) == 0) {
        if (mode == 0x20000) {
            flags |= TEXENTRY_MODE_20;
            entry->flags = flags;
        } else if (mode == 0x30000) {
            flags |= TEXENTRY_MODE_40;
            entry->flags = flags;
        }
        flags |= TEXENTRY_LOADING;
        entry->flags = flags;

        u32 loadFlags = 1;
        if (flags & TEXENTRY_RETRY) {
            loadFlags = 3;
        }
        if (entry->node->compressed) {
            if (loadFlags & 2) {
                loadFlags &= ~2;
            } else {
                loadFlags |= 2;
            }
        }
        asdLoadFileAsync(path, 0, loadFlags, (AsdLoadCallback)0x00153068, entry, 0x80);
    }
    return entry;
}

} /* extern "C" */
