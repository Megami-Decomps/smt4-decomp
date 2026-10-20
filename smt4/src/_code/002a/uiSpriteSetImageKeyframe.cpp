/* NON_MATCHING: the keyframe offset (index * 3) takes r4 (with push/pop) instead of reusing the dead index register r1. */
#include "common.h"

extern "C" {

typedef struct ImageKeyframe {
    /* 0x0 */ u32 imageA;
    /* 0x4 */ u32 imageB;
    /* 0x8 */ u32 unk8;
} ImageKeyframe; /* 0xC bytes */

typedef struct UiSprite {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 image;
    /* 0x24 */ u8 unk24[0x34];
    /* 0x58 */ ImageKeyframe *keyframes;
    /* 0x5C */ s16 keyframeIndex;
    /* 0x5E */ u16 keyframeTime;
    /* 0x60 */ s8 imageSelect;
    /* 0x61 */ u8 unk61[0x26];
    /* 0x87 */ u8 unk87;
    /* 0x88 */ u8 unk88[2];
    /* 0x8A */ u8 unk8a;
} UiSprite;

/* Selects keyframe `index` of the sprite's image list (image A, or B when `select` is non-zero) and restarts its timing. */
void uiSpriteSetImageKeyframe(UiSprite *sprite, s32 index, s32 select)
{
    ImageKeyframe *keyframe;

    if (sprite->keyframes != NULL) {
        sprite->keyframeIndex = index;
        sprite->keyframeTime = 0;
        sprite->unk87 = 0;
        keyframe = &sprite->keyframes[index];
        sprite->unk8a = 0;
        sprite->imageSelect = select;
        if (select != 0) {
            sprite->image = keyframe->imageB;
        } else {
            sprite->image = keyframe->imageA;
        }
    }
}

}
