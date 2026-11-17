#include "map/MapIfGlobals.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"

extern "C" {

void mapRenderApplyPrimary(void)
{
    if (g_mapIf.state != NULL)
        renderCtxSelectTexture(g_renderCtx, reinterpret_cast<AsdTexture *>(g_mapIf.widgets->widget[0x1C]));
}

}
