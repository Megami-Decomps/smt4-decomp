/* NON_MATCHING: branch layout only: retail shares the frame increment between the two arms and ends with a single conditional move for the result; the build lays the done store out inline in the opening arm. */
#include "common.h"

extern "C" {

/* A window that slides and fades in or out over several frames. */
typedef struct SlideFadeWindow {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u8 fade[4];
    /* 0x3C */ u8 slide[8];
    /* 0x44 */ s32 frame;
    /* 0x48 */ u8 done;
} SlideFadeWindow;

u32 FUN_00318e08(void *slide, s32 mode, s32 offsetX, s32 offsetY, s32 frame);
u32 FUN_002e1c94(void *fade, s32 mode, s32 frame, f32 from, f32 to);

/* Steps the window's slide and fade in (`opening`) or out; returns whether the animation is done. */
bool FUN_00387ad8(SlideFadeWindow *window, s32 opening)
{
    bool finished = false;

    if (opening) {
        u32 slid = FUN_00318e08(window->slide, 4, 30, 0, window->frame);
        u32 faded = FUN_002e1c94(window->fade, 4, window->frame, 0.0f, 1.0f);
        if (faded & slid) {
            window->done = 1;
        } else {
            window->frame++;
        }
    } else {
        u32 slid = FUN_00318e08(window->slide, 3, 0, -30, window->frame);
        u32 faded = FUN_002e1c94(window->fade, 3, window->frame, 1.0f, 0.0f);
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
