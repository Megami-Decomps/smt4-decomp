/* NON_MATCHING: retail keeps the 1.0 constant in s18 and 0.0 in s19 (loading 0.0 first); this build swaps the two registers. Interpolation start/end now land in s17/s16 as in retail. */
#include "common.h"

/* A 0..1 fader: 0 = off, 1 = fading in, 2 = fading out, 3 = on. */
struct Fader {
    /* 0x00 */ f32 value;
    /* 0x04 */ s32 frame;
    /* 0x08 */ s32 duration;
    /* 0x0C */ u8 unk0c[4];
    /* 0x10 */ u8 state;
    /* 0x11 */ u8 unk11[3];
};

extern "C" {

extern Fader DAT_004d9758[2];

f32 mathInterpolateTimed(s32 duration, s32 frame, f32 from, f32 to);

/* Step one fader by one frame. */
static __inline void faderStep(Fader *fader)
{
    f32 from;
    f32 to;
    u8 state = fader->state;
    fader->frame++;
    s32 frame = fader->frame;
    if (state == 2) {
        from = 1.0f;
        to = 0.0f;
    } else if (state == 1) {
        from = 0.0f;
        to = 1.0f;
    } else if (state == 0) {
        fader->value = 0.0f;
        return;
    } else if (state == 3) {
        fader->value = 1.0f;
        return;
    }
    if (fader->duration <= frame) {
        if (state == 2) {
            fader->frame = 0;
            fader->state = 0;
        } else if (state == 1) {
            fader->frame = 0;
            fader->state = 3;
        }
        fader->value = to;
    } else {
        fader->value = mathInterpolateTimed(fader->duration, frame, from, to);
    }
}

/* Step both faders by one frame. */
void faderStepAll(void)
{
    for (u8 i = 0; i < 2; ++i) {
        faderStep(&DAT_004d9758[i]);
    }
}

} /* extern "C" */
