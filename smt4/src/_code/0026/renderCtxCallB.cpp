#include "title/titleMain.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

void cameraSetViewMatrix(RenderCtx *scene, u32 value);


void renderCtxCallB(u32 value)
{
    cameraSetViewMatrix(g_titleScene, value);
}

} /* extern "C" */
