#ifndef SHARD_W6_W6MATCH8_MODEL_REFRESH_H
#define SHARD_W6_W6MATCH8_MODEL_REFRESH_H

#include "common.h"

struct ModelRefreshProperties {
    u8 unk000[0x298];
    u32 binding;       /* 0x298 */
    s32 textureIndex;  /* 0x29c */
};
struct ModelRefreshResource {
    u8 unk00[0x54];
    ModelRefreshProperties *properties;
};
struct ModelRefreshNodeInfo {
    u8 unk00[0x68];
    s32 count;
};
struct ModelRefreshNode {
    u8 unk00[8];
    ModelRefreshNodeInfo *info;
    u8 unk0c[0x10];
    u32 commandFlags;  /* 0x1c */
};
struct ModelRefreshState {
    u8 unk00[8];
    ModelRefreshNode *node; /* 0x08 */
    u8 unk0c[8];
    u32 flags;             /* 0x14 */
    u8 unk18[8];
    ModelRefreshResource *resource; /* 0x20 */
    u8 unk24[0x1c];
    u8 binding[0xc];       /* 0x40 */
    u32 *nodes;            /* 0x4c */
    u8 unk50[0x14];
    u32 *materials;        /* 0x64 */
    u8 unk68[0x38];
    u32 texture;           /* 0xa0 */
    u8 unka4[0x1c];
    u32 *textures;         /* 0xc0 */
    u8 unkc4[0x1c];
    s32 nodeCount;         /* 0xe0 */
    s32 materialCount;     /* 0xe4 */
    u8 materialsDirty;     /* 0xe8 */
    u8 unke9;
    u8 nodesDirty;         /* 0xea */
    u8 stateDirty;         /* 0xeb */
    u8 textureDirty;       /* 0xec */
};

#endif
