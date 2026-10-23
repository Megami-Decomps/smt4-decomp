#ifndef BATTLE_RESTORATIONEFFECT_H
#define BATTLE_RESTORATIONEFFECT_H
#include "common.h"
#include <stddef.h>
struct RestorationEffect {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 hp;
    /* 0x36 */ u16 mp;
    /* 0x38 */ u8 hpPercent;
    /* 0x39 */ u8 mpPercent;
    /* 0x3A */ u8 ailmentKind;
    /* 0x3B */ u8 unk3B[0x2D];
    /* 0x68 */ u32 flags;
};
typedef char RestorationEffectOffsets[(offsetof(RestorationEffect, flags) == 0x68 && sizeof(RestorationEffect) == 0x6C) ? 1 : -1];
#endif
