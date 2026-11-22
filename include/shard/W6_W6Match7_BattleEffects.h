#ifndef SHARD_W6_W6MATCH7_BATTLEEFFECTS_H
#define SHARD_W6_W6MATCH7_BATTLEEFFECTS_H
#include "common.h"
#include <stddef.h>

struct BattleEffectSetup {
    /* 0x000 */ u8 unk00[0xc];
    /* 0x00c */ f32 position[3];
    /* 0x018 */ u8 unk18[0x24];
    /* 0x03c */ u8 variant;
    /* 0x03d */ u8 unk3d[3];
    /* 0x040 */ f32 scale;
    /* 0x044 */ u8 unk44[0xC];
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
    /* 0x04 */ u8 resetMotion;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ class Obj4209d8 *queryObject;   /* the model/grid query interface */
    /* 0x0c */ s32 variant;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ s32 pulsePeriod;
    /* 0x18 */ f32 scale;
    /* 0x1c */ u32 defaultValue;
    union {
        /* 0x20 */ u8 unk20[0x60];
        struct {
            /* 0x20 */ f32 initialAmount;
            /* 0x24 */ f32 initialSpeed;
            /* 0x28 */ f32 growingAcceleration;
            /* 0x2C */ f32 shrinkingAcceleration;
        } motion;
        struct {                    /* the bits of a battle entry's 64-bit flags (BtlCombatantEntryA.flags) */
            u8 unk20[0x10];
            /* 0x30 */ u64 active;
            /* 0x38 */ u64 downed;         /* kept through the removal */
            /* 0x40 */ u64 party;          /* the entry is an active party position */
            /* 0x48 */ u64 present;
            /* 0x50 */ u64 guest;
            /* 0x58 */ u64 actionsCleared;
            /* 0x60 */ u8 unk60[0x10];
            /* 0x70 */ u64 removing;       /* the retired unit's cleanup removes it instead */
            /* 0x78 */ u64 reserved;       /* kept as present and active */
        } entryFlags;
    };
    /* 0x80 */ u64 flashMask;
    /* 0x88 */ u8 unk88[0x10];
    /* 0x98 */ u64 markerMask;
};

/* Apocalypse: what a roster record's motion handle points at (observed prefix). */
struct BattleMotionHandle {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *model;       /* the model whose motions play */
};
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
    /* 0x094 */ u8 unk094[0xC];
    /* 0x0A0 */ u8 useAlternateState;
    /* 0x0A1 */ u8 unk0A1[3];
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
enum {
    BATTLE_MOTION_CAMERA_SWITCHED = 0x400000 /* BattleRosterMotionA::flags: the running sequence has started its camera switch */
};
/* Ends the record's motion request: remembers it as the last one applied and rewinds the sequence. */
static __inline void battleRosterMotionEndRequest(BattleRosterMotionA *motion)
{
    motion->applied = motion->pending;
    motion->pending = 0;
    motion->pendingAlternate = 0;
    motion->appliedAlternate = 0;
    motion->flags &= ~BATTLE_MOTION_CAMERA_SWITCHED;
}
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
/* A row of the battle motion file's table 0, keyed by the unit id: which motion set the unit uses. */
struct BattleMotionSelection {
    /* 0x00 */ s16 id;
    /* 0x02 */ s8 kind;      /* the table of BattleMotionSequence rows, 0 = none */
    /* 0x03 */ u8 unk03[0x35];
};
/* One step of a motion sequence: the animation to blend into and what else starts with it. */
struct BattleMotionStep {
    /* 0x00 */ s32 animation;
    /* 0x04 */ f32 blend;            /* blend time passed to the motion player */
    /* 0x08 */ s32 loops;            /* nonzero: the animation loops and the step never advances by itself */
    /* 0x0C */ u32 startsReferenced : 1;
               u32 referencedIndex : 10; /* asdModelStartReferencedAnimation */
               u32 startsClip : 1;
               u32 clipIndex : 10;       /* targetStartIndexWithFlag2 */
};
/* A row of one of the motion file's kind tables, keyed by the motion a roster record asks for. */
struct BattleMotionSequence {
    /* 0x00 */ u32 motion;
    /* 0x04 */ BattleMotionStep steps[3];
    /* 0x34 */ u32 endsInDefeat;     /* the sequence ends by queueing the unit's defeat reflection */
    /* 0x38 */ u8 unk38;
    /* 0x39 */ u8 cameraFlags;       /* bit 0: starts a camera switch; bit 1: the switch holds the camera */
    /* 0x3A */ s16 cameraSwitch;
    /* 0x3C */ u8 unk3C[0x2C];
};
typedef char BattleMotionRecordLayoutCheck[
    sizeof(BattleMotionSelection) == 0x38 && sizeof(BattleMotionStep) == 0x10 &&
    offsetof(BattleMotionSequence, endsInDefeat) == 0x34 && offsetof(BattleMotionSequence, cameraSwitch) == 0x3A &&
    sizeof(BattleMotionSequence) == 0x68 ? 1 : -1];
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
extern "C" {
/* Apocalypse: starts motion `index` on the handle's model at frame zero, blending over `value`, looping when
 * `enabled` (FUN_004d888c). The float comes before the flag: btlRosterMotionStepSequence's calls load it after the flag. */
void FUN_004d888c(BattleMotionHandle **handle, u32 index, f32 value, u32 enabled);
}

typedef char BattleRosterMotionASizeCheck[sizeof(BattleRosterMotionA) == 0x1D0 ? 1 : -1];
typedef char BattleRosterMotionAStateOffsetCheck[offsetof(BattleRosterMotionA, useAlternateState) == 0xA0 ? 1 : -1];
typedef char BattleEffectGlobalsSizeCheck[sizeof(BattleEffectGlobals) == 0xA0 ? 1 : -1];

#endif
