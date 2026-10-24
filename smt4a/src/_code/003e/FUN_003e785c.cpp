/* NON_MATCHING: register allocation only: same instruction sequence and row count, but retail keeps the base in r3, saves fp as well and assigns the six field pointers to different registers. */
#include "common.h"

/* Two tinted layers' color fades: per layer the current color, the fade ends, the state and its progress. */
struct LayerColorFades {
    /* 0x0000 */ u8 unk0000[0x4D18];
    /* 0x4D18 */ u32 color[2];
    /* 0x4D20 */ u32 from[2];
    /* 0x4D28 */ u32 to[2];
    /* 0x4D30 */ u32 state[2];
    /* 0x4D38 */ s32 step[2];
    /* 0x4D40 */ s32 duration[2];
};

/* Moves each channel of `base` toward `other` by `weight` (0..1). */
static __inline u32 blendColor(u32 base, u32 other, f32 weight)
{
    u32 red = ((u32)((f32)((other & 0xFF000000) - (base & 0xFF000000)) * weight) + (base & 0xFF000000)) & 0xFF000000;
    u32 green = ((u32)((f32)((other & 0xFF0000) - (base & 0xFF0000)) * weight) + (base & 0xFF0000)) & 0xFF0000;
    u32 blue = ((u32)((f32)((other & 0xFF00) - (base & 0xFF00)) * weight) + (base & 0xFF00)) & 0xFF00;
    u32 alpha = ((u32)((f32)((other & 0xFF) - (base & 0xFF)) * weight) + (base & 0xFF)) & 0xFF;
    return alpha | blue | green | red;
}

extern "C" {

/* Steps one layer's color fade: fades in (states 0-2) or out (states 4-6), then holds the end color. */
void FUN_003e785c(LayerColorFades *fades, s32 layer)
{
    u32 *state = &fades->state[layer];
    s32 *duration = &fades->duration[layer];
    s32 *step = &fades->step[layer];
    u32 *color = &fades->color[layer];
    u32 *from = &fades->from[layer];
    u32 *to = &fades->to[layer];
    switch (*state) {
    case 0:
        *state = 1;
    case 1: {
        s32 total = *duration;
        u32 end = *to;
        u32 start = *from;
        f32 weight = 1.0f - (f32)*step / (f32)total;
        s32 next = *step + 1;
        *color = blendColor(end, start, weight);
        *step = next;
        if (next < total) {
            return;
        }
        *state = 2;
        break;
    }
    case 2:
        *color = *to;
        *state = 3;
        break;
    default:
        return;
    case 4:
        *state = 5;
    case 5: {
        s32 total = *duration;
        u32 end = *to;
        u32 start = *from;
        f32 weight = (f32)*step / (f32)total;
        s32 next = *step + 1;
        *color = blendColor(start, end, weight);
        *step = next;
        if (next < total) {
            return;
        }
        *state = 6;
        break;
    }
    case 6:
        *color = *to;
        *state = 7;
        break;
    }
}

}
