#ifndef UI_SPRITEINDICATOR_H
#define UI_SPRITEINDICATOR_H
#include "common.h"
#include <stddef.h>

struct SpriteIndicatorOwner {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s32 state;
    /* 0x00C */ u8 unk00C[0x320];
    /* 0x32C */ s32 spriteIndex;
};
typedef char SpriteIndicatorOwnerOffsetsCheck[
    offsetof(SpriteIndicatorOwner, state) == 8 &&
    offsetof(SpriteIndicatorOwner, spriteIndex) == 0x32C ? 1 : -1];

struct SpriteLayerBlendState {
    /* 0x00 */ f32 speed;
    /* 0x04 */ s32 offset;
};
typedef char SpriteLayerBlendStateOffsetsCheck[
    offsetof(SpriteLayerBlendState, offset) == 4 && sizeof(SpriteLayerBlendState) == 8 ? 1 : -1];
#endif
