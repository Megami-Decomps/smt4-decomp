/* Apocalypse: the render context every draw goes through (g_renderCtx). Only Apocalypse units
 * include this; IV reaches its context through g_titleScene. */
#ifndef CAMP_RENDERCTXA_H
#define CAMP_RENDERCTXA_H

#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
/* Returns context->stereoMode (a getter armlink inlines at every call). */
s32 renderCtxGetStereoMode(RenderCtxA *context);
}

#endif
