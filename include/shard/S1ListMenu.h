/* A list menu that draws its entries and a highlight cursor. */
#ifndef SHARD_S1LISTMENU_H
#define SHARD_S1LISTMENU_H

#include "common.h"

typedef struct Vec2Int {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
} Vec2Int;

/* A cursor entry: its icon is selected by the menu state. */
typedef struct MenuEntry {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u8 highlight;      /* the cursor image */
} MenuEntry;

typedef struct ListMenu {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s32 active;
    /* 0x00C */ u8 unk00C[0xBC];
    /* 0x0C8 */ Vec2Int position;
    /* 0x0D0 */ u8 unk0D0[0x460];
    /* 0x530 */ MenuEntry *entries[1];  /* indexed by cursor slot */
    /* 0x534 */ u8 unk534[0xFC];
    /* 0x630 */ u8 hidden;
    /* 0x631 */ u8 hasCursor;
    /* 0x632 */ u8 cursorMarked;
    /* 0x633 */ u8 unk633[0x5B9];
    /* 0xBEC */ f32 iconBAlpha;
    /* 0xBF0 */ u8 unkBF0[0x70];
    /* 0xC60 */ s32 iconA;
    /* 0xC64 */ u8 unkC64[4];
    /* 0xC68 */ s32 iconB;         /* -1: none */
} ListMenu;

#endif
