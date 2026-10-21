#ifndef SHARD_W6_W6MATCH7_BATTLEEFFECTS_H
#define SHARD_W6_W6MATCH7_BATTLEEFFECTS_H
#include "common.h"

struct BattleEffectSetup {
    /* 0x000 */ u8 unk00[0xc];
    /* 0x00c */ f32 position[3];
    /* 0x018 */ u8 unk18[0x24];
    /* 0x03c */ u8 variant;
    /* 0x03d */ u8 unk3d[0x13];
    /* 0x050 */ u32 flags;
    /* 0x054 */ u8 unk54[4];
    /* 0x058 */ u32 renderFlags;
    /* 0x05c */ u8 unk5c[6];
    /* 0x062 */ u16 frame;
    /* 0x064 */ u8 unk64[6];
    /* 0x06a */ s16 group;
    /* 0x06c */ u32 value6c, value70, value74;
    /* 0x078 */ u8 unk78[0x10];
    /* 0x088 */ u32 opacity;
    /* 0x08c */ u8 unk8c[8];
    /* 0x094 */ u32 value94, value98;
    /* 0x09c */ u8 unk9c[8];
    /* 0x0a4 */ s32 pulseTime;
    /* 0x0a8 */ u8 unka8[0x128];
};

struct BattleEffectGlobals {
    /* 0x00 */ u8 red, green, blue, alpha;
    /* 0x04 */ u8 unk04[8];
    /* 0x0c */ s32 variant;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ s32 pulsePeriod;
    /* 0x18 */ f32 scale;
    /* 0x1c */ u32 defaultValue;
    /* 0x20 */ u8 unk20[0x60];
    /* 0x80 */ u64 flashMask;
    /* 0x88 */ u8 unk88[0x10];
    /* 0x98 */ u64 markerMask;
};
#endif
