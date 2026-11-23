/* The save/load menu's slot rows (Apocalypse): the summary record of one save file and the row that draws it. */
#ifndef SAVELOADUI_SAVESLOTROW_H
#define SAVELOADUI_SAVESLOTROW_H

#include "common.h"
#include <stddef.h>
#include "gfx/UiControlDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* One save file's summary (0x80 bytes). */
struct SaveSlotRecord {
    /* 0x00 */ char name[0x4D];     /* the text the row's title is formatted from */
    /* 0x4D */ u8 marked;           /* draws mark 0x17 when the file has no cycle count */
    /* 0x4E */ u8 unk4E[2];
    /* 0x50 */ s32 playSeconds;
    /* 0x54 */ u8 unk54[4];
    /* 0x58 */ u16 placeKind;       /* 0: no place name */
    /* 0x5A */ u16 placeIndex;
    /* 0x5C */ s16 iconIds[3];
    /* 0x62 */ u8 unk62;
    /* 0x63 */ u8 difficulty;       /* configValueName */
    /* 0x64 */ u16 level;
    /* 0x66 */ u16 cycle;           /* completed playthroughs; shown plus one */
    /* 0x68 */ u16 partnerId;       /* dataTable10FindValue gives its icon */
    /* 0x6A */ u8 unk6A;
    /* 0x6B */ u8 owned;
    /* 0x6C */ s32 placeLevel;
    /* 0x70 */ u8 unk70[0x10];
};

/* One row of the menu (0x44 bytes). */
struct SaveSlotRow {
    /* 0x00 */ s32 x;
    /* 0x04 */ s32 y;
    /* 0x08 */ f32 alpha;
    /* 0x0C */ char emptyLabel[0x18];       /* shown for a slot without a file */
    /* 0x24 */ char emptyLabelAlternate[0x18];
    /* 0x3C */ u32 frame;                   /* the frame image of a row with a file */
    /* 0x40 */ u32 emptyFrame;
};

typedef char SaveSlotRowLayoutCheck[sizeof(SaveSlotRecord) == 0x80 && offsetof(SaveSlotRecord, playSeconds) == 0x50 &&
    offsetof(SaveSlotRecord, iconIds) == 0x5C && offsetof(SaveSlotRecord, level) == 0x64 &&
    offsetof(SaveSlotRecord, owned) == 0x6B && offsetof(SaveSlotRecord, placeLevel) == 0x6C &&
    sizeof(SaveSlotRow) == 0x44 && offsetof(SaveSlotRow, frame) == 0x3C ? 1 : -1];

extern "C" {
/* Draws the row's slot number badge. */
void saveSlotRowDrawNumber(const SaveSlotRow *row, s32 value, const UiScaledDrawPosition *position, u32 color);
/* Draws an empty slot's row. `selected` is passed and not used. */
void saveSlotRowDrawEmpty(SaveSlotRow *row, const UiScaledDrawPosition *position, const char *text, s32 value, s32 selected);
void saveSlotRowDrawIcons(const SaveSlotRow *row, const SaveSlotRecord *record, const UiScaledDrawPosition *position);
void saveSlotRowDraw(SaveSlotRow *row, SaveSlotRecord *record, const TextureTableEntryIV *layout, s32 value, s32 selected,
                  s32 alternate);
void saveSlotRowDrawPlayTime(const SaveSlotRow *row, SaveSlotRecord *record, const UiScaledDrawPosition *position);
}

#endif
