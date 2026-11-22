/* NON_MATCHING: blends a keyframed colour ramp over time (the two key colours unpacked into the vector scratch's first
 * two slots, scaled and summed there) and applies the alpha fade envelope; retail keeps the two key colours in ip/r0
 * (this build pairs them in r4/r5 with ldrd, one more saved register) and unpacks each colour low byte first. */
#include "gfx/VectorScratch.h"

#define RAMP_MODE_TWO_KEY 0
#define RAMP_MODE_THREE_KEY 1
#define RAMP_MODE_FOUR_KEY 2
#define RAMP_BYTE_TO_FLOAT 0.003921569f
#define RAMP_FLOAT_TO_BYTE 255.0f

struct ColorRamp {
    /* 0x00 */ u8 mode;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 start;
    /* 0x08 */ u32 end;
    /* 0x0C */ u32 middleA;
    /* 0x10 */ f32 firstKey;      /* fraction of the span where the first key sits */
    /* 0x14 */ u32 middleB;
    /* 0x18 */ f32 secondKey;
};

struct AlphaEnvelope {
    /* 0x00 */ u32 alpha;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ f32 fadeInEnd;     /* fraction of the span where the fade-in ends */
    /* 0x0C */ f32 fadeOutStart;  /* fraction of the span where the fade-out starts */
};

extern "C" {
/* A packed 0xAARRGGBB-style colour word as four floats in 0..1 (x the top byte). */
static __inline void rampColorToVector(nw::math::VEC4 *out, u32 color)
{
    out->x = (f32)(color >> 24) * RAMP_BYTE_TO_FLOAT;
    out->y = (f32)((color >> 16) & 0xFF) * RAMP_BYTE_TO_FLOAT;
    out->z = (f32)((color >> 8) & 0xFF) * RAMP_BYTE_TO_FLOAT;
    out->w = (f32)(color & 0xFF) * RAMP_BYTE_TO_FLOAT;
}

/* Blend weight of `value` between two keys `from`..`to` spans (1.0 when the span is empty). */
static __inline f32 rampWeight(s32 value, s32 from, s32 to)
{
    f32 span = (f32)(to - from);
    f32 weight;
    if (span != 0.0f)
        weight = (f32)(value - from) / span;
    else
        weight = 1.0f;
    return weight;
}

u32 colorRampBlendWithFade(ColorRamp *ramp, AlphaEnvelope *envelope, s32 time, s32 total)
{
    if (total == 0)
        return (ramp->start & 0xFFFFFF) | (envelope->alpha << 24);

    f32 span = (f32)total;
    f32 weight;   /* blend weight of `to` */
    u32 from;     /* weighted by 1 - blend */
    u32 to;       /* weighted by blend */
    switch (ramp->mode) {
    case RAMP_MODE_TWO_KEY:
        from = ramp->start;
        to = ramp->end;
        weight = (f32)time / span;
        break;
    case RAMP_MODE_THREE_KEY: {
        s32 key = (s32)(ramp->firstKey * span);
        if (key > time) {
            from = ramp->start;
            to = ramp->middleA;
            weight = (f32)time / (f32)key;
        } else {
            to = ramp->end;
            from = ramp->middleA;
            weight = rampWeight(time, key, total);
        }
        break;
    }
    case RAMP_MODE_FOUR_KEY: {
        s32 firstKey = (s32)(ramp->firstKey * span);
        if (firstKey > time) {
            from = ramp->start;
            to = ramp->middleA;
            weight = (f32)time / (f32)firstKey;
        } else {
            s32 secondKey = (s32)(ramp->secondKey * span);
            if (time < secondKey) {
                from = ramp->middleA;
                to = ramp->middleB;
                weight = rampWeight(time, firstKey, secondKey);
            } else {
                from = ramp->middleB;
                to = ramp->end;
                weight = rampWeight(time, secondKey, total);
            }
        }
        break;
    }
    default:
        from = ramp->start;
        to = ramp->end;
        weight = 0.0f;
        break;
    }

    nw::math::VEC4 *blend = &g_vectorScratch.first.vec4;
    nw::math::VEC4 *target = &g_vectorScratch.second.vec4;
    rampColorToVector(target, to);
    rampColorToVector(blend, from);
    nw::math::VEC4Scale(blend, blend, 1.0f - weight);
    nw::math::VEC4Scale(target, target, weight);
    nw::math::VEC4Add(blend, blend, target);
    u32 color = ((u32)(blend->x * RAMP_FLOAT_TO_BYTE) << 24) | (((u32)(blend->y * RAMP_FLOAT_TO_BYTE) & 0xFF) << 16) |
                (((u32)(blend->z * RAMP_FLOAT_TO_BYTE) & 0xFF) << 8) | ((u32)(blend->w * RAMP_FLOAT_TO_BYTE) & 0xFF);

    f32 fade = 1.0f;
    s32 fadeInEnd = (s32)(envelope->fadeInEnd * span);
    s32 fadeOutStart = (s32)(envelope->fadeOutStart * span);
    if (time < fadeInEnd)
        fade = (f32)time / (f32)fadeInEnd;
    else if (fadeOutStart < time)
        fade = (f32)(total - time) / (f32)(total - fadeOutStart);
    u32 alpha = (u32)((f32)envelope->alpha * fade);
    return (color & 0xFFFFFF) | (alpha << 24);
}

} /* extern "C" */
