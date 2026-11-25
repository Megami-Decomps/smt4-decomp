#include "camp/RenderCtx.h"

extern "C" void FUN_0015a214(OrthoBounds *bounds, f32 left, f32 right, f32 bottom, f32 top, f32 nearClip, f32 farClip);

/* Sets the orthographic bounds of the render context's screen camera: a tail call armlink turned into a branch to the
 * next instruction, the bounds setter that follows. */
extern "C" void FUN_0015a20c(RenderCtxA *context, f32 left, f32 right, f32 bottom, f32 top, f32 nearClip, f32 farClip)
{
    FUN_0015a214(&context->stereo.ortho, left, right, bottom, top, nearClip, farClip);
}
