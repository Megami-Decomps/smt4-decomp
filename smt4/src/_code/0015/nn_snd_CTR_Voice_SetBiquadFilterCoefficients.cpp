#include "common.h"

extern "C" {

struct VoiceBody;

typedef struct BiquadCoefficients {
    u32 coef0;                     /* 0x00 */
    u32 coef1;                     /* 0x04 */
    u16 coef2;                     /* 0x08 */
} BiquadCoefficients;

typedef struct Voice {
    u8 unk00[0xc];
    BiquadCoefficients biquad;     /* 0x0C */
    u8 unk18[0x50];
    struct VoiceBody *body;        /* 0x68 */
} Voice;

void nn_snd_CTR_VoiceImpl_SetBiquadFilterCoefficients(struct VoiceBody *body, const BiquadCoefficients *coefficients);

/* Copies the coefficients into the voice, then passes them to nn_snd_CTR_VoiceImpl_SetBiquadFilterCoefficients (the function that follows it) for the voice's body. */
void nn_snd_CTR_Voice_SetBiquadFilterCoefficients(Voice *voice, const BiquadCoefficients *coefficients)
{
    voice->biquad.coef0 = coefficients->coef0;
    voice->biquad.coef1 = coefficients->coef1;
    voice->biquad.coef2 = coefficients->coef2;
    nn_snd_CTR_VoiceImpl_SetBiquadFilterCoefficients(voice->body, &voice->biquad);
}

} /* extern "C" */
