#ifndef UI_SCREENWINDOWTRANSITION_H
#define UI_SCREENWINDOWTRANSITION_H
#include "common.h"
#include <stddef.h>
struct ScreenWindowTransition {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 state;
    /* 0x0C */ s32 frame;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ s32 current;
    /* 0x18 */ s32 previous;
    /* 0x1C */ u32 transition;
    /* 0x20 */ u32 flags;
};
struct ScreenWindowTextureRecord { u16 id; s16 texture; };
typedef char ScreenWindowTransitionLayoutCheck[(offsetof(ScreenWindowTransition, current) == 0x14 && sizeof(ScreenWindowTextureRecord) == 4) ? 1 : -1];
#endif
