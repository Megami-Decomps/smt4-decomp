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
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ class Obj4209d8 *queryObject;   /* the model/grid query interface */
    /* 0x0c */ s32 variant;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ s32 pulsePeriod;
    /* 0x18 */ f32 scale;
    /* 0x1c */ u32 defaultValue;
    union {
        /* 0x20 */ u8 unk20[0x60];
        struct {
            /* 0x20 */ u8 unk20[8];
            /* 0x28 */ f32 growingAcceleration;
            /* 0x2C */ f32 shrinkingAcceleration;
        } motion;
    };
    /* 0x80 */ u64 flashMask;
    /* 0x88 */ u8 unk88[0x10];
    /* 0x98 */ u64 markerMask;
};

struct BattleMotionHandle;
struct BattleRosterMotionA {
    /* 0x000 */ u8 unk000[0x0C];
    /* 0x00C */ f32 position[3];
    /* 0x018 */ u8 unk018[0x10];
    /* 0x028 */ f32 yaw;
    /* 0x02C */ u8 unk02c[0x14];
    /* 0x040 */ f32 scale;
    /* 0x044 */ u8 unk044[4];
    /* 0x048 */ u32 state;
    /* 0x04C */ u32 stateFrame;
    /* 0x050 */ u32 flags;
    /* 0x054 */ u8 unk054[4];
    /* 0x058 */ u32 renderFlags;
    /* 0x05C */ u8 unk05c[4];
    /* 0x060 */ u16 statusFlags;
    /* 0x062 */ u16 frame;
    /* 0x064 */ u32 key;
    /* 0x068 */ s16 unitIndex;
    /* 0x06A */ s16 group;
    /* 0x06C */ u32 color;
    /* 0x070 */ u8 unk070[8];
    /* 0x078 */ s32 colorDuration;
    /* 0x07C */ s32 colorFrame;
    /* 0x080 */ s32 alphaDuration;
    /* 0x084 */ s32 alphaFrame;
    /* 0x088 */ u32 opacity;
    /* 0x08C */ u32 colorTarget;
    /* 0x090 */ u32 colorStart;
    /* 0x094 */ u8 unk094[0x10];
    /* 0x0A4 */ u32 pulseFrame;
    /* 0x0A8 */ u32 pulseDuration;
    /* 0x0AC */ u32 motionDuration;
    /* 0x0B0 */ f32 amount;
    /* 0x0B4 */ u8 unk0b4[0x10];
    /* 0x0C4 */ f32 motionScale;
    /* 0x0C8 */ f32 offset;
    /* 0x0CC */ u8 unk0cc[0x1C];
    /* 0x0E8 */ f32 amplitude;
    /* 0x0EC */ u8 unk0ec[0x10];
    /* 0x0FC */ f32 phase;
    /* 0x100 */ f32 phaseSpeed;
    /* 0x104 */ u8 unk104[0x10];
    /* 0x114 */ u32 markers[5];
    /* 0x128 */ u8 selection[0x94];
    /* 0x1BC */ BattleMotionHandle **handle;
    /* 0x1C0 */ u8 unk1c0[8];
    /* 0x1C8 */ s16 pending;
    /* 0x1CA */ u16 applied;
    /* 0x1CC */ s16 pendingAlternate;
    /* 0x1CE */ u16 appliedAlternate;
};
struct BattleMotionSubject {
    union {
        /* 0x000 */ u8 unk000[0x110];
        struct {
            /* 0x000 */ u8 flags;
            /* 0x001 */ u8 unk001[0x0B];
            /* 0x00C */ s32 ids[1];
        } appearance;
    };
    /* 0x110 */ u16 status;
};
struct BattleMotionSelection {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ s8 kind;
    /* 0x03 */ u8 unk03;
};
struct BattleMotionCameraSubject {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ f32 position[3];
};
/* Interpolate packed components before masking, matching the renderer's fixed channel representation. */
static __inline u32 battleBlendColorComponent(u32 target, u32 start, u32 mask, f32 progress)
{
    target &= mask;
    start &= mask;
    if (target < start) {
        return (target + (u32)((f32)(start - target) * (1.0f - progress))) & mask;
    }
    return (start + (u32)((f32)(target - start) * progress)) & mask;
}
typedef char BattleRosterMotionASizeCheck[sizeof(BattleRosterMotionA) == 0x1D0 ? 1 : -1];
typedef char BattleEffectGlobalsSizeCheck[sizeof(BattleEffectGlobals) == 0xA0 ? 1 : -1];

#endif
