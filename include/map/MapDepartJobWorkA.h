/* map/mapDepart.c (Apocalypse): the departure job's block and the request that starts it. */
#ifndef MAP_MAPDEPARTJOBWORKA_H
#define MAP_MAPDEPARTJOBWORKA_H

#include "map/mapDepart.h"
#include "ui/UiSpriteState.h"

/* MapDepartureRequestA.mode / MapDepartJobWorkA.mode */
enum MapDepartModeA {
    MAP_DEPART_MODE_EXIT,       /* leaving through the map's exit: the relics found are totalled */
    MAP_DEPART_MODE_ITEMS,      /* up to four items, with the caller's totals */
    MAP_DEPART_MODE_ITEMS_PLAIN, /* up to four items; totals only for MAP_DEPART_TOTALS_ITEM */
    MAP_DEPART_MODE_ITEM_PAIR,  /* two items */
    MAP_DEPART_MODE_FLAG,       /* only a completion flag */
    MAP_DEPART_MODE_MONEY       /* only money */
};

#define MAP_DEPART_ITEM_COUNT 4
#define MAP_DEPART_CATEGORY_COUNT 5
/* The item whose MAP_DEPART_MODE_ITEMS_PLAIN request carries totals. */
#define MAP_DEPART_TOTALS_ITEM 971

/* Request consumed by the departure's start (0x84 bytes; the second argument is its byte size). */
struct MapDepartureRequestA {
    /* 0x00 */ s32 mode;             /* MapDepartModeA */
    /* 0x04 */ s32 map;
    /* 0x08 */ s32 itemIds[MAP_DEPART_ITEM_COUNT];
    /* 0x18 */ s32 itemCounts[MAP_DEPART_ITEM_COUNT];
    /* 0x28 */ s32 itemParams[MAP_DEPART_ITEM_COUNT];
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 destinationState[4];
    /* 0x4C */ s32 unk4C;
    /* 0x50 */ s32 completionFlag;
    /* 0x54 */ s32 totalValue;
    /* 0x58 */ u8 unk58[0x14];
    /* 0x6C */ s32 categoryCounts[MAP_DEPART_CATEGORY_COUNT];
    /* 0x80 */ s32 money;
};
typedef char MapDepartureRequestASizeCheck[
    offsetof(MapDepartureRequestA, destinationState) == 0x3C &&
    offsetof(MapDepartureRequestA, categoryCounts) == 0x6C &&
    sizeof(MapDepartureRequestA) == 0x84 ? 1 : -1];

/* The departure job's whole block (Apocalypse, 0x4CC bytes); MapDepart is its public prefix. */
struct MapDepartJobWorkA {
    /* 0x000 */ MapDepart prefix;
    /* 0x00c */ s32 mode;            /* MapDepartModeA */
    /* 0x010 */ s32 map;
    /* 0x014 */ s32 itemIds[MAP_DEPART_ITEM_COUNT];
    /* 0x024 */ s32 itemCounts[MAP_DEPART_ITEM_COUNT];
    /* 0x034 */ s32 itemParams[MAP_DEPART_ITEM_COUNT];
    /* 0x044 */ s32 money;
    /* 0x048 */ s32 state;            /* the departure's step (IV MapDepartJobWork::state) */
    /* 0x04c */ s32 counter;          /* frames in the step */
    /* 0x050 */ u8 unk050;
    /* 0x051 */ u8 unk051[3];
    /* 0x054 */ u32 unk054;
    /* 0x058 */ u32 unk058;
    /* 0x05c */ u32 unk05c;
    /* 0x060 */ u8 unk060;
    /* 0x061 */ u8 unk061;
    /* 0x062 */ u8 unk062[2];
    /* 0x064 */ u32 unk064;
    /* 0x068 */ u8 unk068;
    /* 0x069 */ u8 unk069[3];
    /* 0x06c */ u32 unk06c;
    /* 0x070 */ u8 unk070;
    /* 0x071 */ u8 unk071[3];
    /* 0x074 */ u32 unk074;
    /* 0x078 */ u32 unk078;
    /* 0x07c */ u32 destinationState[4];
    /* 0x08c */ u8 unk08c;
    /* 0x08d */ u8 unk08d;
    /* 0x08e */ u8 unk08e;
    /* 0x08f */ u8 unk08f;
    /* 0x090 */ u32 unk090;
    /* 0x094 */ u32 unk094;
    /* 0x098 */ u32 unk098;
    /* 0x09c */ u32 unk09c;
    /* 0x0a0 */ u8 unk0a0;
    /* 0x0a1 */ u8 unk0a1;
    /* 0x0a2 */ u8 unk0a2[2];
    /* 0x0a4 */ u32 unk0a4;
    /* 0x0a8 */ u32 unk0a8;
    /* 0x0ac */ u8 unk0ac;
    /* 0x0ad */ u8 unk0ad[3];
    /* 0x0b0 */ s32 unk0b0;
    /* 0x0b4 */ s32 completionFlag;  /* game flag set when the departure ends, 0 = none */
    /* 0x0b8 */ s32 totalValue;      /* the weighted total of the five categories */
    /* 0x0bc */ s32 categoryCounts[MAP_DEPART_CATEGORY_COUNT];
    /* 0x0d0 */ s32 flaggedItemCount; /* items whose table 8 sub-record 3 value is set */
    /* 0x0d4 */ u32 unk0d4[MAP_DEPART_CATEGORY_COUNT];
    /* 0x0e8 */ u32 unk0e8[MAP_DEPART_CATEGORY_COUNT];
    /* 0x0fc */ u32 unk0fc;
    /* 0x100 */ u8 unk100[0x28];
    /* 0x128 */ UiResourceParameters packet;
    /* 0x148 */ UiSpriteState sprite;
    /* 0x1d4 */ UiSpriteState sprites[5];
    /* 0x490 */ u32 unk490;
    /* 0x494 */ u8 unk494[0xc];
    /* 0x4a0 */ u32 unk4a0[10];
    /* 0x4c8 */ u8 hasTotals;        /* totalValue and categoryCounts are shown */
    /* 0x4c9 */ u8 unk4c9[3];
};
typedef char MapDepartJobWorkALayoutCheck[
    offsetof(MapDepartJobWorkA, mode) == 0xC && offsetof(MapDepartJobWorkA, money) == 0x44 &&
    offsetof(MapDepartJobWorkA, destinationState) == 0x7C && offsetof(MapDepartJobWorkA, unk0b0) == 0xB0 &&
    offsetof(MapDepartJobWorkA, flaggedItemCount) == 0xD0 && offsetof(MapDepartJobWorkA, packet) == 0x128 &&
    offsetof(MapDepartJobWorkA, sprite) == 0x148 && offsetof(MapDepartJobWorkA, unk4a0) == 0x4A0 &&
    offsetof(MapDepartJobWorkA, hasTotals) == 0x4C8 && sizeof(MapDepartJobWorkA) == 0x4CC ? 1 : -1];

#endif
