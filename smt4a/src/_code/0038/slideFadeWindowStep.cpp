#include "common.h"

extern "C" {

/* A window that slides and fades in or out over several frames. */
typedef struct SlideFadeWindow {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u8 fade[4];
    /* 0x3C */ u8 slide[8];
    /* 0x44 */ s32 frame;
    /* 0x48 */ s8 done;
} SlideFadeWindow;

u32 slideInterpolateAndSnap(void *slide, s32 mode, s32 offsetX, s32 offsetY, s32 frame);
u32 timedValueInterpolateStep(void *fade, s32 mode, s32 frame, f32 from, f32 to);

/* Steps the window's slide and fade in (`opening`) or out; returns whether the animation is done. */
bool slideFadeWindowStep(SlideFadeWindow *window, s32 opening)
{
    bool finished = false;

    if (opening) {
        u32 slid = slideInterpolateAndSnap(window->slide, 4, 30, 0, window->frame);
        u32 faded = timedValueInterpolateStep(window->fade, 4, window->frame, 0.0f, 1.0f);
        if (faded & slid) {
            window->done = 1;
        } else {
            window->frame++;
        }
    } else {
        u32 slid = slideInterpolateAndSnap(window->slide, 3, 0, -30, window->frame);
        u32 faded = timedValueInterpolateStep(window->fade, 3, window->frame, 1.0f, 0.0f);
        if (faded & slid) {
            window->done = 1;
        } else {
            window->frame++;
        }
    }
    if (window->done == 1) {
        finished = true;
    }
    return finished;
}

} /* extern "C" */
