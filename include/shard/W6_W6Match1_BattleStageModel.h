#ifndef SHARD_W6_W6MATCH1_BATTLE_STAGE_MODEL_H
#define SHARD_W6_W6MATCH1_BATTLE_STAGE_MODEL_H

#include "shard/W4_Match1b_Node.h"

struct BattleStageNode {
    u8 unk00[8];
    NodeOwner* owner;
};

// Recovered SMT IV stage model prefix, preserving the original opaque storage view.
struct BattleStageModel {
    u8 unk00[8];
    s32 key0;
    s32 key1;
    union {
        u8 unk10[0x70];
        struct {
            BattleStageNode* nodes[3]; // 0x10
            NodeVec3 offsets[3];      // 0x1c
        } scene;
    };
    u32 state; // 0x80
    u8 unk84[8];
    s16 lightSlot; // 0x8c
    u8 unk8e[2];
    NodeVec3 position; // 0x90
    u16 frame; // 0x9c
    u8 unk9e[2];
    void* context; // 0xa0
    u8 unka4[0x10];
    u16 ready; // 0xb4
};


extern "C" void btlStageUpdateNodePositions(BattleStageModel* stage, NodeVec3 position);

#endif
