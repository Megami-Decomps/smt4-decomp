/* NON_MATCHING: retail uses `str r1, [r3, #4076]` where armcc emits `add r0, r3, #3072`. */
#include "frame_tex/FrameTexA.h"

extern "C" {

/* Starts the HDR layer as a full-screen quad (3 pixels of overscan) drawn additively with three colour passes. */
void frameTexStartTransition(u32 first, u32 second, u32 third)
{
    FrameTexWorkA *texture = g_frameTex;
    texture->hdr.x[0] = -3.0f;
    texture->hdr.x[1] = 403.0f;
    texture->hdr.x[2] = -3.0f;
    texture->hdr.x[3] = 403.0f;
    texture->hdr.y[0] = -3.0f;
    texture->hdr.y[1] = -3.0f;
    texture->hdr.y[2] = 243.0f;
    texture->hdr.y[3] = 243.0f;
    texture->hdrColors[0] = first;
    texture->hdrColors[1] = second;
    texture->hdrColors[2] = third;
    texture->hdr.depth = 0.0f;
    texture->hdr.filtered = 1;
    texture->hdr.blendMode = 1;
    texture->hdr.levels = 3;
    texture->hdr.ready = 1;
}

} /* extern "C" */
