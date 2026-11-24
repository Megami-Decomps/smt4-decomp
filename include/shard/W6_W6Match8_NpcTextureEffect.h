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
    f32 releaseTimer;          // 0x2c: counts down to releasing the last image's texture node
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
    f32 animationFrame;        // 0x5c
    u8 animate;
    u8 unk61[3];
    s32 slideFrame;            // 0x64: x slides from slideDistance to 0 over slideFrames frames
    s32 slideFrames;
    s32 slideDistance;
    union {
        u32 unk70[6];
        struct {
            s32 startX, startY;    // 0x70
            s32 endX, endY;        // 0x78
            s32 frame;             // 0x80
            s32 frames;            // 0x84: 0 when no move runs
        } move;                    // a straight move of (x, y)
    };
    u8 active;                 // 0x88
    u8 unk89[3];
    s32 shortCycleFrame;       // 0x8c: counts 0-29 while active
    s32 longCycleFrame;        // 0x90: counts 0-149 while active
    u8 appearEventQueued;      // 0x94
    u8 fadeOutEventQueued;     // 0x95
    u8 unk96[2];
    NpcTexturePoint points[3]; // 0x98: one anchor per texture slot
    NpcTexturePoint extra;     // 0xb0
    u8 unkb8[4];
};
typedef char NpcTextureEffectWorkLayoutCheck[
    sizeof(NpcTextureEffectWork) == 0xbc && offsetof(NpcTextureEffectWork, handle) == 0x48 &&
    offsetof(NpcTextureEffectWork, record) == 0x58 && offsetof(NpcTextureEffectWork, points) == 0x98 &&
    offsetof(NpcTextureEffectWork, extra) == 0xb0 && offsetof(NpcTextureEffectWork, slideFrame) == 0x64 &&
    offsetof(NpcTextureEffectWork, move.frames) == 0x84 && offsetof(NpcTextureEffectWork, active) == 0x88 &&
    offsetof(NpcTextureEffectWork, fadeOutEventQueued) == 0x95 ? 1 : -1];

#endif
