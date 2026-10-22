/* NON_MATCHING: VFP register reuse differs and the two mode bytes are cleared with separate stores. */
#include "ui/ScaledSpritePosition.h"

// Move the sprite in pixel space, compensating for scale when requested.
extern "C" void FUN_00358e94(ScaledSpritePosition *sprite, s32 deltaX, s32 deltaY)
{
    if (sprite->scaleDeltas) {
        sprite->placement.pixelOffsetX = static_cast<s16>(static_cast<s32>(
            static_cast<f32>(deltaX) / sprite->scale + sprite->placement.pixelOffsetX));
        sprite->placement.pixelOffsetY = static_cast<s16>(static_cast<s32>(
            static_cast<f32>(deltaY) / sprite->scale + sprite->placement.pixelOffsetY));
    } else {
        sprite->placement.pixelOffsetX += deltaX;
        sprite->placement.pixelOffsetY += deltaY;
    }
    sprite->placement.useGeometry = 0;
    sprite->placement.lockVertical = 0;
}
