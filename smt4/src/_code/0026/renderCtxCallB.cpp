#include "title/titleMain.h"

extern "C" {

void FUN_002b90f8(TitleScene *scene, u32 value);

extern TitleScene *g_titleScene;

void renderCtxCallB(u32 value)
{
    FUN_002b90f8(g_titleScene, value);
}

} /* extern "C" */
