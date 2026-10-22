#include "ui/FrameTex.h"
extern "C" FrameWorkA *g_frameTex;



// Enable the frame-texture state, clear its three flags, and mark it dirty.
extern "C" void frameTexEnableAndClearFlags()
{
    FrameWorkA *state = g_frameTex;
    state->enabled = 1;
    state->first = 0;
    state->second = 0;
    state->third = 0;
    state->dirty = 1;
}
