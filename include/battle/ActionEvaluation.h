#ifndef BATTLE_ACTIONEVALUATION_H
#define BATTLE_ACTIONEVALUATION_H
#include "common.h"
#include <stddef.h>
struct BattleActionEvaluation {
    u16 flags;
    u16 skill;
    s16 kind;
    u8 unk06[0x2E];
};
typedef char BattleActionEvaluationOffsets[offsetof(BattleActionEvaluation, skill) == 2 && offsetof(BattleActionEvaluation, kind) == 4 && sizeof(BattleActionEvaluation) == 0x34 ? 1 : -1];
#endif
