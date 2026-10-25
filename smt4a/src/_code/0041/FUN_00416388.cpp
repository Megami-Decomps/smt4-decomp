/* NON_MATCHING: label placement; the box-overlap test and the screen clamp are reconstructed from the decompiler's flag arithmetic and the returned offsets/clamp limits are approximate, not compared against retail */
#include "common.h"

#define LABEL_COUNT 12
#define LABEL_HALF_WIDTH 45.0f
#define LABEL_HALF_HEIGHT 9.5f

struct LabelVec3 {
    f32 x, y, z;
};

/* One placed label (0xB0 bytes): its centre and whether it is shown. */
struct LabelNode {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ f32 x;
    /* 0x0C */ f32 y;
    /* 0x10 */ u8 unk10[0x90];
    /* 0xA0 */ u8 active;
    /* 0xA1 */ u8 unkA1[0xF];
};

struct LabelSpriteKey {
    /* 0x00 */ u32 bank;
    /* 0x04 */ u32 sprite;
};

struct LabelSprite {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s16 *size;      /* [0] width, [1] height */
};

extern "C" {
LabelSprite *asdTMTexTableEntryAt(u32 bank, u32 sprite);

/* Moves label `index` out of the way of the other shown labels vertically and returns the offset
 * that keeps its sprite inside the screen: (dx, dy, 0). */
LabelVec3 FUN_00416388(LabelNode *labels, s32 index, const LabelSpriteKey *key)
{
    f32 x = labels[index].x;
    f32 y = labels[index].y;
    LabelSprite *sprite = asdTMTexTableEntryAt(key->bank, key->sprite);

    f32 left = x - LABEL_HALF_WIDTH;
    f32 right = x + LABEL_HALF_WIDTH;
    f32 top = y - LABEL_HALF_HEIGHT;
    f32 bottom = y + LABEL_HALF_HEIGHT;
    f32 push = 0.0f;

    for (s32 i = 0; i < LABEL_COUNT; i++) {
        if (i == index || labels[i].active == 0)
            continue;
        f32 otherLeft = labels[i].x - LABEL_HALF_WIDTH;
        f32 otherRight = labels[i].x + LABEL_HALF_WIDTH;
        f32 otherTop = labels[i].y - LABEL_HALF_HEIGHT;
        f32 otherBottom = labels[i].y + LABEL_HALF_HEIGHT;
        bool overlapsX = left < otherRight && otherLeft < right;
        bool overlapsY = top < otherBottom && otherTop < bottom;
        if (overlapsX && overlapsY) {
            if (top < otherTop)
                push = otherTop - bottom;
            else
                push = otherBottom - top;
            top += push;
            bottom += push;
        }
    }

    f32 width = (f32)sprite->size[0];
    f32 height = (f32)sprite->size[1];
    f32 dx = 0.0f;
    f32 dy = 0.0f;
    f32 halfWidth = width * 0.5f;
    f32 halfHeight = height * 0.5f;
    if (x - halfWidth < 0.0f)
        dx = halfWidth - x;
    else if (x + halfWidth > 120.0f)
        dx = 120.0f - (x + halfWidth);
    if (y - halfHeight < 0.0f)
        dy = halfHeight - y;
    else if (y + halfHeight > 400.0f)
        dy = 400.0f - (y + halfHeight);

    LabelVec3 result;
    result.x = dx;
    result.y = dy + push;
    result.z = 0.0f;
    return result;
}

} /* extern "C" */
