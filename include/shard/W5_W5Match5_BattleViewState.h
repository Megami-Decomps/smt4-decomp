#ifndef SHARD_W5_W5MATCH5_BATTLE_VIEW_STATE_H
#define SHARD_W5_W5MATCH5_BATTLE_VIEW_STATE_H

#include "common.h"

struct BattleViewState {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ f32 value;
    /* 0x28 */ u8 unk28[0x54];
    /* 0x7C */ u8 disabled;
};

#endif
