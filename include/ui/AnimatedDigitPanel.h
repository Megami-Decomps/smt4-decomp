#ifndef UI_ANIMATEDDIGITPANEL_H
#define UI_ANIMATEDDIGITPANEL_H
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include <stddef.h>

/* State, animation channels and text storage for the animated camp digit panel. */
struct DigitPanelDisplay {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ u32 mode;
    /* 0x018 */ u8 unk018[0x38];
    /* 0x050 */ s32 scroll;
    /* 0x054 */ u8 unk054[0xD0];
    /* 0x124 */ s32 state;
    /* 0x128 */ s32 scrollBase;
    /* 0x12C */ u8 unk12C[0x40];
    /* 0x16C */ UiSpriteState screenPosition;
    /* 0x1F8 */ UiSpriteState position;
    /* 0x284 */ UiSpriteState contentPosition;
    /* 0x310 */ u8 unk310[0x230];
    /* 0x540 */ UiSpriteState background;
    /* 0x5CC */ u8 unk5CC[0xC];
    /* 0x5D8 */ void *labels;
};

typedef char DigitPanelDisplayOffsets[
    offsetof(DigitPanelDisplay, scroll) == 0x50 &&
    offsetof(DigitPanelDisplay, state) == 0x124 &&
    offsetof(DigitPanelDisplay, scrollBase) == 0x128 &&
    offsetof(DigitPanelDisplay, screenPosition) == 0x16C &&
    offsetof(DigitPanelDisplay, position) == 0x1F8 &&
    offsetof(DigitPanelDisplay, contentPosition) == 0x284 &&
    offsetof(DigitPanelDisplay, background) == 0x540 &&
    offsetof(DigitPanelDisplay, labels) == 0x5D8 ? 1 : -1];

extern "C" {
void FUN_003f5d94(DigitPanelDisplay *display, s32 x, s32 y, f32 alpha);
void FUN_003f6e24(DigitPanelDisplay *display, s32 x, s32 y, f32 alpha);
} /* extern "C" */

#endif
