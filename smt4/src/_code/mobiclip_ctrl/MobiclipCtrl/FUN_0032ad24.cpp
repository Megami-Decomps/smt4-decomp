#include "battle/BattleHpRank.h"

// Order the candidate battle entries by descending current HP.
extern "C" s32 FUN_0032ad24(const BattleHpRank *earlier, const BattleHpRank *later)
{
    return later->hp - earlier->hp;
}
