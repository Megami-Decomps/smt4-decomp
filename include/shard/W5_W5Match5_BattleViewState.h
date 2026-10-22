#ifndef SHARD_W5_W5MATCH5_BATTLE_VIEW_STATE_H
#define SHARD_W5_W5MATCH5_BATTLE_VIEW_STATE_H

#include "common.h"

struct BattleViewObject {
    void *vtable; // 0x00
    u32 flags; // 0x04
};
struct BattleViewOwner {
    u32 unk00;
    BattleViewObject *object; // 0x04
};

struct BattleViewState {
    union {
        /* 0x00 */ u8 unk00[0x24];
        struct {
            u8 unk00[8];
            s32 attached; // 0x08
            BattleViewOwner *primary[3]; // 0x0c
        } attachments;
    };
    /* 0x24 */ f32 value;
    /* 0x28 */ u8 unk28[0x54];
    /* 0x7C */ u8 disabled;
    /* 0x7d */ u8 unk7d[0x4b];
    /* 0xc8 */ BattleViewOwner *children[3];
};

#endif
