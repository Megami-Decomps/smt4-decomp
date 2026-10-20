#include "title/titleMain.h"

extern "C" {

void cameraSetViewMatrix(TitleScene *scene, u32 value);

extern TitleScene *g_titleScene;

void renderCtxCallB(u32 value)
{
    cameraSetViewMatrix(g_titleScene, value);
}

} /* extern "C" */
