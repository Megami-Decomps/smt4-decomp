#ifndef BATTLE_BATTLEACTIONSCALE_H
#define BATTLE_BATTLEACTIONSCALE_H

#include "common.h"

// Script action packets carry the scale as a single integer/float payload word.
union BattleActionScale {
    s32 i;
    f32 f;
};
typedef char BattleActionScaleSizeCheck[sizeof(BattleActionScale) == 4 ? 1 : -1];

#endif
