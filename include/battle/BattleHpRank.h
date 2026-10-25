#ifndef BATTLE_BATTLEHPRANK_H
#define BATTLE_BATTLEHPRANK_H
#include "common.h"

struct BattleHpRank {
    s32 selectionIndex;
    s32 hp;
};
typedef char BattleHpRankSizeCheck[sizeof(BattleHpRank) == 8 ? 1 : -1];

extern "C" s32 FUN_0032ad24(const BattleHpRank *earlier, const BattleHpRank *later);
#endif
