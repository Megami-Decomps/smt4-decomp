#ifndef SHARD_W6_W6MATCH6_BATTLE_CAMERA_H
#define SHARD_W6_W6MATCH6_BATTLE_CAMERA_H

#include "shard/W5_W5Match4_BattleVectorTransition.h"

struct BattleActionCamera {
    union {
        u8 unk000[0x7cc];
        struct {
            u8 unk000[0x64c];
            u32 flags;
            u8 unk650[0x154];
            BattleVector3 position; // 0x7a4
            u8 unk7b0[0x18];
            s32 previousTarget; // 0x7c8
        } formation;
    };
    s32 target; // 0x7cc
};

#endif
