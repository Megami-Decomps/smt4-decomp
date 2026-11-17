#include "map/MapIfGlobals.h"
#include "game/GameState.h"

extern "C" {

void renderCtxSelectTexture(u32 a, MapIfWidget *widget);

extern u32 g_titleScene;

void mapIfDrawBackground(void)
{
    if (g_mapIf.state == NULL) {
        return;
    }
    if (g_gameState.mapId >= 100) {
        renderCtxSelectTexture(g_titleScene, g_mapIf.widgets->widget[0x22]);
        return;
    }
    renderCtxSelectTexture(g_titleScene, g_mapIf.widgets->widget[0x1A]);
}

} /* extern "C" */
