#ifndef CAMP_CAMPSTATE_H
#define CAMP_CAMPSTATE_H

#include "common.h"
#include <stddef.h>

typedef struct CampStateA {
    /* 0x00000 */ u32 job;
    union {
        /* 0x00004 */ u8 unk00004[0x3C];
        struct {
            u8 unk00004BeforeMenu[0x18];
            /* 0x0001C */ s32 current;
            u8 unk00020[8];
            /* 0x00028 */ s32 previous;
        } menu;
    };
    /* 0x00040 */ u8 block40[0x64];
    /* 0x000A4 */ s8 unkA4;
    /* 0x000A5 */ u8 unk000A5[0x63F];
    union {
        /* 0x006E4 */ u8 primarySprite[0x118];
        struct {
            u8 unk6E4[0x8C];
            struct {
                u8 unk770[0x20];
                /* 0x00790 */ f32 scale;
            } properties;
        } primaryAnimation;
    };
    /* 0x007FC */ u8 unk007FC[0xE38];
    /* 0x01634 */ u8 numericBanner[1];
    /* 0x01635 */ u8 unk01635[0x3D3];
    union {
        /* 0x01A08 */ u8 transitionSprite[0x118];
        struct {
            u8 prefix1A08[0x20];
            f32 scale;
        } transition;
    };
    /* 0x01B20 */ u8 spriteState;
} CampStateA;

typedef char CampStateALayoutCheck[sizeof(CampStateA) == 0x1B24 ? 1 : -1];

typedef char CampStateAOffsets[offsetof(CampStateA, numericBanner) == 0x1634 && offsetof(CampStateA, transitionSprite) == 0x1A08 && offsetof(CampStateA, spriteState) == 0x1B20 ? 1 : -1];
typedef char CampStatePrimarySpriteOffsetCheck[offsetof(CampStateA, primarySprite) == 0x6E4 ? 1 : -1];
typedef char CampStateTransitionScaleOffsetCheck[
    offsetof(CampStateA, transition.scale) == 0x1A28 &&
    sizeof(CampStateA) == 0x1B24 ? 1 : -1];
typedef char CampStateMenuOffsets[
    offsetof(CampStateA, menu.current) == 0x1C &&
    offsetof(CampStateA, menu.previous) == 0x28 &&
    sizeof(CampStateA) == 0x1B24 ? 1 : -1];
typedef char CampStatePrimaryScaleOffsetCheck[
    offsetof(CampStateA, primaryAnimation.properties.scale) == 0x790 &&
    sizeof(CampStateA) == 0x1B24 ? 1 : -1];

#endif
