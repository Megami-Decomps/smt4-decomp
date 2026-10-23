#ifndef BATTLE_BATTLESKILLRESPONSEMASKS_H
#define BATTLE_BATTLESKILLRESPONSEMASKS_H
#include "common.h"
#include <stddef.h>

struct BattleSkillResponseMasks {
    u64 unk00;
    u64 mappedValue;
    u64 unk10;
    u64 sourceValue;
    u64 affinity;
};
typedef char BattleSkillResponseMaskOffsets[
    offsetof(BattleSkillResponseMasks, mappedValue) == 8 &&
    offsetof(BattleSkillResponseMasks, sourceValue) == 0x18 &&
    offsetof(BattleSkillResponseMasks, affinity) == 0x20 &&
    sizeof(BattleSkillResponseMasks) == 0x28 ? 1 : -1];

extern "C" BattleSkillResponseMasks DAT_005713f0;
#endif
