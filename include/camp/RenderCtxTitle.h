/* Shin Megami Tensei IV: the render context every draw goes through. IV keeps it as the title
 * scene object, g_titleScene. Apocalypse's is g_renderCtx (camp/RenderCtxA.h). */
#ifndef CAMP_RENDERCTXTITLE_H
#define CAMP_RENDERCTXTITLE_H

#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtx *g_titleScene;
/* Returns context->stereoMode (a getter armlink inlines at every call; Apocalypse's is in camp/RenderCtxA.h). */
s32 renderCtxGetStereoMode(RenderCtx *context);
/* Sets context->stereoMode (likewise inlined). */
void renderCtxSetStereoMode(RenderCtx *context, u32 mode);
}

#endif
