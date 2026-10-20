/* Menu/state object the game keeps behind a global pointer (smt4a DAT_0057f56c). It owns a
 * mode word, a type (6 = two-panel layout) and two animated panels. */
#ifndef UI_MENUSTATE_H
#define UI_MENUSTATE_H

#include "common.h"

typedef struct MenuState {
    /* 0x000 */ u8 unk00[8];
    /* 0x008 */ u32 mode;
    /* 0x00C */ u8 unk0c[6];
    /* 0x012 */ u8 unk12;
    /* 0x013 */ u8 unk13;
    /* 0x014 */ s32 type;
    /* 0x018 */ u8 unk18[0x24];
    /* 0x03C */ u8 panelA[0x118];
    /* 0x154 */ u8 panelB[0x168];
    /* 0x2BC */ u32 unk2bc;
    /* 0x2C0 */ u32 unk2c0;
    /* 0x2C4 */ u32 unk2c4;
    /* 0x2C8 */ u32 unk2c8;
} MenuState;

#endif
