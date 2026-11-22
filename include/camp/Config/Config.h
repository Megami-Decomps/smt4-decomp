/* camp/Config/Config.c: the camp's Config (options) screen. */
#ifndef CAMP_CONFIG_CONFIG_H
#define CAMP_CONFIG_CONFIG_H

#include "common.h"
#include <stddef.h>
#include "script/ScriptVm.h"
#include "ui/GridNavigation.h"
#include "ui/UiSpriteState.h"

/* Work area, Shin Megami Tensei IV. */
typedef struct ConfigWork {
    /* 0x00 */ GridNavigation cursor;
    /* 0x64 */ s32 state;
    /* 0x68 */ u8 unk68[8];
    /* 0x70 */ s16 touchGroupImage;       /* the touch region requested for the option frame's image */
    /* 0x72 */ u8 unk72[2];
    /* 0x74 */ s16 countA;
    /* 0x76 */ s16 touchGroup;
    /* 0x78 */ s16 choiceRegions[3];
    /* 0x7E */ s16 countB;
    /* 0x80 */ union {
        s32 unk80;             /* initial selection of the first row */
        s32 selectedChoice[10];
    };
    /* 0xA8 */ u8 flag;
    /* 0xA9 */ u8 unkA9[0x3];
    /* 0xAC */ void *heapA;               /* heap block, freed on close */
    /* 0xB0 */ void *heapB;               /* heap block, freed on close */
    /* 0xB4 */ ScriptProcess *resource;               /* released on close */
    /* 0xB8 */ u32 unkB8;
} ConfigWork;

typedef char ConfigWorkLayoutCheck[offsetof(ConfigWork, selectedChoice) == 0x80 &&
    offsetof(ConfigWork, flag) == 0xA8 && sizeof(ConfigWork) == 0xBC ? 1 : -1];

/* Table 0x36, section 0: the row heading and labels for its choice buttons. */
struct ConfigurationChoices {
    /* 0x00 */ char heading[30];
    /* 0x1E */ char labels[3][10];
    /* 0x3C */ char help[0x44];           /* the row's help text */
};
typedef char ConfigChoicesStrideCheck[sizeof(ConfigurationChoices) == 0x80 &&
    offsetof(ConfigurationChoices, help) == 0x3C ? 1 : -1];

/* Table 0x36, section 1 (0x50 bytes): the help text of one choice of the first row. */
struct ConfigHelpRecord {
    /* 0x00 */ char text[0x50];
};
typedef char ConfigWorkTouchOffsets[offsetof(ConfigWork, touchGroupImage) == 0x70 &&
    offsetof(ConfigWork, countA) == 0x74 ? 1 : -1];
/* FUN_0019715c tail-calls the draw with its third (unused here) display parameter in r2. */
extern "C" void configDrawOptionPanel(s32 x, s32 y, s32 display);
extern "C" void configDrawChoices(s32 count, s32 x, s32 y, s32 selected, const ConfigurationChoices *choices);

/* One row of the Apocalypse screen (8 bytes): the value it selects and its help text. */
typedef struct ConfigRowA {
    /* 0x00 */ s32 value;
    /* 0x04 */ u32 helpId;                /* record of table 0x36, section 1; the draw also names the row by it */
} ConfigRowA;

/* Table 0x36, section 1 (0x44 bytes): a help text. */
typedef struct ConfigHelpRecordA {
    /* 0x00 */ s8 text[0x44];
} ConfigHelpRecordA;

/* Table 0x36, section 0, Apocalypse: a heading and the names of the values. */
typedef struct ConfigNameTableA {
    /* 0x00 */ char heading[0x1e];
    /* 0x1e */ char names[5][0xc];
} ConfigNameTableA;

/* Work area, Shin Megami Tensei IV: Apocalypse. */
typedef struct ConfigWorkA {
    /* 0x00 */ GridNavigation cursor;
    /* 0x64 */ s32 state;                  /* 6 = closed */
    /* 0x68 */ s32 unk68;                  /* the state's own step */
    /* 0x6C */ s16 touchGroup;
    /* 0x6E */ s16 regions[5];             /* each row's touch region */
    /* 0x78 */ s16 count;                  /* touch regions in use */
    /* 0x7A */ u16 unk7A;
    /* 0x7C */ void *heapA;               /* heap block, freed on close */
    /* 0x80 */ void *heapB;               /* heap block, freed on close */
    /* 0x84 */ ScriptProcess *resource;               /* released on close */
    /* 0x88 */ s32 row;                    /* the selected row */
    /* 0x8C */ s32 firstRegionImage;       /* texture table entry of the first row's touch rectangle */
    /* 0x90 */ u8 unk90[4];
    /* 0x94 */ ConfigRowA rows[5];
    /* 0xBC */ u32 unkBC;                  /* the value in effect */
    /* 0xC0 */ u8 param;                   /* opened in game: a change has to be confirmed */
    /* 0xC1 */ u8 unkC1[3];
    /* 0xC4 */ s32 previous;               /* the value to restore when a change is refused */
    /* 0xC8 */ UiResourceParameters resources;
    /* 0xE8 */ UiSpriteState sprites[6];   /* [0] the frame, [1..5] the rows */
    /* 0x430 */ UiSpriteState cursorSprite;
    /* 0x4BC */ s32 frames;
    /* 0x4C0 */ s8 hasType24A;
    /* 0x4C1 */ s8 hasType24B;
    /* 0x4C2 */ u8 unk4C2[2];
    /* 0x4C4 */ s32 initialValue;          /* the value when the screen opened or last applied one */
    /* 0x4C8 */ s32 pendingValue;
} ConfigWorkA;
typedef char ConfigWorkALayoutCheck[
    sizeof(ConfigWorkA) == 0x4CC &&
    offsetof(ConfigWorkA, regions) == 0x6E &&
    offsetof(ConfigWorkA, rows) == 0x94 &&
    offsetof(ConfigWorkA, unkBC) == 0xBC &&
    offsetof(ConfigWorkA, sprites) == 0xE8 &&
    offsetof(ConfigWorkA, cursorSprite) == 0x430 &&
    offsetof(ConfigWorkA, frames) == 0x4BC &&
    offsetof(ConfigWorkA, initialValue) == 0x4C4 &&
    offsetof(ConfigWorkA, hasType24A) == 0x4C0 &&
    offsetof(ConfigWorkA, hasType24B) == 0x4C1 ? 1 : -1];

extern "C" {
u32 saveBlockGetPlaySeconds(void);
}

extern "C" {
u8 FUN_002973ec(void);
}

#endif
