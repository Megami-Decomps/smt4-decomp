#ifndef SHARD_W6_W6MATCH3_NAMEFORMSTATEA_H
#define SHARD_W6_W6MATCH3_NAMEFORMSTATEA_H

#include "common.h"
#include "name/NameFormText.h"
#include "ui/UiSpriteState.h"

// Apocalypse keeps the same phase callbacks but has a smaller form prefix.
struct NameFormStateA {
    typedef void (NameFormStateA::*Callback)();

    u8 complete;       // 0x000
    u8 phase;          // 0x001
    u8 unk002[0xa];
    u32 frame;         // 0x00c
    union {
        u8 unk010[0xc4];
        NameFormTextFields text; // 0x010: length at 0x22, characters at 0xb0
        struct {
            /* 0x010 */ s32 cursorColumn;   /* the key under the cursor, of NAME_FORM_KEY_COLUMNS by NAME_FORM_KEY_ROWS */
            /* 0x014 */ s32 cursorRow;
            /* 0x018 */ u8 unk018[8];
            /* 0x020 */ s8 page;            /* the character page shown */
            /* 0x021 */ u8 unk021[7];
            /* 0x028 */ u8 alternate;       /* the page's alternate set (page + 4) */
            /* 0x029 */ u8 kindListHidden;  /* the character-kind list beside the keys is not drawn */
            /* 0x02A */ u8 unk02a[0x7a];
            /* 0x0A4 */ s32 sideOffset;     /* x the keys and the kind list slide in by */
            /* 0x0A8 */ u8 unk0a8[4];
            /* 0x0AC */ s32 backgroundOffset;
        } keyboard;
    };
    Callback handlers[12];  // 0x0d4
    u8 unk134[0xc8];
    /* 0x1FC */ u8 kindList[0x64];          /* list cursor over the character kinds */
    /* 0x260 */ s8 kindListFocused;         /* the cursor is on the kind list, not on a key */
    /* 0x261 */ u8 unk261[0x33];
    /* 0x294 */ UiSpriteState cursorSprite; /* its opacity pulses the cursor's glow */
    /* 0x320 */ u8 unk320[0x8c];
    /* 0x3AC */ UiSpriteState animation;    /* its opacity fades the whole panel */
    /* 0x438 */ u8 unk438[0x128];
    s16 countdown;     // 0x560
};
enum { NAME_FORM_KEY_COLUMNS = 15, NAME_FORM_KEY_ROWS = 6 };
typedef char NameFormKeyboardAOffsetCheck[offsetof(NameFormStateA, keyboard.cursorRow) == 0x14 &&
    offsetof(NameFormStateA, keyboard.kindListHidden) == 0x29 && offsetof(NameFormStateA, keyboard.sideOffset) == 0xa4 &&
    offsetof(NameFormStateA, keyboard.backgroundOffset) == 0xac && offsetof(NameFormStateA, kindList) == 0x1fc &&
    offsetof(NameFormStateA, kindListFocused) == 0x260 && offsetof(NameFormStateA, cursorSprite) == 0x294 &&
    offsetof(NameFormStateA, animation) == 0x3ac && offsetof(NameFormStateA, countdown) == 0x560 ? 1 : -1];
typedef char NameFormTextAOffsetCheck[offsetof(NameFormStateA, text) == 0x10 &&
    offsetof(NameFormStateA, handlers) == 0xd4 && sizeof(NameFormStateA) == 0x564 ? 1 : -1];

extern "C" void nameFormUpdate(NameFormStateA* form);

#endif
