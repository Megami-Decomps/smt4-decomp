/* NON_MATCHING: retail computes each sprite address before the key/mode constants in every case; armcc schedules the add after them. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

extern "C" {

/* An owner of eight animated sprites at 0x20. */
typedef struct SpriteSetOwner {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ SpritePlaybackView sprites[8];
} SpriteSetOwner;

void timerStart(SpritePlaybackView *sprite, s32 key, s32 mode);
void spriteStartAnimationByIndex(SpritePlaybackView *sprite, s32 key);

static __inline void spriteSetStart(SpritePlaybackView *sprite, s32 key)
{
    timerStart(sprite, key, 0);
}

/* Starts the animation of sprite `index`; sprite 2 starts through its own sequence. */
void FUN_00233240(SpriteSetOwner *owner, u32 index)
{
    switch (index) {
    case 0:
        spriteSetStart(&owner->sprites[0], 0);
        break;
    case 4:
        spriteSetStart(&owner->sprites[4], 3);
        break;
    case 1:
        spriteSetStart(&owner->sprites[1], 1);
        break;
    case 5:
        spriteSetStart(&owner->sprites[5], 4);
        break;
    case 2:
        spriteStartAnimationByIndex(&owner->sprites[2], 0);
        break;
    case 3:
        spriteSetStart(&owner->sprites[3], 2);
        break;
    case 6:
        spriteSetStart(&owner->sprites[6], 5);
        break;
    case 7:
        spriteSetStart(&owner->sprites[7], 6);
        break;
    }
}

} /* extern "C" */
