#ifndef GFX_RENDER_COLOR_SCALE_H
#define GFX_RENDER_COLOR_SCALE_H

#include "common.h"

struct RenderCtxA;

/* Updates and, when changed, uploads the render context's four colour multipliers. */
extern "C" void FUN_00409c60(RenderCtxA *context, f32 red, f32 green, f32 blue, f32 alpha);

#endif
