/* The status screen's work area (IV), kept by g_statusDown. Apocalypse's is status/StatusDownA.h. */
#ifndef STATUS_STATUSDOWN_H
#define STATUS_STATUSDOWN_H
#include "common.h"
#include "ui/GridNavigation.h"
#include "status/StatusDownParts.h"
#include "ui/UiSpriteState.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
struct AsdText;

/* Eight ids written as four words; the block starts two bytes past a word boundary. */
__packed struct StatusDownIdWords {
    u32 words[4];
};

/* The status screen's work area (IV), allocated by statusDownCreate and kept by g_statusDown. */
typedef struct StatusDownState {
    /* 0x0000 */ u32 job;
    /* 0x0004 */ u32 drawTask;
    /* 0x0008 */ UiResourceParameters packet;
    /* 0x0028 */ UiSpriteState sprites[7];  /* [0] slides the panels in and out (timerStart) */
    /* 0x03FC */ u8 tab;                    /* current tab */
    /* 0x03FD */ u8 previousTab;
    /* 0x03FE */ u8 unk3FE[2];
    /* 0x0400 */ StatusDownTrack track;
    /* 0x0408 */ s32 nextState;             /* the state a transition leads to (per tab, after a skill selection) */
    /* 0x040C */ s32 stateTimer;            /* frames in the current state */
    /* 0x0410 */ u8 listActive;
    /* 0x0411 */ u8 unk411;
    /* 0x0412 */ u8 unk412;
    /* 0x0413 */ u8 mode;                   /* skill-selection mode */
    /* 0x0414 */ s32 unk414;
    /* 0x0418 */ s32 unk418;
    /* 0x041C */ s32 unk41C;
    /* 0x0420 */ s32 unk420;
    /* 0x0424 */ s32 indicatorFirst;
    /* 0x0428 */ s32 indicatorSecond;
    /* 0x042C */ u8 slots[0x29];            /* filled with 0xFF */
    /* 0x0455 */ u8 unk455[0x29];
    /* 0x047E */ s16 selectedEntry;         /* negative when nothing is selected */
    /* 0x0480 */ u8 touchRegionCount;
    /* 0x0481 */ s8 unk481;
    /* 0x0482 */ u16 ids[16];               /* the listed skill ids (statusReplaceSkills) */
    union {
        /* 0x04A2 */ u16 selected[8];
        /* 0x04A2 */ StatusDownIdWords selectedWords;  /* how statusDownSetSelectedIds clears and fills them */
    };
    /* 0x04B2 */ u16 pending[8];
    /* 0x04C2 */ u8 scratch[16];            /* 1 marks a newly listed id */
    /* 0x04D2 */ u8 unk4D2[2];
    /* 0x04D4 */ ScrollSelection list;
    /* 0x0538 */ u8 enabled;
    /* 0x0539 */ u8 unk539[3];
    /* 0x053C */ u32 unk53C;
    /* 0x0540 */ u32 unk540;
    /* 0x0544 */ s32 selection;             /* -1 when none */
    /* 0x0548 */ s8 dirty;
    /* 0x0549 */ u8 unk549[3];
    /* 0x054C */ s32 markedRow;             /* the row lit while `dirty` is set */
    /* 0x0550 */ u8 unk550[4];
    /* 0x0554 */ u32 entryUnk00;            /* the selected entry's description record */
    /* 0x0558 */ u32 entryUnk04;
    /* 0x055C */ u32 entryUnk08;
    /* 0x0560 */ u16 entryUnk0C;
    /* 0x0562 */ u8 unk562[2];
    /* 0x0564 */ u8 window[0x64];
    /* 0x05C8 */ StatusDownFlaggedList flagged;
    /* 0x0E30 */ StatusDownInventory inventory;
    /* 0x22A0 */ AsdText *text;             /* the description text (asdTextCreate) */
    /* 0x22A4 */ u8 unk22A4[4];
    /* 0x22A8 */ GridNavigation grid;
    /* 0x230C */ u8 selector[0x64];
    union {
        /* 0x2370 */ u16 skillIds[8];
        /* 0x2370 */ u32 skillWords[4];      /* how statusOpenSkillSelection clears them */
    };
    /* 0x2380 */ u16 selectedId;
    /* 0x2382 */ u8 unk2382[2];
    /* 0x2384 */ u32 value;
    /* 0x2388 */ s8 scrollState;            /* written by the scroll handler (uiScrollHandleActionsOrTouch) */
    /* 0x2389 */ u8 unk2389[8];
    /* 0x2391 */ u8 unk2391;
    /* 0x2392 */ s8 panelEnabled;
    /* 0x2393 */ u8 unk2393;
} StatusDownState;

extern "C" StatusDownState *g_statusDown;

typedef char StatusDownStateLayoutCheck[
    offsetof(StatusDownState, sprites) == 0x28 &&
    offsetof(StatusDownState, track) == 0x400 &&
    offsetof(StatusDownState, slots) == 0x42C &&
    offsetof(StatusDownState, touchRegionCount) == 0x480 &&
    offsetof(StatusDownState, list) == 0x4D4 &&
    offsetof(StatusDownState, unk414) == 0x414 && offsetof(StatusDownState, indicatorFirst) == 0x424 &&
    offsetof(StatusDownState, markedRow) == 0x54C && offsetof(StatusDownState, entryUnk00) == 0x554 &&
    offsetof(StatusDownState, window) == 0x564 &&
    offsetof(StatusDownState, flagged) == 0x5C8 &&
    offsetof(StatusDownState, inventory.count) == 0x2230 &&
    offsetof(StatusDownState, inventory.navigation) == 0x223C &&
    offsetof(StatusDownState, text) == 0x22A0 &&
    offsetof(StatusDownState, skillIds) == 0x2370 &&
    offsetof(StatusDownState, value) == 0x2384 &&
    offsetof(StatusDownState, panelEnabled) == 0x2392 &&
    sizeof(StatusDownState) == 0x2394 ? 1 : -1];

#endif
