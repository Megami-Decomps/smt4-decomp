#include "battle/BattleHpRank.h"

// Order the candidate battle entries by descending current HP.
extern "C" s32 callbackCompareDescendingState(const BattleHpRank *earlier, const BattleHpRank *later)
{
    return later->hp - earlier->hp;
}
