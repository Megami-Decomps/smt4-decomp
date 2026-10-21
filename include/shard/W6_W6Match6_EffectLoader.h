#ifndef SHARD_W6_W6MATCH6_EFFECT_LOADER_H
#define SHARD_W6_W6MATCH6_EFFECT_LOADER_H

#include "battle/btlEffect.h"

struct EffectNameTable {
    u8 unk00[0x58];
    char names[4][0x16];
    char secondaryNames[4][0x16];
};
struct EffectResource {
    u8 handle;
    u8 unk01[3];
    const char *version;
    u8 storage[0x84];
};
struct EffectLoader {
    u8 unk0000[0x1cfc];
    EffectNameTable *names;
    u8 unk1d00[0x230];
    EffectResource resources[4]; // 0x1f30
    EffectResource secondaryResources[4]; // 0x2160
};

#endif
