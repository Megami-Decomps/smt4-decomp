/* NON_MATCHING: the byte flag parameter is now an s32 (callers declare FUN_00283c54(f32, f32, u32, u32, s32, s32)); remaining: retail interleaves the second clamp compare after the global load and literal loads (prologue/literal-pool scheduling). */
#include "gfx/FrameTextureWork.h"

extern "C" {
extern FrameTextureWork *g_frameTex;

/* Expands frame-transition bounds around the screen and stores its timing and mode. */
void FUN_00283c54(u32 state, u32 duration, s32 active, u32 mode, f32 horizontal, f32 vertical)
{
    union FloatWord { f32 value; s32 bits; } width, height;
    width.value = horizontal;
    height.value = vertical;
    if (width.bits < 0x3f800000) {
        horizontal = 1.0f;
    }
    if (height.bits < 0x3f800000) {
        vertical = 1.0f;
    }
    FrameTextureWork *work = g_frameTex;
    work->bounds[0] = -horizontal;
    work->bounds[1] = horizontal + 400.0f;
    work->bounds[2] = -horizontal;
    work->bounds[3] = horizontal + 400.0f;
    work->bounds[4] = -vertical;
    work->bounds[5] = -vertical;
    work->bottom[0] = vertical + 240.0f;
    work->bottom[1] = vertical + 240.0f;
    work->duration = duration;
    work->time = 0.0f;
    work->active = active;
    work->state = state;
    work->mode = mode;
    work->unkFA5 = 1;
}
}
