#ifndef CAMP_CEC_MENU_H
#define CAMP_CEC_MENU_H
#include "common.h"
#include <stddef.h>
#include "script/ScriptVm.h"
#include "cec/CecMessage.h"
#include "nn/os/Thread.h"
#include "gamedata/UnitStats.h"

/* The player's own card with the inbox state that follows it (CampCecMenu + 0x48): see CampCecMenu::inbox(). */
struct CampCecInbox {
    /* 0x00 */ CecProcessSlot card;
    /* 0x4C */ s32 count;   /* cards waiting in the StreetPass inbox */
    /* 0x50 */ s32 step;    /* the running state's own step */
};

/* A row of the reward demon table (camp/CecUnionTable.tbl, 60 rows of 0xC bytes). */
struct CampCecDemonRecord {
    /* 0x00 */ u16 id;      /* the devil's id */
    /* 0x02 */ s16 passes;  /* StreetPass tally from which the devil is offered */
    /* 0x04 */ u8 unk04[8];
};

struct CampCecMenu {
    /* 0x000 */ u32 updateProcess;
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ void (*handlers[16])();
    /* 0x048 */ CecProcessSlot card;
    /* 0x094 */ u8 unk094[0xC];       /* the inbox count and step: inbox() */
    union {
        /* 0x0A0 */ u8 block0A0[0xC4C]; // model scene
        struct {
            /* 0x0A0 */ u8 unk0A0[0x34];
            /* 0x0D4 */ u16 statGains[5];   /* stat points the selected demon earned, one per new pass */
            /* 0x0DE */ u8 unk0DE[2];
            /* 0x0E0 */ StatBlock unit;     /* the selected demon as it was before the rewards */
            /* 0x6E4 */ StatBlock beforeStatGains; /* the copy the status panel compares the raised stats with */
            /* 0xCE8 */ CampCecDemonRecord *offeredDemon; /* the reward demon picked this time, NULL when none */
        } rewardUnit;
    };
    union {
        /* 0xCEC */ u32 itemTable;              /* camp/CecItemTable.tbl as loaded */
        /* 0xCEC */ u16 (*itemRows)[5];         /* its rows: the reward item ids, five per kind */
    };
    union {
        /* 0xCF0 */ u32 unionTable;             /* camp/CecUnionTable.tbl as loaded */
        /* 0xCF0 */ CampCecDemonRecord *demonRecords; /* its 60 rows */
    };
    /* 0xCF4 */ union { void *scriptResource; u32 scriptFile; };
    /* 0xCF8 */ u32 messageFile; // camp/CecMain_msg.mbm
    union {
        /* 0xCFC */ u8 unkCFC[0x30];
        struct {
            /* 0xCFC */ u8 unkCFC[8];
            /* 0xD04 */ ScriptProcess *process;
        } script;
        struct {
            u8 unkCFC[0x28];
            /* 0xD24 */ s32 selection;
            /* 0xD28 */ s32 mode;
        } screen;
        struct {
            /* 0xCFC */ u32 script;             /* camp/CecMainDevilTalk_scr.bf */
            /* 0xD00 */ u32 messages;           /* camp/CecDevilMsg/<tone>.mbm */
            /* 0xD04 */ ScriptProcess *process; /* the menu's own script (script.process) */
            /* 0xD08 */ ScriptProcess *talkProcess;
            /* 0xD0C */ u16 items[12];          /* reward items found this time */
        } talk;
    };
    /* 0xD2C */ s32 state;
    /* 0xD30 */ u32 unkD30;
    /* 0xD34 */ s32 substate;
    union {
        /* 0xD38 */ u8 unkD38[0x28];
        struct {
            u8 unkD38BeforePoll[0xC];
            /* 0xD44 */ u8 work[0x1C];
        } polling;
        struct {
            /* 0xD38 */ s32 phase;
            /* 0xD3C */ u8 unkD3C[0x20];
            /* 0xD5C */ s32 kind;
        } scriptFlow;
        struct {
            /* 0xD38 */ u8 unkD38[4];
            /* 0xD3C */ s32 itemCount;      /* entries of talk.items */
            /* 0xD40 */ u8 unkD40[8];
            /* 0xD48 */ s32 passRemainder;  /* new passes modulo 6, when the menu has no selected demon mode */
            /* 0xD4C */ s32 passGroups;     /* new passes divided by 6 */
            /* 0xD50 */ u8 unkD50[4];
            /* 0xD54 */ u32 lastTally;      /* the StreetPass tally when the inbox was opened */
            /* 0xD58 */ u32 pending;        /* rewards left to present (8: greeting, 1: demon, 4: stats, 2: items) */
        } rewards;
    };
    /* 0xD60 */ s8 optionalProcessAvailable;
    /* 0xD61 */ u8 helpInitialized;
    /* 0xD62 */ u8 rewardPortraitPending; /* set when the next reward state brings its portrait back */
    /* 0xD63 */ u8 savedBannerPending;
    /* 0xD64 */ u8 loading;
    /* 0xD65 */ s8 stopLoader;
    /* 0xD66 */ u8 unkD66[2];
    /* 0xD68 */ s32 loadState;
    /* 0xD6C */ void *taskList;
    /* 0xD70 */ NnOsThread thread;
    /* 0xD78 */ void *threadStack;

