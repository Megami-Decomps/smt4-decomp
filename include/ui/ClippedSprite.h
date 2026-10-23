#ifndef UI_CLIPPEDSPRITE_H
#define UI_CLIPPEDSPRITE_H
#include "common.h"
#include <stddef.h>
struct ClippedSprite {
    s32 x, y;
    s32 clipX, clipY;
    s32 clipWidth, clipHeight;
    u8 unk18[0x14];
    u32 group;
    u32 image;
};
typedef char ClippedSpriteLayoutCheck[offsetof(ClippedSprite, group) == 0x2C && sizeof(ClippedSprite) == 0x34 ? 1 : -1];
#endif
