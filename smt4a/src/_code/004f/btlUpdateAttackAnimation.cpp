/* NON_MATCHING: compiler hoists cue selection into flag branches and schedules target/stack operands differently; alternate optimization may fix the two extra rows. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match2_AnimationVisualState.h"

struct BattleAnimationCue {
    s16 first;
    s16 frame;
    s16 third;
    s16 fourth;
};
struct BattleAnimationTiming {
    u8 unk00[8];
    BattleAnimationCue looping;
    BattleAnimationCue normal;
    s16 endFrame;
};
struct BattleAnimationResource {
    u8 unk00[4];
    s16 kind;
    u8 unk06[2];
    u8 flags;
    u8 unk09[0x77];
    s16 x;
    s16 y;
};
struct BattleAnimationTarget {
    u8 unk00[0x6a];
    s16 index;
};
struct BattleAnimationStep {
    u8 unk0000[0x339c];
    u32 flags;
    u8 unk33a0[0x14];
    u8 phase;
    u8 loopCount;
    s16 previousFrame;
    s16 loopLength;
    u8 unk33ba[2];
    BattleAnimationTarget *target;
    AnimationVisualState *animation;
    BattleAnimationTiming *timing;
    BattleAnimationResource *resource;
};

extern "C" {
u32 state2CIs4(AnimationVisualState *);
f32 animationGetModeChannelValue(AnimationVisualState *);
void FUN_00420f08(AnimationVisualState *);
s32 FUN_004f5238(BtlAuxA *, u32, u32, s32, s32, u32, s32, u32, u32, f32, f32);
void FUN_004f6254(BtlAuxA *, s32, s32);
void FUN_004fa414(BtlAuxA *);
u32 FUN_004fb43c(s16, u32, u32, s32, s32, s32, s32);

void btlUpdateAttackAnimation(BtlAuxA *battle)
{
    BattleAnimationStep *step = (BattleAnimationStep *)battle;
    if (state2CIs4(step->animation)) {
        s16 current = (s16)(s32)animationGetModeChannelValue(step->animation);
        s16 previous = step->previousFrame;
        if (previous > current) {
            ++step->loopCount;
            step->loopLength = previous;
            step->previousFrame = 0;
        }
        BattleAnimationResource *resource = step->resource;
        s16 frame = (s16)(step->loopLength * step->loopCount + current);
        if ((resource->flags & 1) && step->timing->endFrame <= frame &&
            !(step->flags & 0x2000)) {
            step->flags |= 0x2000;
        }
        if (!(resource->flags & 1) && step->loopCount != 0) {
            step->flags |= 0x1000;
        }
        BattleAnimationCue *cue = (resource->flags & 1) ?
            &step->timing->looping : &step->timing->normal;
        if (cue->frame == frame) {
            s32 target = step->target->index;
            FUN_004f5238(battle, target, target, 6, 0, 3, 0, 1, 0,
                         (f32)resource->x, (f32)resource->y);
        }
        FUN_004f6254(battle, frame, 2);
        step->previousFrame = (s16)(s32)animationGetModeChannelValue(step->animation);
    }
    if (!state2CIs4(step->animation) || (step->flags & 0x1000)) {
        FUN_00420f08(step->animation);
        step->phase = 12;
        FUN_004fa414(battle);
        s16 kind = step->resource->kind;
        if (kind == 15 || kind == 16) {
            FUN_004fb43c(0, 0, 0x1000132, 0, 0, 0, 0);
        } else {
            FUN_004fb43c(0, 0, 0x1000134, 0, 0, 0, 0);
        }
    }
}
}
