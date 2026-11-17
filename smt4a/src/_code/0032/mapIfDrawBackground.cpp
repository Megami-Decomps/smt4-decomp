#include "map/MapIfGlobals.h"
#include "game/GameStateA.h"

extern "C" {

void renderCtxSelectTexture(u32 a, MapIfWidget *widget);

extern u32 g_renderCtx;

void mapIfDrawBackground(void)
{
    if (g_mapIf.state == NULL) {
        return;
    }
    if (g_gameState.mapId >= 100) {
        renderCtxSelectTexture(g_renderCtx, g_mapIf.widgets->widget[0x29]);
        return;
    }
    renderCtxSelectTexture(g_renderCtx, g_mapIf.widgets->widget[0x20]);
}

} /* extern "C" */
