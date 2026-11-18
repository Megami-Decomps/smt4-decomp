#ifndef CAMP_CEC_MENU_H
#define CAMP_CEC_MENU_H
#include "common.h"
#include <stddef.h>
#include "script/ScriptVm.h"
#include "cec/CecMessage.h"
#include "nn/os/Thread.h"

struct CampCecMenu {
    /* 0x000 */ u32 updateProcess;
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ void (*handlers[16])();
    /* 0x048 */ CecProcessSlot card;
    /* 0x094 */ u8 unk094[0xC];
    /* 0x0A0 */ u8 block0A0[0xC4C]; // model scene
    /* 0xCEC */ u32 itemTable;
    /* 0xCF0 */ u32 unionTable;
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
    };
    /* 0xD60 */ u8 optionalProcessAvailable;
    /* 0xD61 */ u8 helpInitialized;
    /* 0xD62 */ u8 unkD62;
    /* 0xD63 */ u8 savedBannerPending;
    /* 0xD64 */ u8 loading;
    /* 0xD65 */ s8 stopLoader;
    /* 0xD66 */ u8 unkD66[2];
    /* 0xD68 */ s32 loadState;
    /* 0xD6C */ void *taskList;
    /* 0xD70 */ NnOsThread thread;
    /* 0xD78 */ void *threadStack;
};
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
