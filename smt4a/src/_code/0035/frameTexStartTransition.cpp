#include "frame_tex/FrameTexA.h"

extern "C" {

/* Starts the HDR layer as a full-screen quad (3 pixels of overscan) drawn additively with three colour passes. */
void frameTexStartTransition(u32 first, u32 second, u32 third)
{
    f32 depth = 0.0f;
    f32 left = -3.0f;
    f32 top = -3.0f;
    f32 right = 403.0f;
    f32 bottom = 243.0f;
    FrameTexWorkA *texture = g_frameTex;
    texture->hdr.x[0] = left;
    texture->hdr.x[1] = right;
    texture->hdr.x[2] = left;
    texture->hdr.x[3] = right;
    texture->hdr.y[0] = top;
    texture->hdr.y[1] = top;
    texture->hdr.y[2] = bottom;
    texture->hdr.y[3] = bottom;
    texture->hdrColors[0] = first;
    texture->hdrColors[1] = second;
    texture->hdrColors[2] = third;
    texture->hdr.depth = depth;
    texture->hdr.filtered = 1;
    texture->hdr.blendMode = 1;
    texture->hdr.levels = 3;
    texture->hdr.ready = 1;
}

} /* extern "C" */
