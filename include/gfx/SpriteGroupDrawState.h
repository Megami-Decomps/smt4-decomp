#ifndef GFX_SPRITE_GROUP_DRAW_STATE_H
#define GFX_SPRITE_GROUP_DRAW_STATE_H
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include <stddef.h>

struct SpriteGroupDrawState {
    /* 0x00 */ f32 x, y;
    /* 0x08 */ f32 halfWidth, halfHeight;
    /* 0x10 */ f32 value;
    /* 0x14 */ AsdTexture *texture;
    /* 0x18 */ f32 u1, v1, u2, v2;
    /* 0x28 */ u16 mode;
    /* 0x2A */ u16 padding;
    union {
        /* 0x2C */ f32 optionalValue;
        /* 0x2C */ u32 optionalBits;
    };
    /* 0x30 */ f32 textureWidth, textureHeight;
};
typedef char SpriteGroupDrawStateLayoutCheck[
    sizeof(SpriteGroupDrawState) == 0x38 &&
    offsetof(SpriteGroupDrawState, halfWidth) == 8 &&
    offsetof(SpriteGroupDrawState, value) == 0x10 &&
    offsetof(SpriteGroupDrawState, texture) == 0x14 &&
    offsetof(SpriteGroupDrawState, u1) == 0x18 &&
    offsetof(SpriteGroupDrawState, mode) == 0x28 &&
    offsetof(SpriteGroupDrawState, optionalValue) == 0x2C &&
    offsetof(SpriteGroupDrawState, textureWidth) == 0x30 ? 1 : -1];
#endif
