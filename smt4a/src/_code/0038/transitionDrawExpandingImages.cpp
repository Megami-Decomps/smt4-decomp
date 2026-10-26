#include "common.h"

extern "C" {
void effectSetByteSpeed(u32 speed);
void FUN_00185dd4(s32 screen, s32 layer, u32 sprite, s32 x, s32 y, s32 width, s32 height, s32 flags);

// Animate two centered panels into view, then fade them out.
void transitionDrawExpandingImages(s32 frame)
{
    if (frame < 240)
        return;
    if (frame > 330)
        return;

    s32 alpha = 255;
    if (frame > 310) {
        alpha = (310 - frame) * 32 + 255;
        if (alpha < 0)
            return;
    }
    effectSetByteSpeed(alpha & 255);

    s32 progress = frame - 240;
    if (progress > 5)
        progress = 5;
    s32 height = progress * 240 / 5;
    s32 y = height < 240 ? (240 - height) / 2 : 0;
    FUN_00185dd4(2, 4, 0x9088, 0, y, 400, height, 11);

    progress = frame - 245;
    if (progress > 8)
        progress = 8;
    height = progress * 240 / 8;
    y = height < 240 ? (240 - height) / 2 : 0;
    FUN_00185dd4(2, 4, 0x9089, 0, y, 400, height, 11);
    effectSetByteSpeed(255);
}
}