    /* The card and the inbox state behind it as the one record retail addresses them through. */
    CampCecInbox *inbox()
    {
        return reinterpret_cast<CampCecInbox *>(&card);
    }
};
typedef char CampCecMenuRewardOffsets[offsetof(CampCecMenu, rewardUnit.statGains) == 0xD4 &&
    offsetof(CampCecMenu, rewardUnit.unit) == 0xE0 && offsetof(CampCecMenu, rewardUnit.offeredDemon) == 0xCE8 &&
    offsetof(CampCecMenu, talk.talkProcess) == 0xD08 && offsetof(CampCecMenu, talk.items) == 0xD0C &&
    offsetof(CampCecMenu, rewards.itemCount) == 0xD3C && offsetof(CampCecMenu, rewards.passRemainder) == 0xD48 &&
    offsetof(CampCecMenu, rewards.lastTally) == 0xD54 && offsetof(CampCecMenu, rewards.pending) == 0xD58 &&
    sizeof(CampCecInbox) == 0x54 && sizeof(CampCecDemonRecord) == 0xC ? 1 : -1];
typedef char CampCecMenuLayoutCheck[offsetof(CampCecMenu, itemTable) == 0xCEC &&
    offsetof(CampCecMenu, loadState) == 0xD68 && offsetof(CampCecMenu, threadStack) == 0xD78 &&
    sizeof(CampCecMenu) == 0xD7C ? 1 : -1];

typedef char CampCecMenuOffsets[offsetof(CampCecMenu, card) == 0x48 && offsetof(CampCecMenu, block0A0) == 0xA0 && offsetof(CampCecMenu, messageFile) == 0xCF8 && offsetof(CampCecMenu, substate) == 0xD34 ? 1 : -1];
typedef char CampCecMenuIdleOffsets[
    offsetof(CampCecMenu, card.flags) == 0x68 &&
    offsetof(CampCecMenu, polling.work) == 0xD44 &&
    offsetof(CampCecMenu, helpInitialized) == 0xD61 &&
    offsetof(CampCecMenu, savedBannerPending) == 0xD63 ? 1 : -1];
typedef char CampCecMenuScriptOffsets[
    offsetof(CampCecMenu, scriptResource) == 0xCF4 &&
    offsetof(CampCecMenu, script.process) == 0xD04 &&
    offsetof(CampCecMenu, scriptFlow.phase) == 0xD38 &&
    offsetof(CampCecMenu, scriptFlow.kind) == 0xD5C ? 1 : -1];

extern "C" {
extern CampCecMenu *g_campCec;
CecProcessSlot *FUN_0025463c();
void campCecLoaderThread(CampCecMenu *menu);
}
#endif
