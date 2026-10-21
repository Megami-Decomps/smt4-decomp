#include "common.h"

extern "C" {

typedef struct Effect {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ f32 scale;
    /* 0x78 */ f32 unk78;
} Effect;

typedef struct Target {
    /* 0x0 */ u32 flags;
    /* 0x4 */ u8 unk4[4];
    /* 0x8 */ Effect *effect;
} Target;

typedef struct TargetOwner {
    /* 0x0000 */ u8 unk0000[0x4398];
    /* 0x4398 */ Target *target;
} TargetOwner;

s32 FUN_0029bb14(f32 value);
s32 modelSetAnimationChannels(Target *target, s32 arg, f32 value);

/* Clears the target's pending flag (resetting its effect scale) and then refreshes the target. */
void FUN_0033a264(TargetOwner *owner)
{
    Target *target = owner->target;

    if (target != NULL) {
        if ((target->flags & 4) != 0) {
            target->flags &= ~4u;
            target->effect->scale = 1.0f;
            FUN_0029bb14(target->effect->unk78);
        }
        modelSetAnimationChannels(owner->target, 0, 0.0f);
    }
}

} /* extern "C" */
