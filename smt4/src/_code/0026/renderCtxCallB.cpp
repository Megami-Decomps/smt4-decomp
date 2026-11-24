#include "nw/math/MTX44.h"
#include "title/titleMain.h"
#include "camp/RenderCtxTitle.h"

using nw::math::MTX44;

extern "C" {

void cameraSetViewMatrix(RenderCtx *scene, const MTX44 *matrix);

/* Sets `matrix` as the title scene's view matrix. */
void renderCtxCallB(const MTX44 *matrix)
{
    cameraSetViewMatrix(g_titleScene, matrix);
}

} /* extern "C" */
