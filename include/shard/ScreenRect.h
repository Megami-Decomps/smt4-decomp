#ifndef SHARD_SCREEN_RECT_H
#define SHARD_SCREEN_RECT_H

#include "common.h"

/* A float rectangle with the layer it is drawn on. */
struct ScreenRect {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 width;
    /* 0x0c */ f32 height;
    /* 0x10 */ s32 layer;
};

#endif
