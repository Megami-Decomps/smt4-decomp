/* The status screen's work area (Apocalypse), kept by g_statusDown. IV's is status/StatusDown.h:
 * Apocalypse keeps two more sprites, so every IV field from the state on sits 0x118 bytes later, and
 * appends a skill menu at 0x24AC. */
#ifndef STATUS_STATUSDOWNA_H
#define STATUS_STATUSDOWNA_H
#include "common.h"
#include <stddef.h>
#include "ui/GridNavigation.h"
#include "ui/UiSpriteState.h"
#include "status/StatusDownParts.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "script/ScriptVm.h"
struct AsdText;
struct PlayerDataA;

/* A row of the skill menu: a skill (or demon) id and its level. */
typedef struct StatusDownSkillRow {
    union {
        /* 0x00 */ u16 id;              /* 0 when the row is empty */
        /* 0x00 */ u32 idWord;          /* how statusDownInitializeSkillList clears it */
    };
    /* 0x04 */ s32 level;
} StatusDownSkillRow;

/* State and substep of the skill menu's interaction. */
struct StatusDownSkillStep {
    /* 0x00 */ u32 state;
    /* 0x04 */ u32 phase;
};

/* Build the two-word cursor state before changing the menu step. */
static __inline StatusDownSkillStep statusDownSkillStep(u32 state, u32 phase)
{
    StatusDownSkillStep step = { state, phase };
    return step;
}

/* The skill menu (Apocalypse), with its camp message and script data. */
typedef struct StatusDownSkillMenuA {
    /* 0x00 */ StatusDownSkillRow rows[8];
    /* 0x40 */ s32 count;
    /* 0x44 */ u8 changed;
    /* 0x45 */ u8 unk45[3];
    /* 0x48 */ s32 selection[2];        /* the selected row; the one compared with */
    /* 0x50 */ PlayerDataA *source;     /* the unit whose skills are listed (NULL: the player) */
    /* 0x54 */ GridNavigation controller;
    /* 0xB8 */ StatusDownSkillStep step;
    /* 0xC0 */ void *dataA;             /* camp messages */
    /* 0xC4 */ void *dataB;             /* camp script */
    /* 0xC8 */ ScriptProcess *process;
    /* 0xCC */ u8 confirming;
    /* 0xCD */ u8 unkCD[3];
    /* 0xD0 */ s32 selectedCard;
    /* 0xD4 */ u8 activatedSession;
    /* 0xD5 */ u8 unkD5[3];
} StatusDownSkillMenuA;

/* The first eight listed ids, as statusMarkNewSkills saves them before a refresh. */
typedef union StatusDownIdHistory {
    u32 words[4];
    u16 ids[8];
} StatusDownIdHistory;

