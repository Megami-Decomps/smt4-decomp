#ifndef SHARD_W5_W5MATCH7_UIQUEST_H
#define SHARD_W5_W5MATCH7_UIQUEST_H

#include "common.h"
#include <stddef.h>
#include "ui/UiSpriteState.h"

struct ScriptProcess;

struct UiQuestAlternateList {
    /* 0x00 (0x942) */ u8 unk00[6];
    /* 0x06 (0x948) */ u8 cursor[0x64];
    /* 0x6a (0x9ac) */ u8 unk6a[0x64];
    /* 0xce (0xa10) */ u16 list[1];
};

/* How many menu states the quest menu remembers: the current one and the one before it. */
#define UI_QUEST_MENU_STATE_HISTORY 2

/* The quest menu block held in g_uiQuest (Apocalypse layout): 0xD50 bytes, the size uiQuestCreate allocates
   and clears. */
struct UiQuestApoc {
    union {
        /* 0x000 */ u8 unk000[4];
        /* 0x000 */ u32 process;    /* the "UIQuest Calc" process; the three draw tasks belong to it */
    };
    /* 0x004 */ s32 menuState;          /* the state history, newest first: see menuStates() */
    /* 0x008 */ s32 previousMenuState;
    /* 0x00c */ s32 nextMenuState;
    /* 0x010 */ s32 menuTimer;
    union {
        /* 0x014 */ u8 unk014[0x20];
        /* 0x014 */ UiResourceParameters resources; /* the animation tables every sprite below plays */
    };
    /* 0x034 */ u8 mainSprite[0x8c];    /* the first of sixteen UiSpriteState (0x34-0x8F4): see sprite() */
    union {
        /* 0x0C0 */ u8 unk0c0[0x84C];
        struct {
            /* 0x0C0 */ u8 unk0C0BeforeDetailSprite[0x3D4];
            /* 0x494 */ u8 sprite[0x8C];
        } detailAnimation;
        struct {
            /* 0x0C0 */ u8 unk0C0[0x1A4];
            /* 0x264 */ u8 sprite[0x8C];
            /* 0x2F0 */ u8 unk2F0[0x60C];
            /* 0x8FC */ u32 script;
        } acceptance;
        struct {
            /* 0x0C0 */ u8 unk0C0[0x834];
            /* 0x8F4 */ void *messages;         /* event/quest/QuestSys.mbm */
            /* 0x8F8 */ void *program;          /* event/quest/QuestScr.bf */
            /* 0x8FC */ ScriptProcess *process; /* runs `program` with `messages` */
        } script;
    };
    /* 0x90c */ s8 unk90c;             /* the list shown is the alternate one (alternateView()) */
    /* 0x90d */ s8 unk90D;
    /* 0x90e */ s8 unk90E;
    /* 0x90f */ s8 mode;
    union {
        /* 0x910 */ u8 unk910[0xc];
        struct {
            /* 0x910 */ s32 selection;
            /* 0x914 */ s32 previousSelection;
            /* 0x918 */ s32 count;
        } listState;
    };
    /* 0x91c */ u32 sprites[4];
    /* 0x92C */ union { u8 unk92c[4]; void *detailMessages; };
    /* 0x930 */ u32 messages;
    /* 0x934 */ u32 detailTimer;        /* frames since a quest was picked */
    /* 0x938 */ f32 focusSpeed;
    /* 0x93c */ u8 repositioned;        /* the list cursor was moved onto the focused quest */
    /* 0x93d */ u8 unk93D;
    /* 0x93e */ u8 unk93E;
    /* 0x93f */ s8 state;
    /* 0x940 */ s8 active;
    /* 0x941 */ s8 step;
    /* 0x942 */ union {
        u8 unk942[3];
        struct {
            u8 unk942;
            /* 0x943 */ u8 addonOwned;
        } messageOwnership;
    };
    /* 0x945 */ u8 unk945;
    /* 0x946 */ u8 unk946[0x66];
    /* 0x9ac */ u8 cursor[0x12a];
    /* 0xad6 */ u16 list[250];
    /* 0xcca */ s16 questId;
    /* 0xccc */ u16 unkCCC;
    /* 0xcce */ u16 selectedId;
    /* 0xcd0 */ s16 detailMode;
    union {
        /* 0xcd2 */ u8 unkCD2[0x76];
        struct {
            /* 0xcd2 */ u8 unkCD2BeforeRegions[0x56];
            /* 0xd28 */ s16 rowRegions[11];  /* touch regions of the visible list rows */
            /* 0xd3e */ s16 scrollUpRegion;  /* touch regions of the list's scroll bar: its two arrows */
            /* 0xd40 */ s16 scrollDownRegion;
            /* 0xd42 */ s16 scrollThumbRegion; /* and its thumb */
        } touch;
    };
    /* 0xd48 */ u32 firstCounter;
    /* 0xd4c */ u32 secondCounter;

