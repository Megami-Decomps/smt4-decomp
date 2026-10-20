/* The quest menu block held in g_uiQuest (Shin Megami Tensei IV layout). */
#ifndef SHARD_W4_W4MATCH2_UIQUEST_H
#define SHARD_W4_W4MATCH2_UIQUEST_H

#include "common.h"

typedef struct UiQuestCursor {
    u8 data[0x12A];
} UiQuestCursor;

/* The detail panel at 0x500. */
typedef struct UiQuestPanel {
    /* 0x00 */ u8 unk00[0xC4];
    /* 0xC4 */ u8 detailMode;   /* 0 = list view */
    /* 0xC5 */ u8 unkC5[3];
    /* 0xC8 */ s32 selection;
    /* 0xCC */ u8 unkCC[4];
    /* 0xD0 */ s32 page;
    /* 0xD4 */ u8 unkD4[0x1D];
    /* 0xF1 */ u8 confirming;   /* a confirmation is pending */
    /* 0xF2 */ u8 unkF2[0x6E];
} UiQuestPanel;

typedef struct UiQuest {
    /* 0x000 */ u8 unk000[0x500];
    /* 0x500 */ UiQuestPanel panel;
    /* 0x660 */ UiQuestCursor cursor;
    /* 0x78A */ u16 list[1];
} UiQuest;

extern UiQuest *g_uiQuest;

#endif
