/* NON_MATCHING: retail keeps the 0.0/1.0 constants in s19/s18 and from/to in s17/s16 (vpush d8-d9) with the state compares ahead of the frame store; armcc here allocates only d8 and reorders the loads. */
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

f32 mathInterpolateTimed(s32 duration, u32 frame, f32 from, f32 to);

/* Step both faders by one frame. */
void FUN_00102438(void)
{
    for (u8 i = 0; i < 2; ++i) {
        Fader *fader = &DAT_004d9758[i];
        f32 from;
        f32 to;
        u8 state = fader->state;
        s32 frame = ++fader->frame;
        if (state == 2) {
            from = 1.0f;
            to = 0.0f;
        } else if (state == 1) {
            from = 0.0f;
            to = 1.0f;
        } else if (state == 0) {
            fader->value = 0.0f;
            continue;
        } else if (state == 3) {
            fader->value = 1.0f;
            continue;
        }
        if (fader->duration <= frame) {
            if (fader->state == 2) {
                fader->frame = 0;
                fader->state = 0;
            } else if (fader->state == 1) {
                fader->frame = 0;
                fader->state = 3;
            }
            fader->value = to;
        } else {
            fader->value = mathInterpolateTimed(fader->duration, frame, from, to);
        }
    }
}

} /* extern "C" */
