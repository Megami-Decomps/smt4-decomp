#include "common.h"

extern "C" {

typedef struct Voice {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 handle;
    /* 0x3C */ f32 mix[2];
} Voice;

extern void nn_snd_CTR_Voice_SetMixParam(u32 handle, f32 *mix);

static __inline s32 floatBits(f32 value)
{
    union {
        f32 f;
        s32 i;
    } bits;

    bits.f = value;
    return bits.i;
}

/* Sets the voice's two mix values (each 0..1) and applies them. */
void voiceSetMixParam(Voice *voice, f32 first, f32 second)
{
    if (voice != NULL && first >= 0.0f && floatBits(first) <= 0x3F800000 && second >= 0.0f &&
        floatBits(second) <= 0x3F800000) {
        voice->mix[0] = second;
        voice->mix[1] = first;
        nn_snd_CTR_Voice_SetMixParam(voice->handle, voice->mix);
    }
}

} /* extern "C" */
