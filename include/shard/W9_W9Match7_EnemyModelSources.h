#ifndef SHARD_W9_W9MATCH7_ENEMYMODELSOURCES_H
#define SHARD_W9_W9MATCH7_ENEMYMODELSOURCES_H
#include "common.h"
#include <stddef.h>

struct EnemyExtraModelLimits {
    /* 0x00 */ u8 unk00[0x7E];
    /* 0x7E */ s16 capacity;
};
struct EnemyExtraModelSource {
    /* 0x00 */ s16 modelId;
    /* 0x02 */ u8 unk02[0xE];
};
typedef char EnemyExtraModelLimitsOffsetCheck[offsetof(EnemyExtraModelLimits, capacity) == 0x7E ? 1 : -1];
typedef char EnemyExtraModelSourceSizeCheck[sizeof(EnemyExtraModelSource) == 0x10 ? 1 : -1];
#endif
