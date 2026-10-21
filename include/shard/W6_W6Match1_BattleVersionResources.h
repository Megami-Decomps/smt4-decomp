#ifndef SHARD_W6_W6MATCH1_BATTLE_VERSION_RESOURCES_H
#define SHARD_W6_W6MATCH1_BATTLE_VERSION_RESOURCES_H

#include "common.h"

struct BattleVersionResourceSlot {
    u8 state;
    u8 unk01[3];
    u8* data;
    union {
        u8 work[0x84];
        struct {
            /* 0x08 */ u8 unk08[0x80];
            /* 0x88 */ u8 flags;
            /* 0x89 */ u8 unk89[3];
        } readiness;
    };
};

// Prefix view through the eleven versioned-resource slots.
struct BattleVersionResources {
    u8 unk0000[0x25c0];
    BattleVersionResourceSlot slots[11];
};

extern "C" void FUN_00240614(BattleVersionResources* resources);

#endif
