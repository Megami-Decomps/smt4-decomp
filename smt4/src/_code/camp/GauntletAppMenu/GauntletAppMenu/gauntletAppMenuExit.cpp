/* Gauntlet app menu: the exit step, which ends the menu's worker and returns 0. */
#include "common.h"
#include "camp/GauntletAppMenu/GauntletAppMenu.h"

extern "C" {

int renderCtxResetColorScale(u32 handle);
int renderCtxApplyTransforms(u32 handle);
int renderCtxSelectTexture(u32 handle, int arg);
int FUN_0033149c(GauntletAppMenuWork *menu);

extern GauntletAppMenuWork *g_gauntletAppMenu;
extern u32 g_titleScene;

u32 gauntletAppMenuExit(void)
{
    GauntletAppMenuWork *menu = g_gauntletAppMenu;

    renderCtxSelectTexture(g_titleScene, 0);
    FUN_0033149c(menu);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    return 0;
}

} /* extern "C" */
