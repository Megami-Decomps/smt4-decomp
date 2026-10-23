#ifndef UI_SPRITE_TRANSITION_GROUP_H
#define UI_SPRITE_TRANSITION_GROUP_H
#include "shard/W6_W6Match8_AnimatedSprite.h"

union SpriteTransitionMember {
    SpritePlaybackView playback;
    UiAnimatedSprite animation;
};
struct SpriteTransitionGroup {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ SpriteTransitionMember sprites[4];
    /* 0x250 */ s32 frame;
    /* 0x254 */ s32 state;
};
typedef char SpriteTransitionGroupLayoutCheck[sizeof(SpriteTransitionMember) == 0x8C &&
    offsetof(SpriteTransitionGroup, sprites) == 0x20 &&
    offsetof(SpriteTransitionGroup, frame) == 0x250 &&
    offsetof(SpriteTransitionGroup, state) == 0x254 && sizeof(SpriteTransitionGroup) == 0x258 ? 1 : -1];
#endif
