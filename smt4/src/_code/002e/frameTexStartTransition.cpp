#include "frame_tex/FrameTex.h"

extern "C" {

/* Starts the HDR layer as a full-screen quad (3 pixels of overscan) drawn additively with three colour passes. */
void frameTexStartTransition(u32 first, u32 second, u32 third)
{
    f32 depth = 0.0f;
    f32 left = -3.0f;
    f32 top = -3.0f;
    f32 right = 403.0f;
    f32 bottom = 243.0f;
    FrameTexWork *work = g_frameTex;
    work->hdr.x[0] = left;
    work->hdr.x[1] = right;
    work->hdr.x[2] = left;
    work->hdr.x[3] = right;
    work->hdr.y[0] = top;
    work->hdr.y[1] = top;
    work->hdr.y[2] = bottom;
    work->hdr.y[3] = bottom;
    work->hdrColors[0] = first;
    work->hdrColors[1] = second;
    work->hdrColors[2] = third;
    work->hdr.depth = depth;
    work->hdr.filtered = 1;
    work->hdr.blendMode = 1;
    work->hdr.levels = 3;
    work->hdr.ready = 1;
}
}
