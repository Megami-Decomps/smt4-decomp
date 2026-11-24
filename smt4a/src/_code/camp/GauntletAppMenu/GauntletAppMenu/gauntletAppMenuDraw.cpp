#include "common.h"
#include "camp/GauntletAppMenu/GauntletAppMenu.h"
#include "camp/RenderCtxA.h"

extern "C" {

int renderCtxResetColorScale(RenderCtxA *context);
int skinObjectUpdateMatrices(RenderCtxA *handle);

extern GauntletAppMenuWork *g_gauntletAppMenu;

/* Draws the Gauntlet app menu (its "GauntletApp DDRAW" task): selects no texture, draws the screen, then
 * applies the context's transforms and resets its colour scale. */
u32 gauntletAppMenuDraw(void)
{
    GauntletAppMenuWork *menu = g_gauntletAppMenu;

    renderCtxSelectTexture(g_renderCtx, NULL);
    gauntletAppMenuDrawScreen(menu);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}

} /* extern "C" */
