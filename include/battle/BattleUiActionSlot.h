#ifndef BATTLE_BATTLEUIACTIONSLOT_H
#define BATTLE_BATTLEUIACTIONSLOT_H
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include <stddef.h>

struct BattleUiActionVector { f32 x, y, z; };
struct BattleUiActionSlot {
    /* 0x000 */ SpritePlaybackView firstSprite;
    /* 0x08C */ SpritePlaybackView secondSprite;
    /* 0x118 */ u16 state;
    /* 0x11A */ u16 frame;
    /* 0x11C */ f32 progress;
    /* 0x120 */ u8 active;
    /* 0x121 */ u8 unk121[3];
    union {
        /* 0x124 */ f32 position[3];
        /* 0x124 */ BattleUiActionVector projected;
    };
    /* 0x130 */ f32 velocity[3];
    /* 0x13C */ f32 acceleration[3];
    /* 0x148 */ u32 *ownerFlags;
};
typedef char BattleUiActionSlotOffsetsCheck[sizeof(BattleUiActionSlot) == 0x14C &&
    offsetof(BattleUiActionSlot, state) == 0x118 &&
    offsetof(BattleUiActionSlot, position) == 0x124 &&
    offsetof(BattleUiActionSlot, projected) == 0x124 && sizeof(BattleUiActionVector) == 12 &&
    offsetof(BattleUiActionSlot, ownerFlags) == 0x148 ? 1 : -1];
#endif
