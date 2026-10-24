/* UI sprite state with a keyframe table: selecting a keyframe resets its animation counters and snaps the position to the frame's primary or alternate point (12.20 fixed point). */
#ifndef UI_UISPRITEKEYFRAMES_H
#define UI_UISPRITEKEYFRAMES_H

#include "common.h"

struct UiSpriteKeyframe {
    /* 0x00 */ s16 x;
    /* 0x02 */ s16 y;
    /* 0x04 */ s16 altX;
    /* 0x06 */ s16 altY;
    /* 0x08 */ u8 unk08[4];
};

struct UiSpriteKeyframeState {
    /* 0x00 */ u8 unk00[0x0c];
    /* 0x0c */ s32 x;
    /* 0x10 */ s32 y;
    /* 0x14 */ u8 unk14[0x4c - 0x14];
    /* 0x4c */ UiSpriteKeyframe *keyframes;
    /* 0x50 */ u16 frame;
    /* 0x52 */ u16 elapsed;
    /* 0x54 */ u8 alternate;
    /* 0x55 */ u8 unk55[0x86 - 0x55];
    /* 0x86 */ u8 flagA;
    /* 0x87 */ u8 unk87[3];
    /* 0x8a */ u8 flagB;
};

#endif
