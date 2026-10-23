#ifndef UI_ANIMATEDDIGITPANEL_H
#define UI_ANIMATEDDIGITPANEL_H
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include <stddef.h>

struct DigitPanelDisplay {
    /* 0x000 */ u8 unk000[0x124];
    /* 0x124 */ s32 state;
    /* 0x128 */ u8 unk128[0xD0];
    /* 0x1F8 */ SpritePlaybackView position;
    /* 0x284 */ SpritePlaybackView contentPosition;
};

typedef char DigitPanelDisplayOffsets[
    offsetof(DigitPanelDisplay, state) == 0x124 &&
    offsetof(DigitPanelDisplay, position) == 0x1F8 &&
    offsetof(DigitPanelDisplay, contentPosition) == 0x284 ? 1 : -1];
#endif
