/* battle/btlPartnerAttack.cpp: partner action state and its owned script/render resources. */
#ifndef BATTLE_BTLPARTNERATTACK_H
#define BATTLE_BTLPARTNERATTACK_H

#include "common.h"

struct BtlPartnerAttackA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 state;
    /* 0x1c */ s32 argument;
    /* 0x20 */ s32 selected;
    /* 0x24 */ void *scriptData;
    /* 0x28 */ void *scriptProcess;
    /* 0x2c */ u32 unk2c;
    /* 0x30 */ void *entries;
};

#endif
