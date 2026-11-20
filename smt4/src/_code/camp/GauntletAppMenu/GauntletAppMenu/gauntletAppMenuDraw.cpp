#include "common.h"
#include "camp/GauntletAppMenu/GauntletAppMenu.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

int renderCtxResetColorScale(RenderCtx *context);
int gauntletAppMenuDrawScreen(GauntletAppMenuWork *menu);

extern GauntletAppMenuWork *g_gauntletAppMenu;

/* Draws the Gauntlet app menu (its "GauntletApp DDRAW" task): selects no texture, draws the screen, then
 * applies the context's transforms and resets its colour scale. */
u32 gauntletAppMenuDraw(void)
{
    GauntletAppMenuWork *menu = g_gauntletAppMenu;

    renderCtxSelectTexture(g_titleScene, NULL);
    gauntletAppMenuDrawScreen(menu);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    return 0;
}

} /* extern "C" */
