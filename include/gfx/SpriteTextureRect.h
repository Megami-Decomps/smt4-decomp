#ifndef GFX_SPRITE_TEXTURE_RECT_H
#define GFX_SPRITE_TEXTURE_RECT_H
#include "common.h"
struct SpriteTextureRect {
    u32 unk00; // 0x00
    s8 offsetX; // 0x04
    u8 textureX; // 0x05
    u8 unk06; // 0x06
    u8 textureY; // 0x07
    u16 textureWidth; // 0x08
    u16 textureHeight; // 0x0A
    u16 width; // 0x0C
    u16 height; // 0x0E
};
#endif