    /* The state history as the array it is: menuState, then previousMenuState. */
    s32 *menuStates()
    {
        return &menuState;
    }

    /* One of the sixteen sprites that start at mainSprite. */
    UiSpriteState *sprite(s32 index)
    {
        return reinterpret_cast<UiSpriteState *>(mainSprite) + index;
    }

    UiQuestAlternateList *alternateView()
    {
        return reinterpret_cast<UiQuestAlternateList *>(unk942);
    }
};

extern "C" {
extern UiQuestApoc *g_uiQuest;
}

/* Enters a menu state: the state history moves down one place, `next` becomes the current state and the
   state timer restarts. Retail walks the history with a written-back base in each of its 23 state changes. */
static __inline void uiQuestEnterMenuState(UiQuestApoc *quest, s32 next)
{
    for (u32 i = UI_QUEST_MENU_STATE_HISTORY - 1; i > 0; --i)
        quest->menuStates()[i] = quest->menuStates()[i - 1];
    quest->menuStates()[0] = next;
    quest->menuTimer = 0;
}

typedef char UiQuestApocSizeCheck[sizeof(UiQuestApoc) == 0xD50 ? 1 : -1];
typedef char UiQuestApocTouchOffsets[
    offsetof(UiQuestApoc, touch.rowRegions) == 0xD28 && offsetof(UiQuestApoc, touch.scrollUpRegion) == 0xD3E &&
    offsetof(UiQuestApoc, touch.scrollThumbRegion) == 0xD42 ? 1 : -1];
typedef char UiQuestApocDetailSpriteOffsetCheck[
    offsetof(UiQuestApoc, detailAnimation.sprite) == 0x494 &&
    sizeof(UiQuestApoc) == 0xD50 ? 1 : -1];
typedef char UiQuestApocAcceptanceOffsets[
    offsetof(UiQuestApoc, acceptance.sprite) == 0x264 &&
    offsetof(UiQuestApoc, acceptance.script) == 0x8FC ? 1 : -1];
typedef char UiQuestApocScriptOffsets[
    offsetof(UiQuestApoc, menuState) == 0x4 && offsetof(UiQuestApoc, previousMenuState) == 0x8 &&
    offsetof(UiQuestApoc, resources) == 0x14 && offsetof(UiQuestApoc, mainSprite) == 0x34 &&
    offsetof(UiQuestApoc, script.messages) == 0x8F4 && offsetof(UiQuestApoc, script.process) == 0x8FC &&
    offsetof(UiQuestApoc, detailTimer) == 0x934 && offsetof(UiQuestApoc, focusSpeed) == 0x938 &&
    offsetof(UiQuestApoc, repositioned) == 0x93C && offsetof(UiQuestApoc, unk93D) == 0x93D &&
    offsetof(UiQuestApoc, firstCounter) == 0xD48 ? 1 : -1];
typedef char UiQuestApocMessageOwnershipOffsets[
    offsetof(UiQuestApoc, detailMessages) == 0x92C &&
    offsetof(UiQuestApoc, messageOwnership.addonOwned) == 0x943 &&
    sizeof(UiQuestApoc) == 0xD50 ? 1 : -1];

#endif
