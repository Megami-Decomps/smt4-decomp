#ifndef GFX_UI_CONTROL_DRAW_H
#define GFX_UI_CONTROL_DRAW_H

#include "common.h"
#include <stddef.h>

/* Position prefix used by the menu's composite arrow/scroll controls. */
struct UiControlDrawPosition {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 x;
};
typedef char UiControlDrawPositionLayout[(sizeof(UiControlDrawPosition) == 8 && offsetof(UiControlDrawPosition, x) == 4) ? 1 : -1];

struct UiScaledDrawPosition {
    /* 0x00 */ s32 x;
    /* 0x04 */ s32 y;
    /* 0x08 */ f32 speed;
};
typedef char UiScaledDrawPositionLayout[(sizeof(UiScaledDrawPosition) == 12 &&
    offsetof(UiScaledDrawPosition, y) == 4 && offsetof(UiScaledDrawPosition, speed) == 8) ? 1 : -1];

#endif
