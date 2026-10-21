/* NON_MATCHING: compiler allocates the interpolation difference and ratio to different VFP registers. */
#include "common.h"


extern "C" {
float mathInterpolateTimed(s32 duration, s32 elapsed, float start, float end)
{
    if (duration <= 0) { return end; }
    if (elapsed <= 0) { return start; }
    if (elapsed >= duration) { return end; }
    return start + (end - start) * ((float)elapsed / (float)duration);
}
}
