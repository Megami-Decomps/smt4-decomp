#ifndef SHARD_W6_W6MATCH7_TEXTUREBINDING_H
#define SHARD_W6_W6MATCH7_TEXTUREBINDING_H
#include "common.h"

struct TextureBindingSources {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *primary[3];
    /* 0x10 */ void *secondary[3];
    /* 0x1c */ u8 unk1c[0x93];
    /* 0xaf */ u8 alternate[3];
};

struct TextureBindingState {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u32 flags;
    /* 0x00c */ u8 unk00c[0x4c];
    /* 0x058 */ TextureBindingSources sources;
    /* 0x10c */ u8 unk10c[0x664];
    /* 0x770 */ u32 configuration;
};

struct TextureBindingCache {
    /* 0x000 */ u32 defaultPrimary;
    /* 0x004 */ u32 defaultSecondary;
    /* 0x008 */ u8 unk008[0x808];
    /* 0x810 */ u32 *primary[3];
    /* 0x81c */ u32 *secondary[3];
};
#endif
