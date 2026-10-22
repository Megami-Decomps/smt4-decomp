#ifndef SHARD_W6_W6MATCH8_BATTLE_ROSTER_RECORD_A_H
#define SHARD_W6_W6MATCH8_BATTLE_ROSTER_RECORD_A_H

#include "common.h"
#include <stddef.h>
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
        struct {
            /* 0x00 */ u8 unk00[0x50];
            /* 0x50 */ u32 unk50; /* 1, 0x80: active; 2: excluded */
            /* 0x54 */ u8 unk54[0x4];
            /* 0x58 */ u32 unk58; /* 4: excluded */
            /* 0x5C */ u8 unk5C[0xB0];
            /* 0x10C */ u32 unk10C;
        } liveFlags;
    };
};
typedef char BattleRosterRecordASizeCheck[sizeof(BattleRosterRecordA) == 0x1D0 ? 1 : -1];
typedef char BattleRosterRecordALiveFlagsCheck[offsetof(BattleRosterRecordA, liveFlags.unk58) == 0x58 ? 1 : -1];
typedef char BattleRosterRecordALiveFlags10CCheck[offsetof(BattleRosterRecordA, liveFlags.unk10C) == 0x10C ? 1 : -1];

#endif
