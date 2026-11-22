/* NON_MATCHING: twin of IV's battleUpdateScreenFade; retail converts and merges the four channels one after another; armcc unrolls the channel loop and interleaves the conversions across VFP registers. */
#include "common.h"

struct PairedColorFadeState {
    /* 0x0000 */ u8 unk0000[0x4d18];
    /* 0x4D18 */ u32 current[2];
    /* 0x4D20 */ u32 first[2];
    /* 0x4D28 */ u32 second[2];
    /* 0x4D30 */ u32 state[2];
    /* 0x4D38 */ s32 elapsed[2];
    /* 0x4D40 */ s32 duration[2];
};

static inline u32 interpolateMaskedColor(u32 from, u32 to, f32 weight)
{
    u32 color = 0;
    for (u32 mask = 0xff000000; mask != 0; mask >>= 8)
        color |= ((u32)((f32)((to & mask) - (from & mask)) * weight) + (from & mask)) & mask;
    return color;
}

/* Advance either direction of the selected packed-color fade. */
extern "C" void FUN_003e785c(PairedColorFadeState *fade, s32 index)
{
    switch (fade->state[index]) {
    case 0:
        fade->state[index] = 1;
    case 1: {
        s32 duration = fade->duration[index];
        f32 weight = 1.0f - (f32)fade->elapsed[index] / (f32)duration;
        fade->current[index] = interpolateMaskedColor(fade->second[index], fade->first[index], weight);
        if (++fade->elapsed[index] >= duration)
            fade->state[index] = 2;
        break;
    }
    case 2:
        fade->current[index] = fade->second[index];
        fade->state[index] = 3;
        break;
    case 4:
        fade->state[index] = 5;
    case 5: {
        s32 duration = fade->duration[index];
        f32 weight = (f32)fade->elapsed[index] / (f32)duration;
        fade->current[index] = interpolateMaskedColor(fade->first[index], fade->second[index], weight);
        if (++fade->elapsed[index] >= duration)
            fade->state[index] = 6;
        break;
    }
    case 6:
        fade->current[index] = fade->second[index];
        fade->state[index] = 7;
        break;
    }
}
