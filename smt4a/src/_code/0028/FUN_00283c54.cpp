/* NON_MATCHING: the byte flag parameter is now an s32 (callers declare FUN_00283c54(f32, f32, u32, u32, s32, s32)); remaining: retail interleaves the second clamp compare after the global load and literal loads (prologue/literal-pool scheduling). */
#include "frame_tex/FrameTexA.h"

extern "C" {

/* Starts the HDR layer as a quad padded around the 400x240 screen, with its colour, blending, filtering and downsample levels. */
void FUN_00283c54(u32 blendMode, u32 color, s32 filtered, u32 levels, f32 horizontal, f32 vertical)
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
    FrameTexWorkA *work = g_frameTex;
    work->hdr.x[0] = -horizontal;
    work->hdr.x[1] = horizontal + 400.0f;
    work->hdr.x[2] = -horizontal;
    work->hdr.x[3] = horizontal + 400.0f;
    work->hdr.y[0] = -vertical;
    work->hdr.y[1] = -vertical;
    work->hdr.y[2] = vertical + 240.0f;
    work->hdr.y[3] = vertical + 240.0f;
    work->hdr.color = color;
    work->hdr.depth = 0.0f;
    work->hdr.filtered = filtered;
    work->hdr.blendMode = blendMode;
    work->hdr.levels = levels;
    work->hdr.ready = 1;
}
}
