#ifndef CAMP_CEC_MENU_H
#define CAMP_CEC_MENU_H
#include "common.h"
#include <stddef.h>

struct CampCecMenu {
    /* 0x000 */ u8 unk000[0x48];
    /* 0x048 */ u8 block048[1];
    union {
        /* 0x049 */ u8 unk049[0x57];
        struct {
            u8 unk049BeforeVisibility[0x1F];
            /* 0x068 */ u8 flags;
        } visibility;
    };
    /* 0x0A0 */ u8 block0A0[1];
    /* 0x0A1 */ u8 unk0A1[0xC53];
    /* 0xCF4 */ u32 scriptResource;
    /* 0xCF8 */ u32 unkCF8;
    union {
        /* 0xCFC */ u8 unkCFC[0x30];
        struct {
            /* 0xCFC */ u8 unkCFC[8];
            /* 0xD04 */ u32 process;
        } script;
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
};
typedef char CampCecMenuLayoutCheck[sizeof(CampCecMenu) == 0xD64 ? 1 : -1];

typedef char CampCecMenuOffsets[offsetof(CampCecMenu, block048) == 0x48 && offsetof(CampCecMenu, block0A0) == 0xA0 && offsetof(CampCecMenu, unkCF8) == 0xCF8 && offsetof(CampCecMenu, substate) == 0xD34 ? 1 : -1];
typedef char CampCecMenuIdleOffsets[
    offsetof(CampCecMenu, visibility.flags) == 0x68 &&
    offsetof(CampCecMenu, polling.work) == 0xD44 &&
    offsetof(CampCecMenu, helpInitialized) == 0xD61 &&
    offsetof(CampCecMenu, savedBannerPending) == 0xD63 &&
    sizeof(CampCecMenu) == 0xD64 ? 1 : -1];
typedef char CampCecMenuScriptOffsets[
    offsetof(CampCecMenu, scriptResource) == 0xCF4 &&
    offsetof(CampCecMenu, script.process) == 0xD04 &&
    offsetof(CampCecMenu, scriptFlow.phase) == 0xD38 &&
    offsetof(CampCecMenu, scriptFlow.kind) == 0xD5C &&
    sizeof(CampCecMenu) == 0xD64 ? 1 : -1];

#endif
