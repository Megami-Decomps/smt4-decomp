/* Gauntlet app menu: the exit step, which ends the menu's worker and returns 0. */
#include "common.h"
#include "camp/GauntletAppMenu/GauntletAppMenu.h"
#include "camp/RenderCtxA.h"

extern "C" {

int renderCtxResetColorScale(RenderCtxA *handle);
int skinObjectUpdateMatrices(RenderCtxA *handle);
int FUN_003db56c(GauntletAppMenuWork *menu);

extern GauntletAppMenuWork *g_gauntletAppMenu;

u32 gauntletAppMenuExit(void)
{
    GauntletAppMenuWork *menu = g_gauntletAppMenu;

    renderCtxSelectTexture(g_renderCtx, 0);
    FUN_003db56c(menu);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}

} /* extern "C" */
