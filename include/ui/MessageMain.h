/* Message windows: IV and Apocalypse work and banner layouts. */
#ifndef UI_MESSAGEMAIN_H
#define UI_MESSAGEMAIN_H
#include "common.h"
#include <stddef.h>

/* An object of the message module (both the state object and the banner begin like this). */
typedef struct MessageObject {
    /* 0x00 */ union {
        u8 unk00[0x5f];
        struct {
            u8 unk00[0x2c];
            u8 empty; // 0x2c: set when the message identifier is zero
        } message;
        struct {
            u8 unk00[8];
            u8 state; // 0x08
            u8 mode; // 0x09
            u8 unk0a[0x2b];
            u8 pending; // 0x35
        } close;
    };
    /* 0x5f */ u8 unk5f;
} MessageObject;

/* The box word belongs to the aligned message object, but a u32 member in the
 * odd-sized byte union would move the trailing byte at 0x5f. */
static __inline u32 messageObjectGetBox(const MessageObject *object)
{
    return *(const u32 *)(object->unk00 + 4);
}



typedef struct MessagePanel {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 box;
    /* 0x08 */ s8 state;
    /* 0x09 */ u8 mode;
    /* 0x0A */ u8 unk0A[0xE];
    /* 0x18 */ u32 value;
    /* 0x1C */ u32 choiceResult;
    /* 0x20 */ u8 unk20[0xF];
    /* 0x2F */ u8 unk2F;
    /* 0x30 */ u8 unk30;
    /* 0x31 */ u8 unk31;
    /* 0x32 */ u8 unk32;
    /* 0x33 */ u8 unk33;
    /* 0x34 */ u8 unk34;
    /* 0x35 */ u8 closeRequested;
    /* 0x36 */ u8 unk36[0x29];
    /* 0x5F */ u8 unk5F;
    /* 0x60 */ u8 unk60[4];
    /* 0x64 */ u32 unk64;
    /* 0x68 */ u8 unk68[0x4];
    /* 0x6C */ u32 unk6C;
    /* 0x70 */ u32 unk70;
    /* 0x74 */ u32 unk74;
    /* 0x78 */ u32 unk78;
    /* 0x7C */ u8 unk7C;
    /* 0x7D */ u8 unk7D;
    /* 0x7E */ u8 unk7E;
    /* 0x7F */ u8 unk7F;
    /* 0x80 */ u8 unk80;
    /* 0x81 */ u8 unk81;
    /* 0x82 */ s8 unk82;
    /* 0x83 */ u8 unk83[0x19];
    /* 0x9C */ u32 unk9C;
    /* 0xA0 */ u8 unkA0;
    /* 0xA1 */ u8 unkA1;
    /* 0xA2 */ u8 unkA2[2];
    /* 0xA4 */ u8 textBuffer[1];
    /* 0xA5 */ u8 unkA5[0x6AF];
    /* 0x754 */ u8 widget754[0x8C];
    /* 0x7E0 */ u8 widget7E0[0x8C];
    /* 0x86C */ u8 widget[1];
    /* 0x86D */ u8 unk86D[0x1CB];
    /* 0xA38 */ u32 taskValue;
} MessagePanel;

typedef struct MessageWork {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 box;
    /* 0x008 */ u8 state;
    /* 0x009 */ u8 mode;
    /* 0x00A */ u8 unk00A;
    /* 0x00B */ u8 unk00B;
    /* 0x00C */ u32 flags;
    /* 0x010 */ u8 unk010[4];
    /* 0x014 */ s32 unk014;
    /* 0x018 */ u32 value;
    /* 0x01C */ s32 choiceResult;
    /* 0x020 */ u8 unk020[0xC];
    /* 0x02C */ u8 empty;
    /* 0x02D */ u8 unk02D;
    /* 0x02E */ u8 unk02E[6];
    /* 0x034 */ u8 unk034;
    /* 0x035 */ u8 closeRequested;
    /* 0x036 */ u8 unk036[0x9DA];
    /* 0xA10 */ u8 unkA10;
    /* 0xA11 */ u8 displayMode;
    /* 0xA12 */ u8 unkA12[0x22];
    /* 0xA34 */ u8 unkA34;
    /* 0xA35 */ u8 unkA35[3];
    /* 0xA38 */ u32 taskValue;
} MessageWork;

typedef struct MessageWorkA {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 box;
    /* 0x08 */ u8 state;
    /* 0x09 */ u8 mode;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ u32 flags;
    /* 0x10 */ u8 unk10[0x24];
    /* 0x34 */ u8 unk34;
    /* 0x35 */ u8 closeRequested;
    /* 0x36 */ u8 unk36[0x198E];
    /* 0x19C4 */ u8 unk19C4;
    /* 0x19C5 */ u8 displayMode;
    /* 0x19C6 */ u8 unk19C6[0x22];
    /* 0x19E8 */ s8 unk19E8;            /* signed: retail addresses it in ldrsb range */
} MessageWorkA;

