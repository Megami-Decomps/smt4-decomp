/* NON_MATCHING: blends a keyframed colour ramp over time and applies the alpha fade envelope (fade-in until one fraction of the span, fade-out after another); written from the decompilation, the float temporaries are stored to the retail scratch globals as the original does but the instruction order and the mode ladder's register use are not compared with retail */
#include "common.h"

#define RAMP_MODE_TWO_KEY 0
#define RAMP_MODE_THREE_KEY 1
#define RAMP_MODE_FOUR_KEY 2
#define RAMP_BYTE_TO_FLOAT 0.003921569f
#define RAMP_FLOAT_TO_BYTE 255.0f

struct ColorRamp {
    /* 0x00 */ s8 mode;
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
extern f32 DAT_004ea91c;
extern f32 DAT_004ea920;
extern f32 DAT_004ea924;
extern f32 DAT_004ea928;
extern f32 DAT_004ea92c;
extern f32 DAT_004ea930;
extern f32 DAT_004ea934;
extern f32 DAT_004ea938;   /* also holds the blend weight while computing */

/* Blend weight of `value` between two keys `from`..`to` spans (1.0 when the span is empty). */
static __inline f32 rampWeight(s32 value, s32 from, s32 to)
{
    f32 span = (f32)(to - from);
    f32 weight = 1.0f;
    if (span != 0.0f)
        weight = (f32)(value - from) / span;
    return weight;
}

u32 FUN_00269694(ColorRamp *ramp, AlphaEnvelope *envelope, s32 time, s32 total)
{
    if (total == 0)
        return (ramp->start & 0xFFFFFF) | (envelope->alpha << 24);

    f32 span = (f32)total;
    u32 from;     /* weighted by 1 - blend */
    u32 to;       /* weighted by blend */
    switch (ramp->mode) {
    case RAMP_MODE_TWO_KEY:
        from = ramp->start;
        to = ramp->end;
        DAT_004ea938 = (f32)time / span;
        break;
    case RAMP_MODE_THREE_KEY: {
        s32 key = (s32)(ramp->firstKey * span);
        if (key > time) {
            from = ramp->start;
            to = ramp->middleA;
            DAT_004ea938 = (f32)time / (f32)key;
        } else {
            to = ramp->end;
            from = ramp->middleA;
            DAT_004ea938 = rampWeight(time, key, total);
        }
        break;
    }
    case RAMP_MODE_FOUR_KEY: {
        s32 firstKey = (s32)(ramp->firstKey * span);
        if (firstKey > time) {
            from = ramp->start;
            to = ramp->middleA;
            DAT_004ea938 = (f32)time / (f32)firstKey;
        } else {
            s32 secondKey = (s32)(ramp->secondKey * span);
            if (time < secondKey) {
                from = ramp->middleA;
                to = ramp->middleB;
                DAT_004ea938 = rampWeight(time, firstKey, secondKey);
            } else {
                from = ramp->middleB;
                to = ramp->end;
                DAT_004ea938 = rampWeight(time, secondKey, total);
            }
        }
        break;
    }
    default:
        from = ramp->start;
        to = ramp->end;
        DAT_004ea938 = 0.0f;
        break;
    }

    f32 toA = (f32)(to >> 24);
    f32 toB = (f32)((to & 0xFFFFFF) >> 16);
    f32 toG = (f32)((to & 0xFFFF) >> 8);
    f32 toR = (f32)(to & 0xFF);
    f32 fromA = (f32)(from >> 24);
    f32 fromB = (f32)((from & 0xFFFFFF) >> 16);
    f32 fromG = (f32)((from & 0xFFFF) >> 8);
    f32 fromR = (f32)(from & 0xFF);
    f32 inverse = 1.0f - DAT_004ea938;
    DAT_004ea92c = toA * RAMP_BYTE_TO_FLOAT * DAT_004ea938;
    DAT_004ea930 = toB * RAMP_BYTE_TO_FLOAT * DAT_004ea938;
    DAT_004ea934 = toG * RAMP_BYTE_TO_FLOAT * DAT_004ea938;
    DAT_004ea938 = toR * RAMP_BYTE_TO_FLOAT * DAT_004ea938;
    DAT_004ea91c = fromA * RAMP_BYTE_TO_FLOAT * inverse + DAT_004ea92c;
    DAT_004ea920 = fromB * RAMP_BYTE_TO_FLOAT * inverse + DAT_004ea930;
    DAT_004ea924 = fromG * RAMP_BYTE_TO_FLOAT * inverse + DAT_004ea934;
    DAT_004ea928 = fromR * RAMP_BYTE_TO_FLOAT * inverse + DAT_004ea938;
    u32 blue = (u32)(DAT_004ea920 * RAMP_FLOAT_TO_BYTE);
    u32 green = (u32)(DAT_004ea924 * RAMP_FLOAT_TO_BYTE);
    u32 red = (u32)(DAT_004ea928 * RAMP_FLOAT_TO_BYTE);

    f32 fade = 1.0f;
    s32 fadeInEnd = (s32)(envelope->fadeInEnd * span);
    s32 fadeOutStart = (s32)(envelope->fadeOutStart * span);
    if (time < fadeInEnd)
        fade = (f32)time / (f32)fadeInEnd;
    else if (fadeOutStart < time)
        fade = (f32)(total - time) / (f32)(total - fadeOutStart);
    u32 alpha = (u32)((f32)envelope->alpha * fade);
    return (red & 0xFF) | ((blue & 0xFF) << 16) | ((green & 0xFF) << 8) | (alpha << 24);
}

} /* extern "C" */
