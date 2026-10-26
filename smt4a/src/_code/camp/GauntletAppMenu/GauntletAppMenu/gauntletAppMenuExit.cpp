/* Gauntlet app menu: the exit step, which ends the menu's worker and returns 0. */
#include "common.h"
#include "camp/GauntletAppMenu/GauntletAppMenu.h"

extern "C" {

int renderCtxResetColorScale(u32 handle);
int skinObjectUpdateMatrices(u32 handle);
int renderCtxSelectTexture(u32 handle, int arg);
int FUN_003db56c(GauntletAppMenuWork *menu);

extern GauntletAppMenuWork *g_gauntletAppMenu;
extern u32 g_renderCtx;

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
