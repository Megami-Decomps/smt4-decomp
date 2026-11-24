/* NON_MATCHING: retail has a linker NOP between addressing the embedded camera and storing its bounds.
 * This appears to be a removed tail branch into the adjacent bounds setter. */
#include "camp/RenderCtx.h"

/* Sets the orthographic bounds of the render context's screen camera. */
extern "C" void FUN_0015a20c(RenderCtxA *context, f32 left, f32 right, f32 bottom, f32 top, f32 nearClip, f32 farClip)
{
    OrthoBounds &bounds = context->stereo.ortho;
    bounds.left = left;
    bounds.right = right;
    bounds.bottom = bottom;
    bounds.top = top;
    bounds.nearClip = nearClip;
    bounds.farClip = farClip;
}