typedef struct MessagePanelA {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u8 flag08;
    /* 0x09 */ u8 unk09[0xF];
    /* 0x18 */ u32 value;
    /* 0x1C */ u32 choiceResult;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u8 unk24[0xB];
    /* 0x2F */ u8 unk2F;
    /* 0x30 */ u8 unk30;
    /* 0x31 */ u8 unk31;
    /* 0x32 */ u8 unk32;
    /* 0x33 */ u8 unk33;
    /* 0x34 */ u8 unk34[0x30];
    /* 0x64 */ u32 unk64;
    /* 0x68 */ u8 unk68[8];
    /* 0x70 */ u32 unk70;
    /* 0x74 */ u32 unk74;
    /* 0x78 */ u8 unk78[4];
    /* 0x7C */ u32 unk7C;
    /* 0x80 */ union {
        u32 unk80;
        struct {
            /* 0x80 */ u8 unk80Byte;
            /* 0x81 */ u8 unk81;
            /* 0x82 */ u8 unk82[2];
        } bytes;
    };
    /* 0x84 */ u32 unk84;
    /* 0x88 */ u32 unk88;
    /* 0x8C */ u8 unk8C;
    /* 0x8D */ u8 state;
    /* 0x8E */ u8 unk8E;
    /* 0x8F */ u8 unk8F;
    /* 0x90 */ u8 unk90;
    /* 0x91 */ u8 unk91;
    /* 0x92 */ u8 unk92;
    /* 0x93 */ u8 unk93;
    union {
        /* 0x94 */ u8 unk94[0xD4];
        struct {
            /* 0x94 */ u8 unk94BeforeLast[8];
            /* 0x9C */ s32 lastIndex;
            /* 0xA0 */ u8 states[12];
            /* 0xAC */ u32 ids[12];
            /* 0xDC */ u8 special[12];
            /* 0xE8 */ u8 unkE8;
            /* 0xE9 */ u8 pending;
        } removal;
    };
    /* 0x168 */ u32 unk168;
    /* 0x16C */ u8 unk16C;
    /* 0x16D */ u8 unk16D;
    /* 0x16E */ u8 unk16E[0xE];
    /* 0x17C */ u8 unk17C;
    /* 0x17D */ u8 unk17D;
    /* 0x17E */ u8 unk17E[0xE];
    /* 0x18C */ u32 unk18C;
    /* 0x190 */ u8 unk190;
    /* 0x191 */ u8 unk191;
    /* 0x192 */ u8 unk192;
    /* 0x193 */ u8 unk193;
    /* 0x194 */ u8 block194[1];
    /* 0x195 */ u8 unk195[0x96B];
    /* 0xB00 */ u8 blockB00[4];
    /* 0xB04 */ u8 unkB04[0x114];
    /* 0xC18 */ u8 spriteC18[0x8C];
    union {
        /* 0xCA4 */ u8 spritesCA4[21][0x8C]; // the sprites after spriteC18 in the same table
        struct {
            /* 0xCA4 */ u8 unkCA4BeforeRows[0x118];
            /* 0xDBC */ u8 rows[12][0x8C];
        } removalSprites;
    };
    /* 0x1820 */ u8 block1820[4];
    /* 0x1824 */ u8 unk1824[0x1D5];
    /* 0x19F9 */ u8 unk19F9;
    /* 0x19FA */ u8 unk19FA;
    /* 0x19FB */ u8 unk19FB;
    /* 0x19FC */ u32 unk19FC;
    /* 0x1A00 */ u8 unk1A00[0x10];
    /* 0x1A10 */ u8 unk1A10;
} MessagePanelA;

typedef struct MessageGlobals {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ MessageWork *state;
    /* 0x08 */ MessagePanel *banner;
    /* 0x0C */ MessagePanel *unk0C;
} MessageGlobals;

typedef struct MessageGlobalsA {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ MessageWorkA *state;
    /* 0x08 */ MessagePanelA *panel;
} MessageGlobalsA;

/* Retail 32-bit layout invariants. */
typedef char MessageObjectSizeCheck[sizeof(MessageObject) == 0x60 ? 1 : -1];
typedef char MessagePanelSizeCheck[sizeof(MessagePanel) == 0xA3C ? 1 : -1];
typedef char MessagePanelWordOffsetsCheck[offsetof(MessagePanel, unk6C) == 0x6C && offsetof(MessagePanel, unk78) == 0x78 ? 1 : -1];
typedef char MessagePanelWidgetOffsetsCheck[offsetof(MessagePanel, textBuffer) == 0xA4 && offsetof(MessagePanel, widget754) == 0x754 && offsetof(MessagePanel, widget) == 0x86C ? 1 : -1];
typedef char MessageWorkSizeCheck[sizeof(MessageWork) == 0xA3C ? 1 : -1];
typedef char MessageWorkASizeCheck[sizeof(MessageWorkA) == 0x19EC ? 1 : -1];
typedef char MessagePanelASizeCheck[sizeof(MessagePanelA) == 0x1A14 ? 1 : -1];
typedef char MessagePanelAFadeOffsetsCheck[offsetof(MessagePanelA, spritesCA4) == 0xCA4 && offsetof(MessagePanelA, unk19F9) == 0x19F9 && offsetof(MessagePanelA, unk19FC) == 0x19FC ? 1 : -1];
typedef char MessagePanelAModeOffsetsCheck[offsetof(MessagePanelA, unk7C) == 0x7C && offsetof(MessagePanelA, unk88) == 0x88 && offsetof(MessagePanelA, unk91) == 0x91 && offsetof(MessagePanelA, unk17D) == 0x17D ? 1 : -1];
typedef char MessagePanelARemovalOffsetsCheck[
    offsetof(MessagePanelA, removal.lastIndex) == 0x9C &&
    offsetof(MessagePanelA, removal.states) == 0xA0 &&
    offsetof(MessagePanelA, removal.ids) == 0xAC &&
    offsetof(MessagePanelA, removal.special) == 0xDC &&
    offsetof(MessagePanelA, removal.pending) == 0xE9 &&
    offsetof(MessagePanelA, removalSprites.rows) == 0xDBC &&
    sizeof(MessagePanelA) == 0x1A14 ? 1 : -1];
typedef char MessageGlobalsSizeCheck[sizeof(MessageGlobals) == 0x10 ? 1 : -1];
typedef char MessageGlobalsASizeCheck[sizeof(MessageGlobalsA) == 0xC ? 1 : -1];

#endif
