#include "map/MapIfGlobals.h"
#include "camp/RenderCtx.h"
extern "C" {
extern RenderCtx *g_titleScene;
/* Forward the active map interface's background widget to the title scene. */
void mapInterfaceForwardResource(void)
{
    if (g_mapIf.state != NULL)
        renderCtxSelectTexture(g_titleScene, reinterpret_cast<AsdTexture *>(g_mapIf.widgets->widget[0x17]));
}
}
