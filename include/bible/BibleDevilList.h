/* IV: the compendium's devil list (the list view of bible/bibleDevil) and the stat rows it draws. */
#ifndef BIBLE_BIBLEDEVILLIST_H
#define BIBLE_BIBLEDEVILLIST_H

#include "common.h"
#include <stddef.h>
#include "shard/W6_W6Match4_FlaggedValueHolder.h"

#define BIBLE_STAT_ROWS 10

/* One listed devil (0x20 bytes). */
struct BibleDevilEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 devilId;
    /* 0x06 */ u8 unk06[6];
    /* 0x0C */ u8 statA;
    /* 0x0D */ u8 statB;
    /* 0x0E */ u8 unk0E[0x12];
};

/* The touch selection the list embeds (classes/Obj55ca08.h), as the drawers read it. */
struct BibleDevilTouchSelection {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ s8 selected;
    /* 0x12 */ u8 unk12[0x26];
    /* 0x38 */ u32 drawLayer;       /* the layer the list's entries are drawn on */
};

/* The devil list as its updaters and drawers read it (Obj42247c and the data its derived menus add). */
struct BibleDevilWork {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 step;
    /* 0x018 */ u8 unk018[8];
    /* 0x020 */ FlaggedValueHolder list; /* the scrolling selection: its count, first visible entry and cursor */
    /* ...   */ u8 unk020[0xA8 - sizeof(FlaggedValueHolder)];
    /* 0x0C8 */ u8 layout[0x494];
    /* 0x55C */ BibleDevilTouchSelection touchSelection;
    /* 0x598 */ u8 unk598[0xC];
    /* 0x5A4 */ s8 mode;            /* 0: per-devil columns, 1: compare two devils, other: detail */
    /* 0x5A5 */ s8 column;
    /* 0x5A6 */ u8 unk5A6[2];
    /* 0x5A8 */ BibleDevilEntry entries[1];
};

typedef char BibleDevilWorkLayoutCheck[sizeof(BibleDevilEntry) == 0x20 && offsetof(BibleDevilWork, list.count) == 0x28 && offsetof(BibleDevilWork, layout) == 0xC8 &&
    offsetof(BibleDevilWork, touchSelection) == 0x55C && offsetof(BibleDevilWork, touchSelection.drawLayer) == 0x594 &&
    offsetof(BibleDevilWork, mode) == 0x5A4 && offsetof(BibleDevilWork, entries) == 0x5A8 ? 1 : -1];

/* The stat rows the list draws beside its entries, filled by FUN_0022d1a8: the stat and its comparison colour,
 * then the position, digits and colour of the summon cost. Six adjacent arrays (0x49357c-0x493784): the list's
 * drawer reaches each through its own pool word, as for separate objects (Apocalypse's twins are the six
 * g_entryWindow* arrays of EntryWindowDraw.cpp). */
extern "C" {
extern u32 g_bibleDevilRowValue[BIBLE_STAT_ROWS];
extern u32 g_bibleDevilRowColor[BIBLE_STAT_ROWS];
extern s32 g_bibleDevilRowCostX[BIBLE_STAT_ROWS];
extern s32 g_bibleDevilRowCostY[BIBLE_STAT_ROWS];
extern char g_bibleDevilRowCostText[BIBLE_STAT_ROWS][0x20];
extern u32 g_bibleDevilRowCostColor[BIBLE_STAT_ROWS];
}

#endif
