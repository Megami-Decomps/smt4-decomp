/* Menu/state object the game keeps behind a global pointer (smt4a DAT_0057f56c). It owns a
 * mode word, a type (6 = two-panel layout) and two animated panels. */
#ifndef UI_MENUSTATE_H
#define UI_MENUSTATE_H

#include "common.h"
#include "ui/UiSpriteState.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include <stddef.h>

typedef struct MenuState {
    union {
        /* 0x000 */ u8 unk00[8];
        /* 0x000 */ u32 process;
    };
    /* 0x008 */ u32 mode;                /* 0 = hidden; 2 = shown with the second panel's opacity */
    /* 0x00C */ u8 unk0c[4];
    /* 0x010 */ u8 captionShown;         /* the caption is drawn inside the window */
    /* 0x011 */ u8 unk11;
    union {
        /* 0x012 */ u8 unk12;
        /* 0x012 */ u8 frameSide;        /* 0/1: which of the window's two frame entries it is laid out in */
    };
    /* 0x013 */ u8 unk13;
    /* 0x014 */ s32 type;                /* ComWinType */
    union {
        /* 0x018 */ u8 unk18[0x24];
        /* 0x018 */ s16 iconId;          /* the id of the icon drawn before the caption (types 3-5) */
        struct {
            u8 prefix[4];
            /* 0x01C */ UiResourceParameters parameters;
        } resources;
    };
    /* 0x03C */ UiSpriteState primarySprites[2];
    /* 0x154 */ UiSpriteState secondarySprites[2];
    /* 0x26C */ char caption[0x40];
    /* 0x2AC */ u8 unk2ac[5];
    /* 0x2B1 */ u8 showSign;             /* the amount is drawn with its sign */
    /* 0x2B2 */ u8 unk2b2[2];
    /* 0x2B4 */ s32 amount;
    /* 0x2B8 */ u8 unk2b8[4];
    /* 0x2BC */ u32 unk2bc;
    /* 0x2C0 */ u32 unk2c0;
    /* 0x2C4 */ u32 unk2c4;
    /* 0x2C8 */ u32 unk2c8;
} MenuState;
/* MenuState.type: what the window shows. */
enum {
    COM_WIN_TYPE_BUTTONS = 1,   /* the caption after a two-part button mark */
    COM_WIN_TYPE_AMOUNT = 2,    /* a label, an icon and a signed amount */
    COM_WIN_TYPE_ITEM = 3,      /* the caption after an item category icon */
    COM_WIN_TYPE_RECORD = 4,    /* the caption after a table 0xB icon */
    COM_WIN_TYPE_LOWERED = 5,   /* the window drawn 60 lower, the caption after an icon */
    COM_WIN_TYPE_BADGE = 6      /* an item badge with its count */
};

typedef char MenuStateCaptionOffsets[
    offsetof(MenuState, captionShown) == 0x10 && offsetof(MenuState, frameSide) == 0x12 &&
    offsetof(MenuState, iconId) == 0x18 && offsetof(MenuState, caption) == 0x26C &&
    offsetof(MenuState, showSign) == 0x2B1 && offsetof(MenuState, amount) == 0x2B4 &&
    offsetof(MenuState, unk2bc) == 0x2BC ? 1 : -1];
typedef char MenuStateInitializationOffsets[
    offsetof(MenuState, process) == 0 &&
    offsetof(MenuState, resources.parameters) == 0x1C &&
    offsetof(MenuState, primarySprites) == 0x3C &&
    offsetof(MenuState, secondarySprites) == 0x154 &&
    sizeof(MenuState) == 0x2CC ? 1 : -1];

#endif
