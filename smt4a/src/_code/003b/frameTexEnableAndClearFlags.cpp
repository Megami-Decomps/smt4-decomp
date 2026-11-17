#include "frame_tex/FrameTexA.h"

// Enable the second ENCEFF capture set: clear its capture flags and select the alternate set.
extern "C" void frameTexEnableAndClearFlags()
{
    FrameTexWorkA *state = g_frameTex;
    state->encEffEnabled = 1;
    state->encEffCapturedLeft = 0;
    state->encEffCapturedRight = 0;
    state->encEffPendingRight = 0;
    state->encEffAlternate = 1;
}
