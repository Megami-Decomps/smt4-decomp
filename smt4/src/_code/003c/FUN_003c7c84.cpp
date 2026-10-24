#include "common.h"

extern "C" {

struct IVec2 {
    s32 x;
    s32 y;
};

struct UiPlacementSrc {
    /* 0x000 */ u8 pad0[0xc8];
    /* 0x0c8 */ u8 block[0x1f];
    /* 0x0e7 */ s8 cellX;
    /* 0x0e8 */ s8 cellY;
    /* 0x0e9 */ u8 pad1[0x13c - 0xe9];
    /* 0x13c */ IVec2 pos;
};

struct UiPlacementDst {
    /* 0x00 */ u8 pad0[0x84];
    /* 0x84 */ IVec2 pos;
    /* 0x8c */ s16 index;
    /* 0x8e */ u8 pad1[2];
    /* 0x90 */ f32 v0;
    /* 0x94 */ f32 v1;
    /* 0x98 */ f32 v2;
};

void FUN_0027dc24(UiPlacementSrc *src, void *block, int flag);

/* Resets the destination's vector, and copies the source position (filling it from the cell if unset). */
void FUN_003c7c84(UiPlacementDst *dst, UiPlacementSrc *src)
{
    dst->v0 = dst->v1 = dst->v2 = 0.0f;
    dst->index = -1;
    if (src->pos.x < 0 || src->pos.y < 0) {
        FUN_0027dc24(src, src->block, 0);
        s32 x = src->cellX;
        s32 y = src->cellY;
        src->pos.x = x;
        src->pos.y = y;
    }
    dst->pos = src->pos;
}

} /* extern "C" */
