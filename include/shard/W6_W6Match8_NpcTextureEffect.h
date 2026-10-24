#ifndef SHARD_W6_W6MATCH8_NPCTEXTUREEFFECT_H
#define SHARD_W6_W6MATCH8_NPCTEXTUREEFFECT_H

#include "common.h"

#include <stddef.h>

struct NpcPortraitResource;
struct NpcTableRecord;
struct NpcTexturePoint {
    f32 x;
    f32 y;
};
struct NpcTextureEffectWork {
    u32 unk00;
    s32 state;
    u32 unk08;
    s32 resourceState;
    s32 x;
    s32 y;
    f32 speed;
    union {
        u8 unk1c[4];
        f32 rotation;
    };
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
    union {
        u8 unk48[4];
        s32 handle;
    };
    NpcPortraitResource *portrait;
    s32 portraitId;
    u8 unk54[4];
    NpcTableRecord *record; // 0x58: row of the NPC table the effect was created for
    u8 unk5c[4];
    u8 animate;
    u8 unk61[0xf];
    u32 unk70[6];
    u8 unk88;
    u8 unk89[3];
    u32 unk8c;
    u32 unk90;
    u8 unk94;
    u8 unk95;
    u8 unk96[2];
    NpcTexturePoint points[3]; // 0x98: one anchor per texture slot
    NpcTexturePoint extra;     // 0xb0
    u8 unkb8[4];
};
typedef char NpcTextureEffectWorkLayoutCheck[
    sizeof(NpcTextureEffectWork) == 0xbc && offsetof(NpcTextureEffectWork, handle) == 0x48 &&
    offsetof(NpcTextureEffectWork, record) == 0x58 && offsetof(NpcTextureEffectWork, points) == 0x98 &&
    offsetof(NpcTextureEffectWork, extra) == 0xb0 ? 1 : -1];

#endif
