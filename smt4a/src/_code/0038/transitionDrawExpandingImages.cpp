/* NON_MATCHING: the first divide-by-five sequence swaps multiplier/product registers and schedules the magic-constant load differently. */
#include "common.h"

extern "C" {
void effectSetByteSpeed(u32 alpha);
void FUN_00185dd4(s32 layer, s32 group, s32 image, s32 x, s32 y,
                  s32 width, s32 height, s32 mode);

/* Expand the two transition images and fade them near the end of the sequence. */
void transitionDrawExpandingImages(s32 frame)
{
    if (frame < 240) {
        return;
    }
    if (frame <= 330) {
        s32 alpha = 255;
        if (frame > 310) {
            alpha += (310 - frame) * 32;
            if (alpha < 0) {
                return;
            }
        }
        effectSetByteSpeed((u8)alpha);
        s32 height = frame - 240;
        if (height > 5) {
            height = 5;
        }
        height = 240 * height / 5;
        s32 y = height < 240 ? (240 - height) / 2 : 0;
        FUN_00185dd4(2, 4, 0x9088, 0, y, 400, height, 11);
        height = frame - 245;
        if (height > 8) {
            height = 8;
        }
        height = height * 240 / 8;
        y = height < 240 ? (240 - height) / 2 : 0;
        FUN_00185dd4(2, 4, 0x9089, 0, y, 400, height, 11);
        effectSetByteSpeed(255);
    }
}
}
