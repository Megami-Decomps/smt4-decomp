#ifndef BATTLE_BATTLE_STAGE_ACCESSORY_H
#define BATTLE_BATTLE_STAGE_ACCESSORY_H

#include "common.h"
#include <stddef.h>

/* A BAM filename and its position in a MapAccessory.tbb row. */
struct BattleStageAccessoryPart {
    /* 0x00 */ char name[0x1E];
    /* 0x1E */ u16 x;
    /* 0x20 */ u16 y;
    /* 0x22 */ u16 z;
};

typedef char BattleStageAccessoryPartLayout[sizeof(BattleStageAccessoryPart) == 0x24 &&
    offsetof(BattleStageAccessoryPart, x) == 0x1E ? 1 : -1];

#endif
