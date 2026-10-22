/* NON_MATCHING: channel interpolation is parallelized across VFP registers instead of retail's sequential packed-channel evaluation. */
#include "common.h"

struct PairedColorFadeState {
    /* 0x0000 */ u8 unk0000[0x4a0c];
    /* 0x4A0C */ u32 current[2];
    /* 0x4A14 */ u32 first[2];
    /* 0x4A1C */ u32 second[2];
    /* 0x4A24 */ u32 state[2];
    /* 0x4A2C */ s32 elapsed[2];
    /* 0x4A34 */ s32 duration[2];
};

static inline u32 interpolateMaskedColor(u32 from, u32 to, f32 weight)
{
    u32 alpha = (u32)((f32)((to & 0xff000000) - (from & 0xff000000)) * weight);
    u32 blue = (u32)((f32)((to & 0x00ff0000) - (from & 0x00ff0000)) * weight);
    u32 green = (u32)((f32)((to & 0x0000ff00) - (from & 0x0000ff00)) * weight);
    u32 red = (u32)((f32)((to & 0x000000ff) - (from & 0x000000ff)) * weight);
    return ((red + (from & 0x000000ff)) & 0x000000ff) |
           ((green + (from & 0x0000ff00)) & 0x0000ff00) |
           ((blue + (from & 0x00ff0000)) & 0x00ff0000) |
           ((alpha + (from & 0xff000000)) & 0xff000000);
}

/* Advance either direction of the selected packed-color fade. */
extern "C" void battleUpdateScreenFade(PairedColorFadeState *fade, s32 index)
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