typedef struct StatusDownStateA {
    /* 0x0000 */ u32 job;
    /* 0x0004 */ u32 drawTask;
    /* 0x0008 */ UiResourceParameters packet;
    /* 0x0028 */ UiSpriteState sprites[9];
    /* 0x0514 */ u8 tab;                    /* current tab */
    /* 0x0515 */ u8 unk515[3];
    /* 0x0518 */ StatusDownTrack track;
    /* 0x0520 */ u32 nextState;             /* the state a transition leads to */
    /* 0x0524 */ u32 stateTimer;            /* frames in the current state */
    /* 0x0528 */ u8 listActive;
    /* 0x0529 */ u8 unk529;
    /* 0x052A */ s8 active;
    /* 0x052B */ u8 unk52B;
    /* 0x052C */ s32 unk52C;
    /* 0x0530 */ s32 unk530;
    /* 0x0534 */ s32 unk534;
    /* 0x0538 */ s32 unk538;
    /* 0x053C */ s32 indicatorFirst;
    /* 0x0540 */ s32 indicatorSecond;
    /* 0x0544 */ s16 slots[0x2A];           /* the record id of each row; filled with -1 */
    /* 0x0598 */ u16 selectedEntry;         /* read as s16: negative when nothing is selected; > 0 draws a comparison */
    /* 0x059A */ u8 touchRegionCount;
    /* 0x059B */ s8 mode;
    union {
        /* 0x059C */ u16 ids[16];           /* the listed skill ids (statusReplaceSkills) */
        /* 0x059C */ StatusDownIdHistory history; /* the first eight, cleared and saved as a block */
    };
    union {
        /* 0x05BC */ u16 selected[8];
        /* 0x05BC */ u32 selectedWords[4];  /* how statusDownSetSelectedIds clears them */
    };
    /* 0x05CC */ s16 pending[8];
    union {
        /* 0x05DC */ u8 scratch[16];        /* 1 marks a newly listed id */
        /* 0x05DC */ u32 scratchWords[4];   /* how statusReplaceSkills clears them */
    };
    /* 0x05EC */ ScrollSelection list;
    /* 0x0650 */ u8 enabled;
    /* 0x0651 */ u8 unk651[3];
    /* 0x0654 */ s32 unk654;
    /* 0x0658 */ u32 unk658;
    /* 0x065C */ s32 selection;             /* -1 when none */
    /* 0x0660 */ u8 dirty;
    /* 0x0661 */ u8 unk661[0xB];
    /* 0x066C */ u32 entryUnk00;            /* the selected entry's description record */
    /* 0x0670 */ u32 entryUnk04;
    /* 0x0674 */ u32 entryUnk08;
    /* 0x0678 */ u16 entryUnk0C;
    /* 0x067A */ u8 unk67A[2];
    /* 0x067C */ u8 window[0x64];
    /* 0x06E0 */ StatusDownFlaggedList flagged;
    /* 0x0F48 */ StatusDownInventory inventory;
    /* 0x23B8 */ AsdText *text;
    /* 0x23BC */ u8 unk23BC[4];
    /* 0x23C0 */ GridNavigation grid;
    /* 0x2424 */ u8 selector[0x64];
    /* 0x2488 */ u16 skillIds[8];
    /* 0x2498 */ u16 selectedId;
    /* 0x249A */ u8 unk249A[2];
    /* 0x249C */ u32 value;
    /* 0x24A0 */ s8 scrollState;            /* written by the scroll handler */
    /* 0x24A1 */ u8 unk24A1[8];
    /* 0x24A9 */ u8 unk24A9;
    /* 0x24AA */ s8 panelEnabled;
    /* 0x24AB */ u8 unk24AB;
    /* 0x24AC */ StatusDownSkillMenuA menu;
    /* 0x2584 */ u8 unk2584;
    /* 0x2585 */ u8 unk2585[3];
    /* 0x2588 */ u8 block2588[4];
    /* 0x258C */ u8 unk258C[0xC];
    /* 0x2598 */ u8 unk2598;
} StatusDownStateA;

extern "C" StatusDownStateA *g_statusDown;

typedef char StatusDownStateALayoutCheck[
    offsetof(StatusDownStateA, tab) == 0x514 &&
    offsetof(StatusDownStateA, track) == 0x518 &&
    offsetof(StatusDownStateA, slots) == 0x544 &&
    offsetof(StatusDownStateA, touchRegionCount) == 0x59A &&
    offsetof(StatusDownStateA, list) == 0x5EC &&
    offsetof(StatusDownStateA, selection) == 0x65C &&
    offsetof(StatusDownStateA, inventory.count) == 0x2348 &&
    offsetof(StatusDownStateA, text) == 0x23B8 &&
    offsetof(StatusDownStateA, grid) == 0x23C0 &&
    offsetof(StatusDownStateA, panelEnabled) == 0x24AA &&
    offsetof(StatusDownStateA, menu) == 0x24AC &&
    offsetof(StatusDownSkillMenuA, step) == 0xB8 && sizeof(StatusDownSkillStep) == 8 &&
    offsetof(StatusDownStateA, menu.process) == 0x2574 &&
    offsetof(StatusDownStateA, menu.activatedSession) == 0x2580 &&
    offsetof(StatusDownStateA, block2588) == 0x2588 &&
    sizeof(StatusDownStateA) == 0x259C ? 1 : -1];

#endif
