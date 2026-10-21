#ifndef SHARD_W6_W6MATCH8_NPCTEXTUREEFFECT_H
#define SHARD_W6_W6MATCH8_NPCTEXTUREEFFECT_H

#include "common.h"

struct NpcPortraitResource;
struct NpcTextureEffectWork {
    u32 unk00;
    s32 state;
    u32 unk08;
    s32 resourceState;
    s32 x;
    s32 y;
    f32 speed;
    u8 unk1c[4];
    f32 scaleX;
    f32 fade;
    f32 fadeStep;
    u8 unk2c[4];
    u8 stopWhenHidden;
    u8 unk31[3];
    f32 alpha;
    u8 unk38[4];
    s32 screenRegion;
    s32 table;
    s32 node;
    u8 unk48[4];
    NpcPortraitResource *portrait;
    s32 portraitId;
    u8 unk54[0xc];
    u8 animate;
    u8 unk61[0xf];
    u32 unk70[6];
    u8 unk88[0x34];
};

#endif
