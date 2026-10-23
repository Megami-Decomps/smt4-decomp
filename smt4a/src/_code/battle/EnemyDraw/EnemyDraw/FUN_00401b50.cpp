/* NON_MATCHING: frame-prefix alias reloads, floating register allocation and vector output-store grouping differ from retail. */
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
extern const f32 DAT_00527244;
extern f32 g_spriteDrawYOffset;

// Derive the centered screen-space origin for an enemy frame or its replacement image.
void FUN_00401b50(const EnemySpritePositionViewA *draw, BattleVector3 *position, f32 scale)
{
    const EnemySpriteFrameViewA *frame = (const EnemySpriteFrameViewA *)draw->frameOwner->data;
    f32 baseY = ((f32)frame->anchorY + DAT_00527244) - (f32)frame->offsetY;
    f32 width;
    f32 height;
    f32 bottom;
    if (draw->useImage) {
        const EnemySpriteImageViewA *image = draw->imageOwner->image;
        height = (f32)image->height;
        width = (f32)image->width;
        bottom = (f32)frame->originY + ((f32)draw->imageOffsetY + (f32)((s32)frame->height - image->height) * 0.5f) + height;
    } else {
        height = (f32)(u32)frame->height + fabsf(draw->offsetY) * 2.0f;
        bottom = (f32)(frame->originY + frame->height);
        width = (f32)(u32)frame->width + fabsf(draw->offsetX) * 2.0f;
    }
    s32 centering = 0;
    if (width > height)
        centering = (s32)((width - height) * 0.5f);
    position->y = 0.0f + ((baseY - bottom) - (f32)centering);
    if (!draw->useImage && !draw->suppressVerticalOffset)
        position->y += draw->offsetY * 2.0f;
    position->y = position->y * scale + g_spriteDrawYOffset;
    position->x = 0.0f - (f32)(frame->anchorX - (frame->originX + (frame->width >> 1)));
    if (draw->useImage)
        position->x += (f32)draw->imageOffsetX;
    else
        position->x += draw->offsetX;
    position->z = 0.0f;
    position->x *= scale;
}
}
