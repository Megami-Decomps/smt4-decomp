/* NON_MATCHING: written as smt4's enemyDrawComputeSpriteAnchorOffset; VFP register assignment, load scheduling and pool order differ, and retail tests the image flag first. */
#include "shard/W6_W6Match3_EnemyDrawOffset.h"
#include <math.h>
#include <stddef.h>

// This view reaches beyond EnemyDrawOffsetData's recovered prefix without growing that shared type.
struct EnemySpriteFrameViewA {
    u8 unk00[0x12];
    s16 anchorX;
    s16 anchorY;
    s16 offsetY;
    u8 unk18[8];
    s16 originX;
    s16 originY;
    u16 width;
    u16 height;
};
struct EnemySpriteImageViewA {
    u8 unk00[0x14];
    s32 width;
    s32 height;
};
struct EnemySpriteImageOwnerA {
    u8 unk00[0xC];
    const EnemySpriteImageViewA *image;
};
struct EnemySpritePositionViewA {
    u32 unk00;
    const EnemyDrawOffsetOwner *frameOwner;
    const EnemySpriteImageOwnerA *imageOwner;
    u8 unk0C[0x10];
    f32 offsetX;
    f32 offsetY;
    s16 imageOffsetX;
    s16 imageOffsetY;
    u8 useImage;
    u8 suppressVerticalOffset;
};
typedef char EnemySpritePositionOffsetsA[
    offsetof(EnemySpriteFrameViewA, width) == 0x24 && offsetof(EnemySpritePositionViewA, useImage) == 0x28 &&
    offsetof(EnemySpriteImageViewA, height) == 0x18 ? 1 : -1];

extern "C" {
extern const f32 g_enemySpriteVerticalBaseline;
extern f32 g_spriteDrawYOffset;

// Derive the centered screen-space origin for an enemy frame or its replacement image.
void enemySpriteDeriveOrigin(const EnemySpritePositionViewA *draw, BattleVector3 *position, f32 scale)
{
    const EnemySpriteFrameViewA *frame = (const EnemySpriteFrameViewA *)draw->frameOwner->data;
    f32 baseY = (f32)frame->anchorY + g_enemySpriteVerticalBaseline - (f32)frame->offsetY;
    s32 frameTop = frame->originY;
    u16 frameHeight = frame->height;
    f32 width;
    f32 height;
    f32 bottom;
    if (draw->useImage) {
        const EnemySpriteImageViewA *image = draw->imageOwner->image;
        height = (f32)image->height;
        width = (f32)image->width;
        f32 centerShift = (f32)(frameHeight - image->height) * 0.5f;
        bottom = (f32)frameTop + ((f32)draw->imageOffsetY + centerShift) + height;
    } else {
        bottom = (f32)(frameTop + frameHeight);
        height = (f32)frameHeight + fabsf(draw->offsetY) * 2.0f;
        width = (f32)frame->width + fabsf(draw->offsetX) * 2.0f;
    }
    s32 centering = 0;
    if (width > height) {
        centering = (s32)((width - height) * 0.5f);
    }
    position->y = 0.0f;
    position->y += (baseY - bottom) - (f32)centering;
    if (!draw->useImage && !draw->suppressVerticalOffset) {
        position->y += draw->offsetY * 2.0f;
    }
    position->y *= scale;
    position->y += g_spriteDrawYOffset;
    position->x = 0.0f;
    s32 horizontalAnchor = frame->anchorX - (frame->originX + (frame->width >> 1));
    position->x -= (f32)horizontalAnchor;
    if (draw->useImage) {
        position->x += (f32)draw->imageOffsetX;
    } else {
        position->x += draw->offsetX;
    }
    position->z = 0.0f;
    position->x *= scale;
}
}
