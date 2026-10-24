/* NON_MATCHING: retail compares the original mode in r0 against a separate copy in r4 and shares the image-key tests differently; built merges the compares */
#include "shard/W6_W6Match8_AnimatedSprite.h"

struct StatusDown {
    u8 unk00[0x28];             // 0x00
    SpritePlaybackView sprite;  // 0x28
};

extern "C" {

extern StatusDown *g_statusDown;

void uiSpriteSetKeyframe(SpritePlaybackView *sprite, s16 key, s8 mode);
void uiSpriteSetImageKeyframe(SpritePlaybackView *sprite, s16 key, s8 mode);

/* Selects the status-down sprite's animation key for the mode (0..3 -> 6..9) and its image key (8 for modes 0/1, 9 for 2/3). */
void FUN_00230b9c(s32 mode, s32 imageKey)
{
    StatusDown *status = g_statusDown;
    s32 key = mode;

    if (mode == 0) {
        key = 6;
    } else if (mode == 1) {
        key = 7;
    } else if (mode == 2) {
        key = 8;
    } else if (mode == 3) {
        key = 9;
    }
    if (mode == 0 || mode == 1) {
        imageKey = 8;
    } else if (mode == 2 || mode == 3) {
        imageKey = 9;
    }
    uiSpriteSetImageKeyframe(&status->sprite, imageKey, 0);
    uiSpriteSetKeyframe(&status->sprite, key, 0);
}

} /* extern "C" */
