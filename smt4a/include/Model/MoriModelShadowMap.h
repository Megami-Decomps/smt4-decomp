#pragma once
#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {

extern RenderCtxA *g_renderCtx;

/* Switches the draw context to the display area for its stereo mode and records the area shown. */
void FUN_00157558(RenderCtxA *context);

} /* extern "C" */
