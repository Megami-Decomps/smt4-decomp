#include "common.h"

struct TexturePathHeader {
    u8 unk00[0x0c];
    char directory[1]; // 0x0c
};
struct TexturePathDescriptor {
    u8 unk00[8];
    const char *name; // 0x08
    u8 unk0c;
    u8 compressed; // 0x0d
};
struct TextureLoadNode {
    TexturePathHeader *header; // 0x00
    TexturePathDescriptor *descriptor; // 0x04
    u32 handle; // 0x08
    u32 unk0c;
    u32 flags; // 0x10
    u8 unk14[0x0c];
};
extern "C" {
char *libc_strcpy(char *destination, const char *source);
char *libc_strcat(char *destination, const char *source);
u32 wstrlen(const char *text);
void FUN_001b5154();
u32 FUN_001bcfb4(const char *path, u32 mode, u32 flags, void (*callback)(), TextureLoadNode *node, u32 alignment);
}

// Resolve a node's texture path, choose its compression mode and submit the load.
extern "C" TextureLoadNode *asdMTeXLoadNodeTexturePath(TextureLoadNode *node, u32 request)
{
    TexturePathDescriptor *descriptor = node->descriptor;
    char path[64];
    libc_strcpy(path, node->header->directory);
    const char *name = descriptor->name;
    if (*name == '-') {
        TextureLoadNode *alias = node - static_cast<s8>(name[1]);
        libc_strcat(path, alias[48].descriptor->name);
    } else
        libc_strcat(path, name);
    if (node->descriptor->compressed)
        libc_strcat(path, ".cmp");
    else
        libc_strcat(path, ".stex");
    if (wstrlen(descriptor->name) == 0) {
        node->handle = 0;
        return node;
    }
    u32 flags = node->flags;
    if ((flags & ~0x10000u) == 0) {
        if (request == 0x20000)
            node->flags = flags |= 0x20;
        else if (request == 0x30000)
            node->flags = flags |= 0x40;
        flags |= 1;
        node->flags = flags;
        u32 options = 1;
        if (flags & 0x10000)
            options = 3;
        if (node->descriptor->compressed) {
            if (options & 2)
                options &= ~2u;
            else
                options |= 2;
        }
        FUN_001bcfb4(path, 0, options, FUN_001b5154, node, 0x80);
    }
    return node;
}
