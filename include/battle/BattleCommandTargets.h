#ifndef BATTLE_BATTLECOMMANDTARGETS_H
#define BATTLE_BATTLECOMMANDTARGETS_H
#include "common.h"
#include <stddef.h>

struct BattleCommandTargets {
    /* 0x0000 */ u8 unk0000[0x3890];
    /* 0x3890 */ u32 actorIndex;
    /* 0x3894 */ u8 unk3894[0x348];
    /* 0x3BDC */ u8 targetSelection[0xAC];
    /* 0x3C88 */ s32 results[73];
    /* 0x3DAC */ s32 fallback;
};

typedef char BattleCommandTargetsOffsets[
    offsetof(BattleCommandTargets, actorIndex) == 0x3890 &&
    offsetof(BattleCommandTargets, targetSelection) == 0x3BDC &&
    offsetof(BattleCommandTargets, results) == 0x3C88 &&
    offsetof(BattleCommandTargets, fallback) == 0x3DAC ? 1 : -1];
#endif
