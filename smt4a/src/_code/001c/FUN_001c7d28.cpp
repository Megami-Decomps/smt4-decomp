/* Copies the biquad filter coefficients into the voice body and marks them for update (bit 4). */
#include "common.h"

extern "C" {

typedef struct BiquadCoefficients {
    /* 0x00 */ u32 coef0;
    /* 0x04 */ u32 coef1;
    /* 0x08 */ u16 coef2;
} BiquadCoefficients;

typedef struct VoiceBody {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ BiquadCoefficients biquad;
    /* 0x1E */ u8 unk20[0x4c];
    /* 0x6C */ u16 updateFlags;
} VoiceBody;

void FUN_001c7d28(VoiceBody *body, const BiquadCoefficients *coefficients)
{
    body->biquad.coef0 = coefficients->coef0;
    body->biquad.coef1 = coefficients->coef1;
    body->biquad.coef2 = coefficients->coef2;
    body->updateFlags |= 0x10;
}

}
