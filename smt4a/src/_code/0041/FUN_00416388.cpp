/* NON_MATCHING: 220 lines. Rebuilt from retail's code: the four overlap cases (above/below, left/right of the other
 * box), the offset vector the box moves by and the clamp to 400x120 (the old draft had the limits swapped). Remaining:
 * VFP register allocation (retail loads x/y into s17/s16 and keeps the 90/19 sizes in s7/s6) and the case layout. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

#define LABEL_COUNT 12

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

extern "C" {

/* Moves label `index` (a 90x19 box) vertically off the shown labels it overlaps, then keeps its sprite
 * inside the 400x120 area; returns the total offset (dx, dy, 0). */
LabelVec3 FUN_00416388(LabelNode *labels, s32 index, const LabelSpriteKey *key)
{
    f32 x = labels[index].x;
    f32 y = labels[index].y;
    TextureTableEntryIV *sprite = asdTMTexTableEntryAt(key->bank, key->sprite);
    f32 boxWidth = 90.0f;
    f32 boxHeight = 19.0f;
    f32 half = 0.5f;
    LabelVec3 offset;
    offset.x = 0.0f;
    offset.y = 0.0f;
    offset.z = 0.0f;

    f32 left = x - boxWidth * half + offset.x;
    f32 right = x + offset.x + boxWidth * half;
    f32 top = y - boxHeight * half + offset.y;
    f32 bottom = y + offset.y + boxHeight * half;
    for (s32 i = 0; i < LABEL_COUNT; i++) {
        if (i == index || labels[i].active == 0)
            continue;
        f32 otherLeft = labels[i].x - boxWidth * half;
        f32 otherRight = labels[i].x + boxWidth * half;
        f32 otherTop = labels[i].y - boxHeight * half;
        f32 otherBottom = labels[i].y + boxHeight * half;
        if (top > otherTop && left > otherLeft) {
            if (top < otherBottom && left < otherRight) {
                offset.y = otherBottom - top;
                left += offset.x;
                right += offset.x;
                top += offset.y;
                bottom += offset.y;
            }
        } else if (top > otherTop && left < otherLeft) {
            if (top < otherBottom && right > otherLeft) {
                offset.y = otherBottom - top;
                left += offset.x;
                right += offset.x;
                top += offset.y;
                bottom += offset.y;
            }
        } else if (top < otherTop && left > otherLeft) {
            if (bottom > otherTop && left < otherRight) {
                offset.y = otherTop - bottom;
                left += offset.x;
                right += offset.x;
                top += offset.y;
                bottom += offset.y;
            }
        } else if (top < otherTop && left < otherLeft) {
            if (bottom > otherTop && right > otherLeft) {
                offset.y = otherTop - bottom;
                left += offset.x;
                right += offset.x;
                top += offset.y;
                bottom += offset.y;
            }
        }
    }

    f32 width = (f32)sprite->placement->width;
    f32 height = (f32)sprite->placement->height;
    LabelVec3 clamp;
    clamp.x = 0.0f;
    clamp.y = 0.0f;
    clamp.z = 0.0f;
    f32 shownX = x + offset.x;
    f32 shownY = y + offset.y;
    if (shownY - height * half < 0.0f)
        clamp.y = height * half - shownY;
    else if (shownY + height * half > 120.0f)
        clamp.y = 120.0f - (shownY + height * half);
    if (shownX - width * half < 0.0f)
        clamp.x = width * half - shownX;
    else if (shownX + width * half > 400.0f)
        clamp.x = 400.0f - (shownX + width * half);

    LabelVec3 result;
    result.x = offset.x + clamp.x;
    result.y = offset.y + clamp.y;
    result.z = offset.z + clamp.z;
    return result;
}

} /* extern "C" */
