/* Shin Megami Tensei IV: the render context every draw goes through. IV keeps it as the title
 * scene object, g_titleScene. Apocalypse's is g_renderCtx (camp/RenderCtxA.h). */
#ifndef CAMP_RENDERCTXTITLE_H
#define CAMP_RENDERCTXTITLE_H

#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtx *g_titleScene;
}

#endif
