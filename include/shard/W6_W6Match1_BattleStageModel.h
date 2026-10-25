#ifndef SHARD_W6_W6MATCH1_BATTLE_STAGE_MODEL_H
#define SHARD_W6_W6MATCH1_BATTLE_STAGE_MODEL_H

#include "shard/W4_Match1b_Node.h"
#include "nn/os/AddressSpaceManager.h"
#include "nn/os/Thread.h"
#include <stddef.h>

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
    NnOsThread thread; // 0xa4
    void* threadStack; // 0xac: heap block holding the thread stack
    AddressSpaceRegion* stackRegion; // 0xb0
    u16 ready; // 0xb4
    u8 unkb6[0xa];
    s32 unkc0; // reset to -1 when the stage is destroyed
};

typedef char BattleStageModelLayoutCheck[
    offsetof(BattleStageModel, thread) == 0xa4 &&
    offsetof(BattleStageModel, threadStack) == 0xac &&
    offsetof(BattleStageModel, stackRegion) == 0xb0 &&
    sizeof(BattleStageModel) == 0xc4 ? 1 : -1];


extern "C" void btlStageUpdateNodePositions(BattleStageModel* stage, NodeVec3 position);

#ifdef __cplusplus
extern "C" {
#endif

void countersRaiseA(s32 index, u32 value);

#ifdef __cplusplus
}
#endif

#endif
