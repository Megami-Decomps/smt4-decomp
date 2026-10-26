#include "map/mapIf.h"

extern "C" {

void renderCtxSelectTexture(u32 a, MapIfWidget *widget);

extern MapIfGlobalsA g_mapIf;
extern u32 g_renderCtx;
extern s32 g_gameState;

void mapIfDrawBackground(void)
{
    if (g_mapIf.state == NULL) {
        return;
    }
    if (g_gameState >= 100) {
        renderCtxSelectTexture(g_renderCtx, g_mapIf.widgets->widget[0x29]);
        return;
    }
    renderCtxSelectTexture(g_renderCtx, g_mapIf.widgets->widget[0x20]);
}

} /* extern "C" */
