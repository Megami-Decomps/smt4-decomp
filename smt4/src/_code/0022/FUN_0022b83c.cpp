/* NON_MATCHING: only VFP register numbering differs (retail s0/s3 for the clamped x/y and s1/s2 for the limits; ours s1/s0 and s3/s2). */
#include "common.h"

extern "C" {

struct Vec2 {
    f32 x, y;
};

/* An object with a 2D size at 0x50. */
struct ScreenObject {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ Vec2 size;
};

/* Clamps a scroll offset into [0, size - (400, 240)], i.e. keeps the 400x240 screen inside the object. */
void FUN_0022b83c(ScreenObject *object, f32 *offset)
{
    s32 maxX = (s32)(object->size.x - 400.0f);
    s32 maxY = (s32)(object->size.y - 240.0f);
    f32 x = offset[0];
    f32 y;

    x = x > 0.0f ? x : 0.0f;
    offset[0] = x;
    y = offset[1];
    y = y > 0.0f ? y : 0.0f;
    offset[1] = y;
    if (x > (f32)maxX) {
        x = (f32)maxX;
    }
    offset[0] = x;
    if (y > (f32)maxY) {
        y = (f32)maxY;
    }
    offset[1] = y;
}

} /* extern "C" */
