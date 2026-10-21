/* NON_MATCHING: VFP register assignment/load scheduling and pool order differ; horizontal zero-origin subtraction loses retail's VMOV, and its geometry-flag load is delayed. -O2 candidate. */
#include "shard/W6_W6Match8_BattleSpritePlacement.h"
#include <math.h>

extern "C" {
extern const f32 g_enemySpriteVerticalBaseline;
extern f32 DAT_00433d98;

// Anchor the enemy sprite around its image bounds or the supplied geometry bounds.
void enemyDrawComputeSpriteAnchorOffset(const BattleSpritePlacement *placement, BattleVector3 *output, f32 scale)
{
    const BattleSpriteFrame *frame = placement->sprite->frame;
    f32 verticalOrigin = (f32)frame->vertical.anchorY + g_enemySpriteVerticalBaseline -
                         (f32)frame->vertical.baselineOffset;
    s32 frameTop = frame->top;
    u16 frameHeight = frame->height;
    f32 width;
    f32 height;
    f32 bottom;
    if (placement->useGeometry) {
        const BattleSpriteGeometry *geometry = placement->geometry->geometry;
        height = (f32)geometry->height;
        width = (f32)geometry->width;
        f32 centerShift = (f32)(frameHeight - geometry->height) * 0.5f;
        bottom = (f32)frameTop + ((f32)placement->pixelOffsetY + centerShift) + height;
    } else {
        bottom = (f32)(frameTop + frameHeight);
        height = (f32)frameHeight + fabsf(placement->offsetY) * 2.0f;
        width = (f32)frame->width + fabsf(placement->offsetX) * 2.0f;
    }
    s32 squarePadding = 0;
    if (width > height) {
        squarePadding = (s32)((width - height) * 0.5f);
    }
    output->y = 0.0f;
    output->y += (verticalOrigin - bottom) - (f32)squarePadding;
    if (!placement->useGeometry && !placement->lockVertical) {
        output->y += placement->offsetY * 2.0f;
    }
    output->y *= scale;
    output->y += DAT_00433d98;
    output->x = 0.0f;
    s32 horizontalAnchor = frame->anchorX - (frame->left + (frame->width >> 1));
    output->x -= (f32)horizontalAnchor;
    if (placement->useGeometry) {
        output->x += (f32)placement->pixelOffsetX;
    } else {
        output->x += placement->offsetX;
    }
    output->z = 0.0f;
    output->x *= scale;
}
}
