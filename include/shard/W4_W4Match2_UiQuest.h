/* The quest menu block held in g_uiQuest (Shin Megami Tensei IV layout). */
#ifndef SHARD_W4_W4MATCH2_UIQUEST_H
#define SHARD_W4_W4MATCH2_UIQUEST_H

#include "common.h"
#include <stddef.h>

typedef struct UiQuestCursor {
    union {
        /* 0x00 */ u8 data[0x12A];
        struct {
            /* 0x00 */ u8 cursor[0x64];
            /* 0x64 */ u16 ids[99];
        } alternate;
    };
} UiQuestCursor;

/* The detail panel at 0x500. */
typedef struct UiQuestPanel {
    /* 0x00 */ u8 unk00[0xC4];
    /* 0xC4 */ s8 detailMode;   /* 0 = list view */
    /* 0xC5 */ u8 unkC5[3];
    /* 0xC8 */ s32 selection;
    /* 0xCC */ u8 unkCC[4];
    /* 0xD0 */ s32 page;
    /* 0xD4 */ u32 texts[3];    /* asdText handles */
    union {
        /* 0xE0 */ u8 unkE0[4];
        /* 0xE0 */ u32 entryDirectory;
    };
    /* 0xE4 */ u32 sysImages;   /* event/quest/QuestSys.mbm */
    /* 0xE8 */ u8 unkE8[9];
    /* 0xF1 */ u8 confirming;   /* a confirmation is pending */
    /* 0xF2 */ u8 unkF2;
    /* 0xF3 */ u8 unkF3;
    /* 0xF4 */ s8 unkF4;
    /* 0xF5 */ s8 unkF5;
    union {
        /* 0xF6 */ u8 unkF6[2];
        struct {
            u8 padding;
            /* 0xF7 */ u8 borrowed;
        } entryOwnership;
    };
    /* 0xF8 */ u8 choice;       /* the answer given to the pending confirmation */
    union {
        /* 0xF9 */ u8 unkF9[0x67];
        struct {
            /* 0xF9 */ u8 padding[3];
            /* 0xFC */ u8 cursor[0x64];
        } alternate;
    };
} UiQuestPanel;

typedef struct UiQuest {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 previousState;
    /* 0x00C */ s32 nextState;
    /* 0x010 */ s32 timer;
    /* 0x014 */ u8 unk014[0x20];
    /* 0x034 */ u8 mainSprite[0x8C];
    union {
        /* 0x0C0 */ u8 unk0C0[0x440];
        struct {
            /* 0x0C0 */ u8 padding[0x3D4];
            /* 0x494 */ u8 timer[0x6C];
        } detailAnimation;
    };
    /* 0x500 */ UiQuestPanel panel;
    /* 0x660 */ UiQuestCursor cursor;
    /* 0x78A */ u16 list[250];
    /* 0x97E */ s16 questId;
    /* 0x980 */ u16 unk980;
} UiQuest;

extern UiQuest *g_uiQuest;

typedef char UiQuestSizeCheck[sizeof(UiQuest) == 0x984 ? 1 : -1];
typedef char UiQuestPanelOffsets[offsetof(UiQuestPanel, texts) == 0xD4 && offsetof(UiQuestPanel, sysImages) == 0xE4 &&
    offsetof(UiQuestPanel, confirming) == 0xF1 ? 1 : -1];
typedef char UiQuestSelectorOffsets[
    sizeof(UiQuestCursor) == 0x12A && sizeof(UiQuestPanel) == 0x160 &&
    offsetof(UiQuest, detailAnimation.timer) == 0x494 &&
    offsetof(UiQuestPanel, alternate.cursor) == 0xFC &&
    offsetof(UiQuestCursor, alternate.ids) == 0x64 ? 1 : -1];
typedef char UiQuestPanelEntryDirectoryOffsets[
    offsetof(UiQuestPanel, entryDirectory) == 0xE0 &&
    offsetof(UiQuestPanel, entryOwnership.borrowed) == 0xF7 &&
    sizeof(UiQuestPanel) == 0x160 && sizeof(UiQuest) == 0x984 ? 1 : -1];
typedef char UiQuestDetailModeOffsetCheck[
    offsetof(UiQuestPanel, detailMode) == 0xC4 && offsetof(UiQuest, panel) == 0x500 &&
    sizeof(UiQuestPanel) == 0x160 && sizeof(UiQuest) == 0x984 ? 1 : -1];

#endif
