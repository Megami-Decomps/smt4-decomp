#include "camp/RenderCtx.h"

/* Stores the six orthographic bounds. */
extern "C" void FUN_0015a214(OrthoBounds *bounds, f32 left, f32 right, f32 bottom, f32 top, f32 nearClip, f32 farClip)
{
    bounds->left = left;
    bounds->right = right;
    bounds->bottom = bottom;
    bounds->top = top;
    bounds->nearClip = nearClip;
    bounds->farClip = farClip;
}
