#ifndef SHARD_W6_W6MATCH8_BATTLE_ROSTER_RECORD_A_H
#define SHARD_W6_W6MATCH8_BATTLE_ROSTER_RECORD_A_H

#include "common.h"
#include "shard/W6_W6Match7_BattleEffects.h"

struct BattleRosterRecordA {
    union {
        u8 data[0x1d0];
        BattleEffectSetup render;
        BattleRosterMotionA motion;
        struct {
            u8 unk00[0x3c];
            s8 group; // 0x3c
            u8 unk3d[3];
            f32 scale; // 0x40
            u8 unk44[0x1c];
            u16 flags; // 0x60
        } marker;
        struct {
            /* 0x00 */ u8 unk00[0x64];
            /* 0x64 */ u32 key;
        } modelMatch;
    };
};
typedef char BattleRosterRecordASizeCheck[sizeof(BattleRosterRecordA) == 0x1D0 ? 1 : -1];

#endif
