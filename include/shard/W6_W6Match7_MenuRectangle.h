#ifndef SHARD_W6_W6MATCH7_MENURECTANGLE_H
#define SHARD_W6_W6MATCH7_MENURECTANGLE_H

#include "common.h"

struct MenuDrawPoint {
    f32 x;
    f32 y;
};

extern "C" void menuDrawRectangle(s32 x, s32 y, s32 width, s32 height,
                             u32 outlineColor, u32 fillColor);

#endif
