#ifndef SHARD_W6_W6MATCH8_TEXTURE_SWAP_H
#define SHARD_W6_W6MATCH8_TEXTURE_SWAP_H

#include "common.h"

struct ContentRecordKey;

struct TextureSwap {
    struct Content {
        u32 unk00;
        const ContentRecordKey *key; // 0x04
        u32 unk08;
    };
    union {
        u8 unk00[0xc];
        Content content;
    };
    void *texture;
    u32 node;
    s32 entry;
    s32 queuedEntry;
    u8 unk1c[0xc];
    f32 transition;
    u8 unk2c[4];
    u8 transitionEnabled;
    u8 unk31[0x4b];
    u8 deferred;
    u8 unk7d[3];
    void *previousTexture;
    s32 previousEntry;
    u8 unk88[5];
    u8 blocked;
};

#endif
