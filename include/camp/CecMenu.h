#ifndef CAMP_CEC_MENU_H
#define CAMP_CEC_MENU_H
#include "common.h"
#include <stddef.h>

struct CampCecMenu {
    /* 0x000 */ u8 unk000[0x48];
    /* 0x048 */ u8 block048[1];
    /* 0x049 */ u8 unk049[0x57];
    /* 0x0A0 */ u8 block0A0[1];
    /* 0x0A1 */ u8 unk0A1[0xC57];
    /* 0xCF8 */ u32 unkCF8;
    /* 0xCFC */ u8 unkCFC[0x30];
    /* 0xD2C */ s32 state;
    /* 0xD30 */ u32 unkD30;
    /* 0xD34 */ s32 substate;
    /* 0xD38 */ u8 unkD38[0x28];
    /* 0xD60 */ u8 optionalProcessAvailable;
};
typedef char CampCecMenuLayoutCheck[sizeof(CampCecMenu) == 0xD64 ? 1 : -1];

typedef char CampCecMenuOffsets[offsetof(CampCecMenu, block048) == 0x48 && offsetof(CampCecMenu, block0A0) == 0xA0 && offsetof(CampCecMenu, unkCF8) == 0xCF8 && offsetof(CampCecMenu, substate) == 0xD34 ? 1 : -1];

#endif
