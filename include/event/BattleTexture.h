#ifndef EVENT_BATTLE_TEXTURE_H
#define EVENT_BATTLE_TEXTURE_H
#include "common.h"
#include <stddef.h>

struct EventBattleTextureWork {
    u32 id;
    s32 state;
    f32 scale;
    f32 opacity;
    f32 opacityStep;
    u8 stopWhenTransparent;
    u8 unk15;
    u8 enabled;
    u8 unk17;
    u8 unk18[0x14];
    f32 position[2];
    u32 resource;
    s32 textureId;
    s32 direction;
    f32 animationTime;
    u8 animated;
    u8 unk45[3];
};
typedef char EventBattleTextureWorkLayoutCheck[sizeof(EventBattleTextureWork) == 0x48 &&
    offsetof(EventBattleTextureWork, position) == 0x2C &&
    offsetof(EventBattleTextureWork, textureId) == 0x38 &&
    offsetof(EventBattleTextureWork, direction) == 0x3C ? 1 : -1];
#endif
