#ifndef UI_PANEL_TRANSITION_H
#define UI_PANEL_TRANSITION_H
#include "common.h"
#include <stddef.h>

struct PanelTransition {
    /* 0x00 */ s32 delay;
    /* 0x04 */ s32 duration;
    /* 0x08 */ s32 frame;
    /* 0x0C */ s32 parameters[8];
    /* 0x2C */ f32 scale[3];
    /* 0x38 */ u32 unk38;
    /* 0x3C */ f32 scaleStep[3];
    /* 0x48 */ u32 unk48;
    /* 0x4C */ f32 opacity;
    /* 0x50 */ u8 unk50[0xC];
    /* 0x5C */ u32 first;
    /* 0x60 */ u32 second;
    /* 0x64 */ u32 third;
    /* 0x68 */ s32 hold;
    /* 0x6C */ u8 state;
    /* 0x6D */ u8 unk6d[3];
};
typedef char PanelTransitionLayout[sizeof(PanelTransition) == 0x70 &&
    offsetof(PanelTransition, scale) == 0x2c && offsetof(PanelTransition, scaleStep) == 0x3c &&
    offsetof(PanelTransition, state) == 0x6c ? 1 : -1];
#endif
