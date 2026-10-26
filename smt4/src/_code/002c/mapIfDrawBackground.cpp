#include "map/mapIf.h"

extern "C" {

void renderCtxSelectTexture(u32 a, MapIfWidget *widget);

extern MapIfGlobals g_mapIf;
extern u32 g_titleScene;
extern s32 g_gameState;

void mapIfDrawBackground(void)
{
    if (g_mapIf.state == NULL) {
        return;
    }
    if (g_gameState >= 100) {
        renderCtxSelectTexture(g_titleScene, g_mapIf.widgets->widget[0x22]);
        return;
    }
    renderCtxSelectTexture(g_titleScene, g_mapIf.widgets->widget[0x1A]);
}

} /* extern "C" */
