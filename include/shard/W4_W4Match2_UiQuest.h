/* The quest menu block held in g_uiQuest (Shin Megami Tensei IV layout). */
#ifndef SHARD_W4_W4MATCH2_UIQUEST_H
#define SHARD_W4_W4MATCH2_UIQUEST_H

#include "common.h"
#include <stddef.h>
#include "ui/UiSpriteState.h"

struct ScriptProcess;

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
    /* 0x000 */ u32 process;  /* UIQuest Calc, parent of the draw tasks */
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 previousState;
    /* 0x00C */ s32 nextState;
    /* 0x010 */ s32 timer;
    /* 0x014 */ UiResourceParameters resources;
    union {
        /* 0x034 */ UiSpriteState sprites[10];
        /* 0x034 */ u8 mainSprite[0x8C];
        struct {
            /* 0x034 */ u8 unk034[0x460];
            /* 0x494 */ u8 timer[0x6C];
        } detailAnimation;
        struct {
            /* 0x034 */ u8 unk034[0x578];
            /* 0x5AC */ void *messages;
            /* 0x5B0 */ void *program;
            /* 0x5B4 */ ScriptProcess *process;
        } script;
        /* Its leading padding covers the last two sprite slots and the script. */
        struct {
            /* 0x034 */ u8 unk034[0x4CC];
            /* 0x500 */ UiQuestPanel panel;
        } panelView;
    };
    /* 0x660 */ UiQuestCursor cursor;
    /* 0x78A */ u16 list[250];
    /* 0x97E */ s16 questId;
    /* 0x980 */ u16 unk980;
    /* 0x982 */ u16 selectedId;
    /* 0x984 */ u16 detailMode;
    /* 0x986 */ u8 unk986[0x76];

    /* The state history as the array it is: state, then previousState. */
    s32 *states()
    {
        return &state;
    }
} UiQuest;

extern UiQuest *g_uiQuest;

/* How many states the quest menu remembers: the current one and the one before it. */
#define UI_QUEST_STATE_HISTORY 2

/* Enters a state: the state history moves down one place, `next` becomes the current state and the
   state timer restarts (Apocalypse's uiQuestEnterMenuState). */
static __inline void uiQuestEnterState(UiQuest *quest, s32 next)
{
    for (u32 i = UI_QUEST_STATE_HISTORY - 1; i > 0; --i)
        quest->states()[i] = quest->states()[i - 1];
    quest->states()[0] = next;
    quest->timer = 0;
}

typedef char UiQuestSizeCheck[sizeof(UiQuest) == 0x9FC && offsetof(UiQuest, resources) == 0x14 &&
    offsetof(UiQuest, sprites) == 0x34 && offsetof(UiQuest, script.process) == 0x5B4 &&
    offsetof(UiQuest, selectedId) == 0x982 && offsetof(UiQuest, detailMode) == 0x984 ? 1 : -1];
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
    sizeof(UiQuestPanel) == 0x160 ? 1 : -1];
typedef char UiQuestDetailModeOffsetCheck[
    offsetof(UiQuestPanel, detailMode) == 0xC4 && offsetof(UiQuest, panelView.panel) == 0x500 ? 1 : -1];

#endif
