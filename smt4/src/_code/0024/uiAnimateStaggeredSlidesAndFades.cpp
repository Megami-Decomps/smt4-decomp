/* NON_MATCHING: tween subobject bases, first-slide loop peeling and float constant scheduling differ; -O2 candidate. */
#include "common.h"

struct UiTweenMotion { u8 data[8]; };
struct UiTween {
    union { f32 value; s32 bits; } scalar;
    UiTweenMotion motion;
    s32 frame;
    u8 done;
    u8 unk11[3];
};
struct UiSlideState {
    u8 unk000[0x14];
    UiTween fades[2]; // 0x14
    UiTween slides[3]; // 0x3c
    u8 unk078[0x90];
    s32 state; // 0x108
    u8 unk10c[8];
    s32 phase; // 0x114
};
extern "C" {
s32 FUN_0026f024(UiTweenMotion *, s32, s32, s32, s32, s32);
void FUN_0026f100(UiTween *, s32, s32, f32, f32);

u32 uiAnimateStaggeredSlidesAndFades(UiSlideState *work, s32 entering)
{
    u32 complete = 0;
    if (!entering) {
        for (s32 i = 0; i < 3; ++i) {
            UiTween *slide = &work->slides[i];
            if (FUN_0026f024(&slide->motion, 0, -330, 4, slide->frame, 1))
                slide->done = 1;
            else
                ++slide->frame;
        }
        if (work->phase != 2) {
            for (s32 i = 0; i < 2; ++i) {
                UiTween *fade = &work->fades[i];
                FUN_0026f100(fade, 4, fade->frame, 1.0f, 0.0f);
                ++fade->frame;
            }
        }
    } else {
        if (work->state != 4) {
            for (s32 i = 0; i < 2; ++i) {
                UiTween *fade = &work->fades[i];
                FUN_0026f100(fade, 12, fade->frame, 0.0f, 1.0f);
                ++fade->frame;
            }
        }
        if (work->state != 2) {
            for (s32 i = 0; i < 3; ++i) {
                UiTween *slide = &work->slides[i];
                if (i == 0 || work->slides[i - 1].frame > 2) {
                    if (FUN_0026f024(&slide->motion, 330, 0, 12, slide->frame, 1))
                        slide->done = 1;
                    else
                        ++slide->frame;
                }
                slide->scalar.value = 1.0f;
            }
        }
    }
    if (work->fades[1].scalar.bits >= 0x3f800000 && work->state == 2 && entering)
        complete = 1;
    if (work->slides[2].done == 1)
        complete = 1;
    return complete;
}
}
