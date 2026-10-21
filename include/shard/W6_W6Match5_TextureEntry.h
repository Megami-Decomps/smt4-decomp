#ifndef SHARD_W6_W6MATCH5_TEXTUREENTRY_H
#define SHARD_W6_W6MATCH5_TEXTUREENTRY_H

#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
struct TexTableNode;

struct TextureHeapEntry {
    u32 unk00;
    union {
        u32 unk04;
        TexTableNode* node; // 0x04
    };
    AsdTexture *texture; // 0x08
    union {
        u32 unk0c;
        u8* fileData; // 0x0c
    };
    u32 flags; // 0x10
};

#endif
