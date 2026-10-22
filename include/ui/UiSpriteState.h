#ifndef UI_UISPRITESTATE_H
#define UI_UISPRITESTATE_H

#include "common.h"

struct UiSpriteState {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ s16 animation;
    /* 0x52 */ u8 unk52[0x0A];
    /* 0x5C */ s16 mode;
    /* 0x5E */ u8 unk5E[0x2E];
};

typedef char UiSpriteStateSizeCheck[sizeof(UiSpriteState) == 0x8C ? 1 : -1];

#endif
