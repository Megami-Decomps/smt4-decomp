#ifndef SHARD_W6_W6MATCH3_ENEMYDRAWOFFSET_H
#define SHARD_W6_W6MATCH3_ENEMYDRAWOFFSET_H

#include "shard/W5_W5Match4_BattleVectorTransition.h"

struct EnemyDrawOffsetData {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s16 height;
    /* 0x16 */ u8 unk16[4];
    /* 0x1A */ s16 originY;
};

struct EnemyDrawOffsetOwner {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ const EnemyDrawOffsetData* data;
};

#endif
