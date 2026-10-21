#ifndef SHARD_W6_W6MATCH8_EFFECT_SELECTION_H
#define SHARD_W6_W6MATCH8_EFFECT_SELECTION_H

#include "common.h"

struct EffectSelectionBlock {
    u32 unk00;
    u16 type;
    u16 unk06;
    u32 unk08;
    u16 id;
};
struct EffectSelectionItem {
    u8 data[0x90];
    EffectSelectionBlock *block;
};
struct EffectSelectionParts {
    u32 unk00;
    u16 type;
    u16 unk06;
    u16 id;
    u16 unk0a;
    void *data;
    u32 size;
};
struct EffectSelectionContext {
    u8 unk00[0xc];
    s32 index;
};
struct EffectSelectionTemplate {
    struct Indices {
        u8 unk00[0xc];
        s32 extraOffset; // 0x0c
    };
    union {
        u8 unk00[0x34];
        Indices indices;
    };
    EffectSelectionContext *context;
};
struct EffectSelectionCatalogEntry {
    EffectSelectionParts *parts;
    EffectSelectionTemplate *object;
    u8 unk08[0x14];
};

#endif
