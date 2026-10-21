#ifndef SHARD_W6_W6MATCH8_TEXTURERESOURCEFIXUP_H
#define SHARD_W6_W6MATCH8_TEXTURERESOURCEFIXUP_H

#include "shard/S1NwGfx.h"

struct TextureResourceLink {
    u8 unk00[0x1c];
    RelativePointer resource;
};
struct TextureImageStorage {
    u32 width;
    u32 height;
    u32 byteSize;
    RelativePointer data;
    u32 unk10;
    u32 bitsPerPixel;
    void *address;
    u32 memoryArea;
};
struct TextureResourceHeaderView {
    s32 kind;
    u8 unk04[0x28];
    TextureResourceHeaderView *boundOwner;
    u32 allocationFlags;
    u8 unk34[4];
    RelativePointer image;
};

#endif
