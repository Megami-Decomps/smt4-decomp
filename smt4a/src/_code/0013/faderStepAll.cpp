/* NON_MATCHING: 40 lines. Retail never sets the interpolation endpoints for a state above 3 (the original left
 * `from`/`to` uninitialised, so such a fader reused stale s16/s17); they are initialised here to keep the source
 * defined. With them defined armcc keeps the endpoints in s0/s1 and frees d9, where retail holds them in s16/s17
 * and 1.0/0.0 in s18/s19. */
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

extern Fader g_screenFadeSlots[2];

f32 mathInterpolateTimed(s32 duration, s32 frame, f32 from, f32 to);

/* Step both faders by one frame. */
void faderStepAll(void)
{
    /* Declared outside the loop: the interpolation endpoints carry over from the previous fader for the states
     * that set none (the original left them uninitialised). */
    f32 from = 0.0f;
    f32 to = 0.0f;
    for (u8 i = 0; i < 2; ++i) {
        Fader *fader = &g_screenFadeSlots[i];
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
            continue;
        } else if (state == 3) {
            fader->value = 1.0f;
            continue;
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
}

} /* extern "C" */
