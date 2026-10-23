/* battle/btlPartnerAttack.cpp: partner action state and its owned script/render resources. */
#ifndef BATTLE_BTLPARTNERATTACK_H
#define BATTLE_BTLPARTNERATTACK_H

#include "common.h"
#include <stddef.h>
struct ScriptRunState;
struct ScriptResource;

struct BtlPartnerAttackA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ union { u32 unk08; u32 actionState; };
    /* 0x0c */ u32 unk0c;
    /* 0x10 */ union { u32 unk10; u32 scriptPhase; };
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 state;
    /* 0x1c */ s32 argument;
    /* 0x20 */ s32 selected;
    /* 0x24 */ void *scriptData;
    /* 0x28 */ union {
        void *scriptProcess;
        ScriptRunState *runState;
        ScriptResource *scriptResource;
    };
    /* 0x2c */ u32 unk2c;
    /* 0x30 */ void *entries;
};
typedef char BtlPartnerAttackScriptOffsets[
    offsetof(BtlPartnerAttackA, actionState) == 8 &&
    offsetof(BtlPartnerAttackA, scriptPhase) == 0x10 &&
    offsetof(BtlPartnerAttackA, runState) == 0x28 &&
    sizeof(BtlPartnerAttackA) == 0x34 ? 1 : -1];

#endif
