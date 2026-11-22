#include "common.h"

/* unit-local: the panel work's tweens, as only this animation step reads them. */
struct UiTweenMotion { u8 data[8]; };
struct UiTween {
    /* 0x00 */ f32 value;
    /* 0x04 */ UiTweenMotion motion;
    /* 0x0C */ s32 frame;
    /* 0x10 */ u8 done;
    /* 0x11 */ u8 unk11[3];
};
struct UiSlideState {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ UiTween fades[2];
    /* 0x03C */ UiTween slides[3];
    /* 0x078 */ u8 unk078[0x90];
    /* 0x108 */ s32 state;
    /* 0x10C */ u8 unk10c[8];
    /* 0x114 */ s32 phase;
};
extern "C" {
s32 FUN_0026f024(UiTweenMotion *, s32, s32, s32, s32, s32);
void timedValueInterpolateStep(UiTween *, s32, s32, f32, f32);

/* Steps the panel's slide and fade tweens in (entering) or out; returns 1 once the animation is complete. */
u32 uiAnimateStaggeredSlidesAndFades(UiSlideState *work, s32 entering)
{
    u32 complete = 0;
    if (entering) {
        if (work->state != 4) {
            for (s32 i = 0; i < 2; ++i) {
                timedValueInterpolateStep(&work->fades[i], 12, work->fades[i].frame, 0.0f, 1.0f);
                ++work->fades[i].frame;
            }
        }
        if (work->state != 2) {
            for (s32 i = 0; i < 3; ++i) {
                /* The first slide starts at once, each later one once its predecessor is 3 frames in. */
                if (i == 0) {
                    if (FUN_0026f024(&work->slides[i].motion, 330, 0, 12, work->slides[i].frame, 1))
                        work->slides[i].done = 1;
                    else
                        ++work->slides[i].frame;
                } else if (work->slides[i - 1].frame > 2) {
                    if (FUN_0026f024(&work->slides[i].motion, 330, 0, 12, work->slides[i].frame, 1))
                        work->slides[i].done = 1;
                    else
                        ++work->slides[i].frame;
                }
                work->slides[i].value = 1.0f;
            }
        }
    } else {
        for (s32 i = 0; i < 3; ++i) {
            if (FUN_0026f024(&work->slides[i].motion, 0, -330, 4, work->slides[i].frame, 1))
                work->slides[i].done = 1;
            else
                ++work->slides[i].frame;
        }
        if (work->phase != 2) {
            for (s32 i = 0; i < 2; ++i) {
                timedValueInterpolateStep(&work->fades[i], 4, work->fades[i].frame, 1.0f, 0.0f);
                ++work->fades[i].frame;
            }
        }
    }
    if (work->fades[1].value >= 1.0f && work->state == 2 && entering)
        complete = 1;
    if (work->slides[2].done == 1)
        complete = 1;
    return complete;
}
}
