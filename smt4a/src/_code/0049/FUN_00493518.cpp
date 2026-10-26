#include "common.h"
#include "shard/TextureDrawCall.h"
#include "code/Code0049_Smt4a.h"

/* A rectangle (position and size) followed by an effect parameter word. */
struct EffectRect {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 width;
    /* 0x0C */ f32 height;
    /* 0x10 */ u32 parameter;
};

extern "C" {

void efctSetSpeed(f32 speed);

/* Plays effect `id` at the far corner of `rect` offset by (dx, dy), at speed `speed`, then resets the speed to 1. */
void FUN_00493518(f32 speed, const EffectRect *rect, u32 id, s32 dx, s32 dy, u32 last)
{
    s32 x = (s32)(rect->x + rect->width + (f32)dx);
    s32 y = (s32)(rect->y + rect->height + (f32)dy);

    efctSetSpeed(speed);
    FUN_001835b4(2, rect->parameter, id, x, y, last);
    efctSetSpeed(1.0f);
}

} /* extern "C" */
