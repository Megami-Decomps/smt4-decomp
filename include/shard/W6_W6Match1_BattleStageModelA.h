#ifndef SHARD_W6_W6MATCH1_BATTLE_STAGE_MODELA_H
#define SHARD_W6_W6MATCH1_BATTLE_STAGE_MODELA_H

#include "shard/W4_Match1b_Node.h"

struct PositionOwner;
struct BattleStageNodeA {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ PositionOwner* owner;
};

// Apocalypse prefix through the stage's translation vector.
struct BattleStageModelA {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ BattleStageNodeA* nodes[3];
    /* 0x28 */ NodeVec3 offsets[3];
    /* 0x4c */ u8 unk4c[0x64];
    /* 0xb0 */ NodeVec3 position;
};

extern "C" void btlStageUpdateNodePositions(BattleStageModelA* stage, NodeVec3 position);

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00343c58(u32 a, u32 index, u32 dir, u32 d);

#ifdef __cplusplus
}
#endif

#endif
