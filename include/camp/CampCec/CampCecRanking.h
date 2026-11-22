/* camp/CampCec/CampCecRanking.c: the StreetPass (cec) ranking screen of the camp. */
#ifndef CAMP_CAMPCEC_CAMPCECRANKING_H
#define CAMP_CAMPCEC_CAMPCECRANKING_H

#include "common.h"
#include <stddef.h>
#include "script/ScriptVm.h"
#include "ui/UiSpriteState.h"

#define RANK_PLAYERS 20
#define RANK_CATEGORIES 7

typedef struct CampCecRankEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ s32 score;
    /* 0x08 */ s32 rank;                   /* 1..3 = medal, otherwise unranked */
} CampCecRankEntry;

/* The ranking screen's work area. */
typedef struct CampCecRanking {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    /* 0x04 */ s32 state;
    /* 0x08 */ u8 done;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ UiSpriteState sprite;       /* the screen's sprite (texture table 0x2E) */
    /* 0x98 */ UiResourceParameters parameters; /* its animation resource */
    /* 0xB8 */ void *heapA;               /* camp/CecMain_scr.bf, freed on close */
    /* 0xBC */ void *heapB;               /* camp/CecMain_msg.mbm, freed on close */
    /* 0xC0 */ ScriptProcess *handle;                 /* released on close */
    /* 0xC4 */ CampCecRankEntry players[RANK_PLAYERS];
    /* 0x1B4 */ CampCecRankEntry categories[RANK_CATEGORIES];
    /* 0x208 */ u32 playerText[RANK_PLAYERS]; /* text objects, one per player */
    /* 0x258 */ u32 categoryText[RANK_CATEGORIES]; /* text objects, one per category */
} CampCecRanking;

typedef char CampCecRankingLayoutCheck[sizeof(CampCecRanking) == 0x274 && offsetof(CampCecRanking, sprite) == 0xC &&
    offsetof(CampCecRanking, parameters) == 0x98 && offsetof(CampCecRanking, heapA) == 0xB8 &&
    offsetof(CampCecRanking, players) == 0xC4 && offsetof(CampCecRanking, categories) == 0x1B4 &&
    offsetof(CampCecRanking, playerText) == 0x208 && offsetof(CampCecRanking, categoryText) == 0x258 ? 1 : -1];

#endif
