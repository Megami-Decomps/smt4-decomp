#include "common.h"

/* An animation key: the frame it fires on and its parameter. */
struct BtlAttackAnimKey {
    /* 0x00 */ s16 frame;
    /* 0x02 */ s16 param;
};

/* The key's color, as percentages. */
struct BtlAttackAnimColor {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ u8 red;
    /* 0x0A */ u8 green;
    /* 0x0B */ u8 blue;
};

/* The battle attack animation work as this step sees it. */
struct BtlAttackAnim {
    /* 0x0000 */ u8 unk0000[0x33B4];
    /* 0x33B4 */ u8 state;
    /* 0x33B5 */ u8 unk33B5[0xB];
    /* 0x33C0 */ void *animation;
    /* 0x33C4 */ BtlAttackAnimKey *key;
    /* 0x33C8 */ BtlAttackAnimColor *color;
};

extern "C" {

bool FUN_004212b8(void *animation);
f32 animationGetModeChannelValue(void *animation);
void FUN_004fbdd4(s32 a, s32 b, s32 param, f32 red, f32 green, f32 blue);
void FUN_004f6254(BtlAttackAnim *anim, s16 frame, s32 mode);
void FUN_00420fc0(void *animation);
void btlUpdateAttackAnimation(BtlAttackAnim *anim);

/* Steps the attack animation: fires the key on its frame, and once the animation has finished
 * moves to state 10 and updates the attack animation. */
void FUN_004fa15c(BtlAttackAnim *anim)
{
    if (!FUN_004212b8(anim->animation)) {
        s32 frame = (s32)animationGetModeChannelValue(anim->animation);
        if (anim->key->frame == frame) {
            FUN_004fbdd4(0, 0, anim->key->param, anim->color->red * 0.01f,
                         anim->color->green * 0.01f, anim->color->blue * 0.01f);
        }
        FUN_004f6254(anim, frame, 1);
    }
    if (FUN_004212b8(anim->animation)) {
        FUN_00420fc0(anim->animation);
        anim->state = 10;
        btlUpdateAttackAnimation(anim);
    }
}

} /* extern "C" */
