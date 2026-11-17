/* NON_MATCHING: only the literal pool order differs (retail places 0.0f first). */
#include "frame_tex/FrameTex.h"

extern "C" {

/* Starts the HDR layer as a full-screen quad (3 pixels of overscan) drawn additively with three colour passes. */
void FUN_002e2444(u32 first, u32 second, u32 third)
{
    FrameTexWork *work = g_frameTex;
    work->hdr.x[0] = -3.0f;
    work->hdr.x[1] = 403.0f;
    work->hdr.x[2] = -3.0f;
    work->hdr.x[3] = 403.0f;
    work->hdr.y[0] = -3.0f;
    work->hdr.y[1] = -3.0f;
    work->hdr.y[2] = 243.0f;
    work->hdr.y[3] = 243.0f;
    work->hdrColors[0] = first;
    work->hdrColors[1] = second;
    work->hdrColors[2] = third;
    work->hdr.depth = 0.0f;
    work->hdr.filtered = 1;
    work->hdr.blendMode = 1;
    work->hdr.levels = 3;
    work->hdr.ready = 1;
}
}
