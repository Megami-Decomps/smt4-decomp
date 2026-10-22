#ifndef CAMP_CAMPSTATE_H
#define CAMP_CAMPSTATE_H

#include "common.h"
#include <stddef.h>

typedef struct CampStateA {
    /* 0x00000 */ u32 job;
    /* 0x00004 */ u8 unk00004[0x3C];
    /* 0x00040 */ u8 block40[0x64];
    /* 0x000A4 */ s8 unkA4;
    /* 0x000A5 */ u8 unk000A5[0x158F];
    /* 0x01634 */ u8 numericBanner[1];
    /* 0x01635 */ u8 unk01635[0x3D3];
    /* 0x01A08 */ u8 transitionSprite[0x118];
    /* 0x01B20 */ u8 spriteState;
} CampStateA;

typedef char CampStateALayoutCheck[sizeof(CampStateA) == 0x1B24 ? 1 : -1];

typedef char CampStateAOffsets[offsetof(CampStateA, numericBanner) == 0x1634 && offsetof(CampStateA, transitionSprite) == 0x1A08 && offsetof(CampStateA, spriteState) == 0x1B20 ? 1 : -1];

#endif
