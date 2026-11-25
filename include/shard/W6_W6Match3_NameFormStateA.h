#ifndef SHARD_W6_W6MATCH3_NAMEFORMSTATEA_H
#define SHARD_W6_W6MATCH3_NAMEFORMSTATEA_H

#include "common.h"
#include "name/NameFormText.h"
#include "name/nameMain.h"
#include "ui/UiSpriteState.h"

struct ScriptProcess;

/* A name is eight two-byte glyphs followed by a terminator. */
struct NameFormBufferA {
    NameFormCharacter glyphs[9];
};

/* Apocalypse keeps the same phase callbacks but has a smaller form prefix. */
struct NameFormStateA {
    typedef void (NameFormStateA::*Callback)();
    struct CallbackTable {
        Callback phase00;
        Callback phase01;
        Callback phase02;
        Callback phase03;
        Callback phase04;
        Callback phase05;
        Callback phase06;
        Callback phase07;
        Callback phase08;
        Callback phase09;
        Callback phase10;
        Callback phase11;
    };

    /* 0x000 */ u8 complete;
    /* 0x001 */ u8 phase;
    /* 0x002 */ u8 unk002[2];
    /* 0x004 */ u32 unk004;
    /* 0x008 */ u8 unk008[4];
    /* 0x00C */ u32 frame;
    union {
        u8 unk010[0xc4];
        NameFormTextFields text; /* 0x010: length at 0x22, characters at 0xb0 */
        struct {
            /* 0x010 */ u8 unk010[0xA0];
            /* 0x0B0 */ NameFormBufferA edited;
            /* 0x0C2 */ NameFormBufferA original;
        } names;
        struct {
            /* 0x010 */ s32 cursorColumn;   /* the key under the cursor, of NAME_FORM_KEY_COLUMNS by NAME_FORM_KEY_ROWS */
            /* 0x014 */ s32 cursorRow;
            /* 0x018 */ u8 unk018[8];
            /* 0x020 */ s8 page;            /* the character page shown */
            /* 0x021 */ u8 unk021[7];
            /* 0x028 */ u8 alternate;       /* the page's alternate set (page + 4) */
            /* 0x029 */ u8 kindListHidden;  /* the character-kind list beside the keys is not drawn */
            /* 0x02A */ u8 unk02a[2];
            /* 0x02C */ u16 unk02C;
            /* 0x02E */ u16 unk02E;
            /* 0x030 */ u8 unk030[0x74];
            /* 0x0A4 */ s32 sideOffset;     /* x the keys and the kind list slide in by */
            /* 0x0A8 */ u32 unk0A8;
            /* 0x0AC */ s32 backgroundOffset;
        } keyboard;
    };
    union {
        /* 0x0D4 */ Callback handlers[12];
        /* 0x0D4 */ CallbackTable handlerTable;
    };
    /* 0x134 */ u8 unk134[0x64];
    /* 0x198 */ u8 keyboardGrid[0x64];
    /* 0x1FC */ u8 kindList[0x64];          /* list cursor over the character kinds */
    /* 0x260 */ s8 kindListFocused;         /* the cursor is on the kind list, not on a key */
    /* 0x261 */ s8 mode;
    /* 0x262 */ u8 unk262[2];
    /* 0x264 */ void *layoutFile;
    /* 0x268 */ void *scriptFile;
    /* 0x26C */ ScriptProcess *script;
    /* 0x270 */ s8 scriptStarted;
    /* 0x271 */ u8 unk271[3];
    /* 0x274 */ UiResourceParameters params;
    /* 0x294 */ UiSpriteState cursorSprite; /* its opacity pulses the cursor's glow */
    /* 0x320 */ UiSpriteState blinkSprite;
    /* 0x3AC */ UiSpriteState animation;    /* its opacity fades the whole panel */
    /* 0x438 */ u16 touchRegions[0x92];
    /* 0x55C */ s16 touchRegionCount;
    /* 0x55E */ u16 activationSound;
    /* 0x560 */ s16 countdown;
    /* 0x562 */ u8 finished;
};
enum { NAME_FORM_KEY_COLUMNS = 15, NAME_FORM_KEY_ROWS = 6 };
typedef char NameFormKeyboardAOffsetCheck[offsetof(NameFormStateA, keyboard.cursorRow) == 0x14 &&
    offsetof(NameFormStateA, keyboard.kindListHidden) == 0x29 && offsetof(NameFormStateA, keyboard.sideOffset) == 0xa4 &&
    offsetof(NameFormStateA, keyboard.backgroundOffset) == 0xac && offsetof(NameFormStateA, kindList) == 0x1fc &&
    offsetof(NameFormStateA, kindListFocused) == 0x260 && offsetof(NameFormStateA, cursorSprite) == 0x294 &&
    offsetof(NameFormStateA, animation) == 0x3ac && offsetof(NameFormStateA, countdown) == 0x560 ? 1 : -1];
typedef char NameFormTextAOffsetCheck[offsetof(NameFormStateA, text) == 0x10 &&
    offsetof(NameFormStateA, handlers) == 0xd4 && sizeof(NameFormStateA) == 0x564 ? 1 : -1];
typedef char NameFormConfirmationAOffsetCheck[
    sizeof(NameFormBufferA) == 0x12 && offsetof(NameFormStateA, names.edited) == 0xB0 &&
    offsetof(NameFormStateA, names.original) == 0xC2 && offsetof(NameFormStateA, mode) == 0x261 &&
    offsetof(NameFormStateA, script) == 0x26C && offsetof(NameFormStateA, scriptStarted) == 0x270 &&
    offsetof(NameFormStateA, blinkSprite) == 0x320 && offsetof(NameFormStateA, touchRegionCount) == 0x55C &&
    offsetof(NameFormStateA, finished) == 0x562 ? 1 : -1];

extern "C" void nameFormUpdate(NameFormStateA* form);

#endif
